#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002398D0
// Address: 0x2398d0 - 0x2399e0
void sub_002398D0_0x2398d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002398D0_0x2398d0");
#endif

    switch (ctx->pc) {
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        case 0x239968u: goto label_239968;
        case 0x23996cu: goto label_23996c;
        case 0x239970u: goto label_239970;
        case 0x239974u: goto label_239974;
        case 0x239978u: goto label_239978;
        case 0x23997cu: goto label_23997c;
        case 0x239980u: goto label_239980;
        case 0x239984u: goto label_239984;
        case 0x239988u: goto label_239988;
        case 0x23998cu: goto label_23998c;
        case 0x239990u: goto label_239990;
        case 0x239994u: goto label_239994;
        case 0x239998u: goto label_239998;
        case 0x23999cu: goto label_23999c;
        case 0x2399a0u: goto label_2399a0;
        case 0x2399a4u: goto label_2399a4;
        case 0x2399a8u: goto label_2399a8;
        case 0x2399acu: goto label_2399ac;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399b4u: goto label_2399b4;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399bcu: goto label_2399bc;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399c4u: goto label_2399c4;
        case 0x2399c8u: goto label_2399c8;
        case 0x2399ccu: goto label_2399cc;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399d4u: goto label_2399d4;
        case 0x2399d8u: goto label_2399d8;
        case 0x2399dcu: goto label_2399dc;
        default: break;
    }

    ctx->pc = 0x2398d0u;

label_2398d0:
    // 0x2398d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2398d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2398d4:
    // 0x2398d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2398d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2398d8:
    // 0x2398d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2398d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2398dc:
    // 0x2398dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2398dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2398e0:
    // 0x2398e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2398e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2398e4:
    // 0x2398e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2398e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2398e8:
    // 0x2398e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2398e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2398ec:
    // 0x2398ec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2398ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_2398f0:
    // 0x2398f0: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x2398f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_2398f4:
    // 0x2398f4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2398f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2398f8:
    // 0x2398f8: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_2398fc:
    if (ctx->pc == 0x2398FCu) {
        ctx->pc = 0x2398FCu;
            // 0x2398fc: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->pc = 0x239900u;
        goto label_239900;
    }
    ctx->pc = 0x2398F8u;
    {
        const bool branch_taken_0x2398f8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2398FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398F8u;
            // 0x2398fc: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398f8) {
            ctx->pc = 0x239938u;
            goto label_239938;
        }
    }
    ctx->pc = 0x239900u;
label_239900:
    // 0x239900: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239904:
    // 0x239904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239908:
    // 0x239908: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23990c:
    // 0x23990c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239910:
    // 0x239910: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_239914:
    if (ctx->pc == 0x239914u) {
        ctx->pc = 0x239918u;
        goto label_239918;
    }
    ctx->pc = 0x239910u;
    {
        const bool branch_taken_0x239910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239910) {
            ctx->pc = 0x239928u;
            goto label_239928;
        }
    }
    ctx->pc = 0x239918u;
label_239918:
    // 0x239918: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23991c:
    // 0x23991c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_239920:
    // 0x239920: 0x320f809  jalr        $t9
label_239924:
    if (ctx->pc == 0x239924u) {
        ctx->pc = 0x239924u;
            // 0x239924: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239928u;
        goto label_239928;
    }
    ctx->pc = 0x239920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239928u);
        ctx->pc = 0x239924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239920u;
            // 0x239924: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239928u; }
            if (ctx->pc != 0x239928u) { return; }
        }
        }
    }
    ctx->pc = 0x239928u;
label_239928:
    // 0x239928: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23992c:
    // 0x23992c: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_239930:
    if (ctx->pc == 0x239930u) {
        ctx->pc = 0x239930u;
            // 0x239930: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239934u;
        goto label_239934;
    }
    ctx->pc = 0x23992Cu;
    {
        const bool branch_taken_0x23992c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23992Cu;
            // 0x239930: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23992c) {
            ctx->pc = 0x239904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239904;
        }
    }
    ctx->pc = 0x239934u;
label_239934:
    // 0x239934: 0x0  nop
    ctx->pc = 0x239934u;
    // NOP
label_239938:
    // 0x239938: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23993c:
    // 0x23993c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23993cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239940:
    // 0x239940: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239944:
    if (ctx->pc == 0x239944u) {
        ctx->pc = 0x239948u;
        goto label_239948;
    }
    ctx->pc = 0x239940u;
    {
        const bool branch_taken_0x239940 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239940) {
            ctx->pc = 0x2399B8u;
            goto label_2399b8;
        }
    }
    ctx->pc = 0x239948u;
label_239948:
    // 0x239948: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23994c:
    // 0x23994c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239950:
    // 0x239950: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239954:
    // 0x239954: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239958:
    // 0x239958: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23995c:
    if (ctx->pc == 0x23995Cu) {
        ctx->pc = 0x239960u;
        goto label_239960;
    }
    ctx->pc = 0x239958u;
    {
        const bool branch_taken_0x239958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239958) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x239960u;
label_239960:
    // 0x239960: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239964:
    // 0x239964: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239968:
    // 0x239968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23996c:
    // 0x23996c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23996cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239970:
    // 0x239970: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239974:
    if (ctx->pc == 0x239974u) {
        ctx->pc = 0x239974u;
            // 0x239974: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239978u;
        goto label_239978;
    }
    ctx->pc = 0x239970u;
    {
        const bool branch_taken_0x239970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239970u;
            // 0x239974: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239970) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x239978u;
label_239978:
    // 0x239978: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23997c:
    // 0x23997c: 0x0  nop
    ctx->pc = 0x23997cu;
    // NOP
label_239980:
    // 0x239980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239984:
    // 0x239984: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239988:
    // 0x239988: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23998c:
    // 0x23998c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239990:
    // 0x239990: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239994:
    // 0x239994: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239998:
    // 0x239998: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23999c:
    // 0x23999c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2399a0:
    if (ctx->pc == 0x2399A0u) {
        ctx->pc = 0x2399A0u;
            // 0x2399a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2399A4u;
        goto label_2399a4;
    }
    ctx->pc = 0x23999Cu;
    {
        const bool branch_taken_0x23999c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2399A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23999Cu;
            // 0x2399a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23999c) {
            ctx->pc = 0x239980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239980;
        }
    }
    ctx->pc = 0x2399A4u;
label_2399a4:
    // 0x2399a4: 0x0  nop
    ctx->pc = 0x2399a4u;
    // NOP
label_2399a8:
    // 0x2399a8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2399a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2399ac:
    // 0x2399ac: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_2399b0:
    if (ctx->pc == 0x2399B0u) {
        ctx->pc = 0x2399B0u;
            // 0x2399b0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x2399B4u;
        goto label_2399b4;
    }
    ctx->pc = 0x2399ACu;
    {
        const bool branch_taken_0x2399ac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2399B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399ACu;
            // 0x2399b0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399ac) {
            ctx->pc = 0x23994Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23994c;
        }
    }
    ctx->pc = 0x2399B4u;
label_2399b4:
    // 0x2399b4: 0x0  nop
    ctx->pc = 0x2399b4u;
    // NOP
label_2399b8:
    // 0x2399b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2399b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2399bc:
    // 0x2399bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2399bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2399c0:
    // 0x2399c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2399c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2399c4:
    // 0x2399c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2399c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2399c8:
    // 0x2399c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2399c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2399cc:
    // 0x2399cc: 0x3e00008  jr          $ra
label_2399d0:
    if (ctx->pc == 0x2399D0u) {
        ctx->pc = 0x2399D0u;
            // 0x2399d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2399D4u;
        goto label_2399d4;
    }
    ctx->pc = 0x2399CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2399D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399CCu;
            // 0x2399d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2399D4u;
label_2399d4:
    // 0x2399d4: 0x0  nop
    ctx->pc = 0x2399d4u;
    // NOP
label_2399d8:
    // 0x2399d8: 0x0  nop
    ctx->pc = 0x2399d8u;
    // NOP
label_2399dc:
    // 0x2399dc: 0x0  nop
    ctx->pc = 0x2399dcu;
    // NOP
}
