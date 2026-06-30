#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195798
// Address: 0x195798 - 0x195960
void sub_00195798_0x195798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195798_0x195798");
#endif

    switch (ctx->pc) {
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        default: break;
    }

    ctx->pc = 0x195798u;

label_195798:
    // 0x195798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19579c:
    // 0x19579c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1957a0:
    // 0x1957a0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1957a4:
    // 0x1957a4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1957a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1957a8:
    // 0x1957a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1957a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1957ac:
    // 0x1957ac: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1957acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1957b0:
    // 0x1957b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1957b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1957b4:
    // 0x1957b4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1957b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1957b8:
    // 0x1957b8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1957b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1957bc:
    // 0x1957bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1957bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1957c0:
    // 0x1957c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1957c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1957c4:
    // 0x1957c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1957c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1957c8:
    // 0x1957c8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1957c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1957cc:
    // 0x1957cc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1957ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1957d0:
    // 0x1957d0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1957d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1957d4:
    // 0x1957d4: 0x8e7603d8  lw          $s6, 0x3D8($s3)
    ctx->pc = 0x1957d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 984)));
label_1957d8:
    // 0x1957d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1957dc:
    if (ctx->pc == 0x1957DCu) {
        ctx->pc = 0x1957DCu;
            // 0x1957dc: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->pc = 0x1957E0u;
        goto label_1957e0;
    }
    ctx->pc = 0x1957D8u;
    {
        const bool branch_taken_0x1957d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957D8u;
            // 0x1957dc: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957d8) {
            ctx->pc = 0x1957E4u;
            goto label_1957e4;
        }
    }
    ctx->pc = 0x1957E0u;
label_1957e0:
    // 0x1957e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1957e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1957e4:
    // 0x1957e4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1957e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1957e8:
    // 0x1957e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1957ec:
    if (ctx->pc == 0x1957ECu) {
        ctx->pc = 0x1957ECu;
            // 0x1957ec: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->pc = 0x1957F0u;
        goto label_1957f0;
    }
    ctx->pc = 0x1957E8u;
    {
        const bool branch_taken_0x1957e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957E8u;
            // 0x1957ec: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957e8) {
            ctx->pc = 0x195800u;
            goto label_195800;
        }
    }
    ctx->pc = 0x1957F0u;
label_1957f0:
    // 0x1957f0: 0xc064b62  jal         func_192D88
label_1957f4:
    if (ctx->pc == 0x1957F4u) {
        ctx->pc = 0x1957F4u;
            // 0x1957f4: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x1957F8u;
        goto label_1957f8;
    }
    ctx->pc = 0x1957F0u;
    SET_GPR_U32(ctx, 31, 0x1957F8u);
    ctx->pc = 0x1957F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1957F0u;
            // 0x1957f4: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957F8u; }
        if (ctx->pc != 0x1957F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957F8u; }
        if (ctx->pc != 0x1957F8u) { return; }
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_1957fc:
    if (ctx->pc == 0x1957FCu) {
        ctx->pc = 0x1957FCu;
            // 0x1957fc: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->pc = 0x195800u;
        goto label_195800;
    }
    ctx->pc = 0x1957F8u;
    {
        const bool branch_taken_0x1957f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957F8u;
            // 0x1957fc: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957f8) {
            ctx->pc = 0x1957E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1957e0;
        }
    }
    ctx->pc = 0x195800u;
label_195800:
    // 0x195800: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x195800u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195804:
    // 0x195804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195808:
    // 0x195808: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
label_19580c:
    if (ctx->pc == 0x19580Cu) {
        ctx->pc = 0x19580Cu;
            // 0x19580c: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->pc = 0x195810u;
        goto label_195810;
    }
    ctx->pc = 0x195808u;
    {
        const bool branch_taken_0x195808 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x19580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195808u;
            // 0x19580c: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195808) {
            ctx->pc = 0x195824u;
            goto label_195824;
        }
    }
    ctx->pc = 0x195810u;
label_195810:
    // 0x195810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195814:
    // 0x195814: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x195814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_195818:
    // 0x195818: 0xc065658  jal         func_195960
label_19581c:
    if (ctx->pc == 0x19581Cu) {
        ctx->pc = 0x19581Cu;
            // 0x19581c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195820u;
        goto label_195820;
    }
    ctx->pc = 0x195818u;
    SET_GPR_U32(ctx, 31, 0x195820u);
    ctx->pc = 0x19581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195818u;
            // 0x19581c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195960u;
    if (runtime->hasFunction(0x195960u)) {
        auto targetFn = runtime->lookupFunction(0x195960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195820u; }
        if (ctx->pc != 0x195820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195960_0x195960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195820u; }
        if (ctx->pc != 0x195820u) { return; }
    }
    ctx->pc = 0x195820u;
label_195820:
    // 0x195820: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x195820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195824:
    // 0x195824: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_195828:
    // 0x195828: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_19582c:
    // 0x19582c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_195830:
    // 0x195830: 0x245403d0  addiu       $s4, $v0, 0x3D0
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
label_195834:
    // 0x195834: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_195838:
    // 0x195838: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19583c:
    // 0x19583c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_195840:
    if (ctx->pc == 0x195840u) {
        ctx->pc = 0x195840u;
            // 0x195840: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195844u;
        goto label_195844;
    }
    ctx->pc = 0x19583Cu;
    {
        const bool branch_taken_0x19583c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x195840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19583Cu;
            // 0x195840: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19583c) {
            ctx->pc = 0x1958FCu;
            goto label_1958fc;
        }
    }
    ctx->pc = 0x195844u;
label_195844:
    // 0x195844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195848:
    // 0x195848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19584c:
    // 0x19584c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195850:
    // 0x195850: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_195854:
    // 0x195854: 0x40f809  jalr        $v0
label_195858:
    if (ctx->pc == 0x195858u) {
        ctx->pc = 0x195858u;
            // 0x195858: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19585Cu;
        goto label_19585c;
    }
    ctx->pc = 0x195854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19585Cu);
        ctx->pc = 0x195858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195854u;
            // 0x195858: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19585Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19585Cu; }
            if (ctx->pc != 0x19585Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19585Cu;
label_19585c:
    // 0x19585c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_195860:
    // 0x195860: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_195864:
    // 0x195864: 0xc04a508  jal         func_129420
label_195868:
    if (ctx->pc == 0x195868u) {
        ctx->pc = 0x195868u;
            // 0x195868: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x19586Cu;
        goto label_19586c;
    }
    ctx->pc = 0x195864u;
    SET_GPR_U32(ctx, 31, 0x19586Cu);
    ctx->pc = 0x195868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195864u;
            // 0x195868: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19586Cu; }
        if (ctx->pc != 0x19586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19586Cu; }
        if (ctx->pc != 0x19586Cu) { return; }
    }
    ctx->pc = 0x19586Cu;
label_19586c:
    // 0x19586c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195870:
    // 0x195870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195874:
    // 0x195874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195878:
    // 0x195878: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19587c:
    // 0x19587c: 0x40f809  jalr        $v0
label_195880:
    if (ctx->pc == 0x195880u) {
        ctx->pc = 0x195880u;
            // 0x195880: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195884u;
        goto label_195884;
    }
    ctx->pc = 0x19587Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195884u);
        ctx->pc = 0x195880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19587Cu;
            // 0x195880: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195884u; }
            if (ctx->pc != 0x195884u) { return; }
        }
        }
    }
    ctx->pc = 0x195884u;
label_195884:
    // 0x195884: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195888:
    // 0x195888: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x195888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_19588c:
    // 0x19588c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_195890:
    if (ctx->pc == 0x195890u) {
        ctx->pc = 0x195890u;
            // 0x195890: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->pc = 0x195894u;
        goto label_195894;
    }
    ctx->pc = 0x19588Cu;
    {
        const bool branch_taken_0x19588c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19588Cu;
            // 0x195890: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19588c) {
            ctx->pc = 0x1958E4u;
            goto label_1958e4;
        }
    }
    ctx->pc = 0x195894u;
label_195894:
    // 0x195894: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195898:
    // 0x195898: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19589c:
    // 0x19589c: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1958a0:
    // 0x1958a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1958a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1958a4:
    // 0x1958a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1958a8:
    // 0x1958a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1958a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1958ac:
    // 0x1958ac: 0x40f809  jalr        $v0
label_1958b0:
    if (ctx->pc == 0x1958B0u) {
        ctx->pc = 0x1958B0u;
            // 0x1958b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1958B4u;
        goto label_1958b4;
    }
    ctx->pc = 0x1958ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1958B4u);
        ctx->pc = 0x1958B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958ACu;
            // 0x1958b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1958B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1958B4u; }
            if (ctx->pc != 0x1958B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1958B4u;
label_1958b4:
    // 0x1958b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1958b8:
    // 0x1958b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1958bc:
    // 0x1958bc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1958c0:
    // 0x1958c0: 0xc04a508  jal         func_129420
label_1958c4:
    if (ctx->pc == 0x1958C4u) {
        ctx->pc = 0x1958C4u;
            // 0x1958c4: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->pc = 0x1958C8u;
        goto label_1958c8;
    }
    ctx->pc = 0x1958C0u;
    SET_GPR_U32(ctx, 31, 0x1958C8u);
    ctx->pc = 0x1958C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958C0u;
            // 0x1958c4: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958C8u; }
        if (ctx->pc != 0x1958C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958C8u; }
        if (ctx->pc != 0x1958C8u) { return; }
    }
    ctx->pc = 0x1958C8u;
label_1958c8:
    // 0x1958c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1958cc:
    // 0x1958cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1958ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1958d0:
    // 0x1958d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1958d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1958d4:
    // 0x1958d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1958d8:
    // 0x1958d8: 0x40f809  jalr        $v0
label_1958dc:
    if (ctx->pc == 0x1958DCu) {
        ctx->pc = 0x1958DCu;
            // 0x1958dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1958E0u;
        goto label_1958e0;
    }
    ctx->pc = 0x1958D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1958E0u);
        ctx->pc = 0x1958DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958D8u;
            // 0x1958dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1958E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1958E0u; }
            if (ctx->pc != 0x1958E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_1958e4:
    // 0x1958e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1958e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1958e8:
    // 0x1958e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1958ec:
    if (ctx->pc == 0x1958ECu) {
        ctx->pc = 0x1958ECu;
            // 0x1958ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1958F0u;
        goto label_1958f0;
    }
    ctx->pc = 0x1958E8u;
    {
        const bool branch_taken_0x1958e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958e8) {
            ctx->pc = 0x1958ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1958E8u;
            // 0x1958ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195900u;
            goto label_195900;
        }
    }
    ctx->pc = 0x1958F0u;
label_1958f0:
    // 0x1958f0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1958f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1958f4:
    // 0x1958f4: 0x60f809  jalr        $v1
label_1958f8:
    if (ctx->pc == 0x1958F8u) {
        ctx->pc = 0x1958F8u;
            // 0x1958f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1958FCu;
        goto label_1958fc;
    }
    ctx->pc = 0x1958F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1958FCu);
        ctx->pc = 0x1958F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958F4u;
            // 0x1958f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1958FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1958FCu; }
            if (ctx->pc != 0x1958FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1958FCu;
label_1958fc:
    // 0x1958fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1958fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_195900:
    // 0x195900: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
label_195904:
    if (ctx->pc == 0x195904u) {
        ctx->pc = 0x195904u;
            // 0x195904: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195908u;
        goto label_195908;
    }
    ctx->pc = 0x195900u;
    {
        const bool branch_taken_0x195900 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x195904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195900u;
            // 0x195904: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195900) {
            ctx->pc = 0x19592Cu;
            goto label_19592c;
        }
    }
    ctx->pc = 0x195908u;
label_195908:
    // 0x195908: 0x8e64040c  lw          $a0, 0x40C($s3)
    ctx->pc = 0x195908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1036)));
label_19590c:
    // 0x19590c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_195910:
    if (ctx->pc == 0x195910u) {
        ctx->pc = 0x195910u;
            // 0x195910: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195914u;
        goto label_195914;
    }
    ctx->pc = 0x19590Cu;
    {
        const bool branch_taken_0x19590c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19590Cu;
            // 0x195910: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19590c) {
            ctx->pc = 0x19592Cu;
            goto label_19592c;
        }
    }
    ctx->pc = 0x195914u;
label_195914:
    // 0x195914: 0x8e660410  lw          $a2, 0x410($s3)
    ctx->pc = 0x195914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1040)));
label_195918:
    // 0x195918: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x195918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_19591c:
    // 0x19591c: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x19591cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_195920:
    // 0x195920: 0xc04a508  jal         func_129420
label_195924:
    if (ctx->pc == 0x195924u) {
        ctx->pc = 0x195924u;
            // 0x195924: 0xae660414  sw          $a2, 0x414($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 6));
        ctx->pc = 0x195928u;
        goto label_195928;
    }
    ctx->pc = 0x195920u;
    SET_GPR_U32(ctx, 31, 0x195928u);
    ctx->pc = 0x195924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195920u;
            // 0x195924: 0xae660414  sw          $a2, 0x414($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195928u; }
        if (ctx->pc != 0x195928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195928u; }
        if (ctx->pc != 0x195928u) { return; }
    }
    ctx->pc = 0x195928u;
label_195928:
    // 0x195928: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x195928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19592c:
    // 0x19592c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195930:
    // 0x195930: 0x2fe100a  movz        $v0, $s7, $fp
    ctx->pc = 0x195930u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_195934:
    // 0x195934: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x195934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195938:
    // 0x195938: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x195938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19593c:
    // 0x19593c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x19593cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_195940:
    // 0x195940: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x195940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195944:
    // 0x195944: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x195944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_195948:
    // 0x195948: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x195948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19594c:
    // 0x19594c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x19594cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_195950:
    // 0x195950: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x195950u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_195954:
    // 0x195954: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x195954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_195958:
    // 0x195958: 0x3e00008  jr          $ra
label_19595c:
    if (ctx->pc == 0x19595Cu) {
        ctx->pc = 0x19595Cu;
            // 0x19595c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x195960u;
        goto label_fallthrough_0x195958;
    }
    ctx->pc = 0x195958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195958u;
            // 0x19595c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x195958:
    ctx->pc = 0x195960u;
}
