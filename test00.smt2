(set-info :original "test00.bc")
(set-info :authors "SeaHorn v.0.1.0-rc3")
(declare-rel verifier.error (Bool Bool Bool ))
(declare-rel main@entry ())
(declare-rel main@_bb (Int Int (Array Int Int) ))
(declare-rel main@.preheader (Int Int (Array Int Int) ))
(declare-rel main@verifier.error.split ())
(declare-var main@%_6_0 Bool )
(declare-var main@%_7_0 Int )
(declare-var main@%_8_0 Int )
(declare-var main@%_9_0 Bool )
(declare-var main@%i.1.i_2 Int )
(declare-var main@%_2_0 Int )
(declare-var main@%_5_0 Bool )
(declare-var main@%shadow.mem.0_2 (Array Int Int) )
(declare-var main@%i.0.i1_2 Int )
(declare-var main@entry_0 Bool )
(declare-var main@%_0_0 (Array Int Int) )
(declare-var main@%a.i_0 Int )
(declare-var main@_bb_0 Bool )
(declare-var main@%shadow.mem.0_0 (Array Int Int) )
(declare-var main@%i.0.i1_0 Int )
(declare-var main@%shadow.mem.0_1 (Array Int Int) )
(declare-var main@%i.0.i1_1 Int )
(declare-var main@%_3_0 (Array Int Int) )
(declare-var main@%_4_0 Int )
(declare-var main@_bb_1 Bool )
(declare-var main@.preheader.preheader_0 Bool )
(declare-var main@.preheader_0 Bool )
(declare-var main@%i.1.i_0 Int )
(declare-var main@%i.1.i_1 Int )
(declare-var main@%_10_0 Int )
(declare-var main@.preheader_1 Bool )
(declare-var main@verifier.error_0 Bool )
(declare-var main@verifier.error.split_0 Bool )
(rule (verifier.error false false false))
(rule (verifier.error false true true))
(rule (verifier.error true false true))
(rule (verifier.error true true true))
(rule main@entry)
(rule (=> (and main@entry
         true
         (> main@%a.i_0 0)
         (=> main@_bb_0 (and main@_bb_0 main@entry_0))
         main@_bb_0
         (=> (and main@_bb_0 main@entry_0) (= main@%shadow.mem.0_0 main@%_0_0))
         (=> (and main@_bb_0 main@entry_0) (= main@%i.0.i1_0 0))
         (=> (and main@_bb_0 main@entry_0)
             (= main@%shadow.mem.0_1 main@%shadow.mem.0_0))
         (=> (and main@_bb_0 main@entry_0) (= main@%i.0.i1_1 main@%i.0.i1_0)))
    (main@_bb main@%a.i_0 main@%i.0.i1_1 main@%shadow.mem.0_1)))
(rule (let ((a!1 (and (main@_bb main@%a.i_0 main@%i.0.i1_0 main@%shadow.mem.0_0)
                true
                (= main@%_2_0 (+ main@%a.i_0 (* 0 200) (* main@%i.0.i1_0 4)))
                (or (<= main@%a.i_0 0) (> main@%_2_0 0))
                (> main@%a.i_0 0)
                (= main@%_3_0 (store main@%shadow.mem.0_0 main@%_2_0 0))
                (= main@%_4_0 (+ main@%i.0.i1_0 1))
                (= main@%_5_0 (< main@%_4_0 50))
                (=> main@_bb_1 (and main@_bb_1 main@_bb_0))
                main@_bb_1
                (=> (and main@_bb_1 main@_bb_0) main@%_5_0)
                (=> (and main@_bb_1 main@_bb_0)
                    (= main@%shadow.mem.0_1 main@%_3_0))
                (=> (and main@_bb_1 main@_bb_0) (= main@%i.0.i1_1 main@%_4_0))
                (=> (and main@_bb_1 main@_bb_0)
                    (= main@%shadow.mem.0_2 main@%shadow.mem.0_1))
                (=> (and main@_bb_1 main@_bb_0)
                    (= main@%i.0.i1_2 main@%i.0.i1_1)))))
  (=> a!1 (main@_bb main@%a.i_0 main@%i.0.i1_2 main@%shadow.mem.0_2))))
(rule (let ((a!1 (and (main@_bb main@%a.i_0 main@%i.0.i1_0 main@%shadow.mem.0_0)
                true
                (= main@%_2_0 (+ main@%a.i_0 (* 0 200) (* main@%i.0.i1_0 4)))
                (or (<= main@%a.i_0 0) (> main@%_2_0 0))
                (> main@%a.i_0 0)
                (= main@%_3_0 (store main@%shadow.mem.0_0 main@%_2_0 0))
                (= main@%_4_0 (+ main@%i.0.i1_0 1))
                (= main@%_5_0 (< main@%_4_0 50))
                (=> main@.preheader.preheader_0
                    (and main@.preheader.preheader_0 main@_bb_0))
                (=> (and main@.preheader.preheader_0 main@_bb_0)
                    (not main@%_5_0))
                (=> main@.preheader_0
                    (and main@.preheader_0 main@.preheader.preheader_0))
                main@.preheader_0
                (=> (and main@.preheader_0 main@.preheader.preheader_0)
                    (= main@%i.1.i_0 0))
                (=> (and main@.preheader_0 main@.preheader.preheader_0)
                    (= main@%i.1.i_1 main@%i.1.i_0)))))
  (=> a!1 (main@.preheader main@%i.1.i_1 main@%a.i_0 main@%_3_0))))
(rule (let ((a!1 (and (main@.preheader main@%i.1.i_0 main@%a.i_0 main@%_3_0)
                true
                (= main@%_6_0 (< main@%i.1.i_0 50))
                main@%_6_0
                (= main@%_7_0 (+ main@%a.i_0 (* 0 200) (* main@%i.1.i_0 4)))
                (or (<= main@%a.i_0 0) (> main@%_7_0 0))
                (> main@%a.i_0 0)
                (= main@%_8_0 (select main@%_3_0 main@%_7_0))
                (= main@%_9_0 (= main@%_8_0 0))
                (= main@%_10_0 (+ main@%i.1.i_0 1))
                (=> main@.preheader_1 (and main@.preheader_1 main@.preheader_0))
                main@.preheader_1
                (=> (and main@.preheader_1 main@.preheader_0) main@%_9_0)
                (=> (and main@.preheader_1 main@.preheader_0)
                    (= main@%i.1.i_1 main@%_10_0))
                (=> (and main@.preheader_1 main@.preheader_0)
                    (= main@%i.1.i_2 main@%i.1.i_1)))))
  (=> a!1 (main@.preheader main@%i.1.i_2 main@%a.i_0 main@%_3_0))))
(rule (let ((a!1 (and (main@.preheader main@%i.1.i_0 main@%a.i_0 main@%_3_0)
                true
                (= main@%_6_0 (< main@%i.1.i_0 50))
                main@%_6_0
                (= main@%_7_0 (+ main@%a.i_0 (* 0 200) (* main@%i.1.i_0 4)))
                (or (<= main@%a.i_0 0) (> main@%_7_0 0))
                (> main@%a.i_0 0)
                (= main@%_8_0 (select main@%_3_0 main@%_7_0))
                (= main@%_9_0 (= main@%_8_0 0))
                (= main@%_10_0 (+ main@%i.1.i_0 1))
                (=> main@verifier.error_0
                    (and main@verifier.error_0 main@.preheader_0))
                (=> (and main@verifier.error_0 main@.preheader_0)
                    (not main@%_9_0))
                (=> main@verifier.error.split_0
                    (and main@verifier.error.split_0 main@verifier.error_0))
                main@verifier.error.split_0)))
  (=> a!1 main@verifier.error.split)))
(query main@verifier.error.split)

