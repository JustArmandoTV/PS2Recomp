#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102010
// Address: 0x102010 - 0x102100
void sub_00102010_0x102010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102010_0x102010");
#endif

    switch (ctx->pc) {
        case 0x102010u: goto label_102010;
        case 0x102014u: goto label_102014;
        case 0x102018u: goto label_102018;
        case 0x10201cu: goto label_10201c;
        case 0x102020u: goto label_102020;
        case 0x102024u: goto label_102024;
        case 0x102028u: goto label_102028;
        case 0x10202cu: goto label_10202c;
        case 0x102030u: goto label_102030;
        case 0x102034u: goto label_102034;
        case 0x102038u: goto label_102038;
        case 0x10203cu: goto label_10203c;
        case 0x102040u: goto label_102040;
        case 0x102044u: goto label_102044;
        case 0x102048u: goto label_102048;
        case 0x10204cu: goto label_10204c;
        case 0x102050u: goto label_102050;
        case 0x102054u: goto label_102054;
        case 0x102058u: goto label_102058;
        case 0x10205cu: goto label_10205c;
        case 0x102060u: goto label_102060;
        case 0x102064u: goto label_102064;
        case 0x102068u: goto label_102068;
        case 0x10206cu: goto label_10206c;
        case 0x102070u: goto label_102070;
        case 0x102074u: goto label_102074;
        case 0x102078u: goto label_102078;
        case 0x10207cu: goto label_10207c;
        case 0x102080u: goto label_102080;
        case 0x102084u: goto label_102084;
        case 0x102088u: goto label_102088;
        case 0x10208cu: goto label_10208c;
        case 0x102090u: goto label_102090;
        case 0x102094u: goto label_102094;
        case 0x102098u: goto label_102098;
        case 0x10209cu: goto label_10209c;
        case 0x1020a0u: goto label_1020a0;
        case 0x1020a4u: goto label_1020a4;
        case 0x1020a8u: goto label_1020a8;
        case 0x1020acu: goto label_1020ac;
        case 0x1020b0u: goto label_1020b0;
        case 0x1020b4u: goto label_1020b4;
        case 0x1020b8u: goto label_1020b8;
        case 0x1020bcu: goto label_1020bc;
        case 0x1020c0u: goto label_1020c0;
        case 0x1020c4u: goto label_1020c4;
        case 0x1020c8u: goto label_1020c8;
        case 0x1020ccu: goto label_1020cc;
        case 0x1020d0u: goto label_1020d0;
        case 0x1020d4u: goto label_1020d4;
        case 0x1020d8u: goto label_1020d8;
        case 0x1020dcu: goto label_1020dc;
        case 0x1020e0u: goto label_1020e0;
        case 0x1020e4u: goto label_1020e4;
        case 0x1020e8u: goto label_1020e8;
        case 0x1020ecu: goto label_1020ec;
        case 0x1020f0u: goto label_1020f0;
        case 0x1020f4u: goto label_1020f4;
        case 0x1020f8u: goto label_1020f8;
        case 0x1020fcu: goto label_1020fc;
        default: break;
    }

    ctx->pc = 0x102010u;

label_102010:
    // 0x102010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_102014:
    // 0x102014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_102018:
    // 0x102018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x102018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10201c:
    // 0x10201c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_102020:
    // 0x102020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x102020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_102024:
    // 0x102024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_102028:
    // 0x102028: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x102028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10202c:
    // 0x10202c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x10202cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_102030:
    // 0x102030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102034:
    // 0x102034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_102038:
    // 0x102038: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x102038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10203c:
    // 0x10203c: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x10203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
label_102040:
    // 0x102040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102044:
    // 0x102044: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x102044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_102048:
    // 0x102048: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x102048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_10204c:
    // 0x10204c: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x10204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
label_102050:
    // 0x102050: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_102054:
    if (ctx->pc == 0x102054u) {
        ctx->pc = 0x102054u;
            // 0x102054: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x102058u;
        goto label_102058;
    }
    ctx->pc = 0x102050u;
    {
        const bool branch_taken_0x102050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102050u;
            // 0x102054: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102050) {
            ctx->pc = 0x102080u;
            goto label_102080;
        }
    }
    ctx->pc = 0x102058u;
label_102058:
    // 0x102058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10205c:
    // 0x10205c: 0x260f809  jalr        $s3
label_102060:
    if (ctx->pc == 0x102060u) {
        ctx->pc = 0x102060u;
            // 0x102060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x102064u;
        goto label_102064;
    }
    ctx->pc = 0x10205Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x102064u);
        ctx->pc = 0x102060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10205Cu;
            // 0x102060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x102064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x102064u; }
            if (ctx->pc != 0x102064u) { return; }
        }
        }
    }
    ctx->pc = 0x102064u;
label_102064:
    // 0x102064: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_102068:
    // 0x102068: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_10206c:
    // 0x10206c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_102070:
    // 0x102070: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x102070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_102074:
    // 0x102074: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_102078:
    if (ctx->pc == 0x102078u) {
        ctx->pc = 0x102078u;
            // 0x102078: 0xafa50060  sw          $a1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
        ctx->pc = 0x10207Cu;
        goto label_10207c;
    }
    ctx->pc = 0x102074u;
    {
        const bool branch_taken_0x102074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102074u;
            // 0x102078: 0xafa50060  sw          $a1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102074) {
            ctx->pc = 0x102058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102058;
        }
    }
    ctx->pc = 0x10207Cu;
label_10207c:
    // 0x10207c: 0x0  nop
    ctx->pc = 0x10207cu;
    // NOP
label_102080:
    // 0x102080: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x102080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_102084:
    // 0x102084: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x102084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_102088:
    // 0x102088: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_10208c:
    if (ctx->pc == 0x10208Cu) {
        ctx->pc = 0x102090u;
        goto label_102090;
    }
    ctx->pc = 0x102088u;
    {
        const bool branch_taken_0x102088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x102088) {
            ctx->pc = 0x1020D8u;
            goto label_1020d8;
        }
    }
    ctx->pc = 0x102090u;
label_102090:
    // 0x102090: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x102090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_102094:
    // 0x102094: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_102098:
    if (ctx->pc == 0x102098u) {
        ctx->pc = 0x10209Cu;
        goto label_10209c;
    }
    ctx->pc = 0x102094u;
    {
        const bool branch_taken_0x102094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102094) {
            ctx->pc = 0x1020D8u;
            goto label_1020d8;
        }
    }
    ctx->pc = 0x10209Cu;
label_10209c:
    // 0x10209c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x10209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1020a0:
    // 0x1020a0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1020a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1020a4:
    // 0x1020a4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1020a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1020a8:
    // 0x1020a8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1020ac:
    if (ctx->pc == 0x1020ACu) {
        ctx->pc = 0x1020ACu;
            // 0x1020ac: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x1020B0u;
        goto label_1020b0;
    }
    ctx->pc = 0x1020A8u;
    {
        const bool branch_taken_0x1020a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020A8u;
            // 0x1020ac: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020a8) {
            ctx->pc = 0x1020D8u;
            goto label_1020d8;
        }
    }
    ctx->pc = 0x1020B0u;
label_1020b0:
    // 0x1020b0: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1020b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1020b4:
    // 0x1020b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1020b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1020b8:
    // 0x1020b8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1020bc:
    // 0x1020bc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1020c0:
    // 0x1020c0: 0x40f809  jalr        $v0
label_1020c4:
    if (ctx->pc == 0x1020C4u) {
        ctx->pc = 0x1020C4u;
            // 0x1020c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1020C8u;
        goto label_1020c8;
    }
    ctx->pc = 0x1020C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1020C8u);
        ctx->pc = 0x1020C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020C0u;
            // 0x1020c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1020C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1020C8u; }
            if (ctx->pc != 0x1020C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1020C8u;
label_1020c8:
    // 0x1020c8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1020c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1020cc:
    // 0x1020cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1020ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1020d0:
    // 0x1020d0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1020d4:
    if (ctx->pc == 0x1020D4u) {
        ctx->pc = 0x1020D4u;
            // 0x1020d4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x1020D8u;
        goto label_1020d8;
    }
    ctx->pc = 0x1020D0u;
    {
        const bool branch_taken_0x1020d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1020D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020D0u;
            // 0x1020d4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020d0) {
            ctx->pc = 0x1020B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1020b0;
        }
    }
    ctx->pc = 0x1020D8u;
label_1020d8:
    // 0x1020d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1020d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1020dc:
    // 0x1020dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1020dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1020e0:
    // 0x1020e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1020e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1020e4:
    // 0x1020e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1020e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1020e8:
    // 0x1020e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1020e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1020ec:
    // 0x1020ec: 0x3e00008  jr          $ra
label_1020f0:
    if (ctx->pc == 0x1020F0u) {
        ctx->pc = 0x1020F0u;
            // 0x1020f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1020F4u;
        goto label_1020f4;
    }
    ctx->pc = 0x1020ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1020F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020ECu;
            // 0x1020f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1020F4u;
label_1020f4:
    // 0x1020f4: 0x0  nop
    ctx->pc = 0x1020f4u;
    // NOP
label_1020f8:
    // 0x1020f8: 0x0  nop
    ctx->pc = 0x1020f8u;
    // NOP
label_1020fc:
    // 0x1020fc: 0x0  nop
    ctx->pc = 0x1020fcu;
    // NOP
}
