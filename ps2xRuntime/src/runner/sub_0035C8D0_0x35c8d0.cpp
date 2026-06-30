#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C8D0
// Address: 0x35c8d0 - 0x35c9d0
void sub_0035C8D0_0x35c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C8D0_0x35c8d0");
#endif

    switch (ctx->pc) {
        case 0x35c8d0u: goto label_35c8d0;
        case 0x35c8d4u: goto label_35c8d4;
        case 0x35c8d8u: goto label_35c8d8;
        case 0x35c8dcu: goto label_35c8dc;
        case 0x35c8e0u: goto label_35c8e0;
        case 0x35c8e4u: goto label_35c8e4;
        case 0x35c8e8u: goto label_35c8e8;
        case 0x35c8ecu: goto label_35c8ec;
        case 0x35c8f0u: goto label_35c8f0;
        case 0x35c8f4u: goto label_35c8f4;
        case 0x35c8f8u: goto label_35c8f8;
        case 0x35c8fcu: goto label_35c8fc;
        case 0x35c900u: goto label_35c900;
        case 0x35c904u: goto label_35c904;
        case 0x35c908u: goto label_35c908;
        case 0x35c90cu: goto label_35c90c;
        case 0x35c910u: goto label_35c910;
        case 0x35c914u: goto label_35c914;
        case 0x35c918u: goto label_35c918;
        case 0x35c91cu: goto label_35c91c;
        case 0x35c920u: goto label_35c920;
        case 0x35c924u: goto label_35c924;
        case 0x35c928u: goto label_35c928;
        case 0x35c92cu: goto label_35c92c;
        case 0x35c930u: goto label_35c930;
        case 0x35c934u: goto label_35c934;
        case 0x35c938u: goto label_35c938;
        case 0x35c93cu: goto label_35c93c;
        case 0x35c940u: goto label_35c940;
        case 0x35c944u: goto label_35c944;
        case 0x35c948u: goto label_35c948;
        case 0x35c94cu: goto label_35c94c;
        case 0x35c950u: goto label_35c950;
        case 0x35c954u: goto label_35c954;
        case 0x35c958u: goto label_35c958;
        case 0x35c95cu: goto label_35c95c;
        case 0x35c960u: goto label_35c960;
        case 0x35c964u: goto label_35c964;
        case 0x35c968u: goto label_35c968;
        case 0x35c96cu: goto label_35c96c;
        case 0x35c970u: goto label_35c970;
        case 0x35c974u: goto label_35c974;
        case 0x35c978u: goto label_35c978;
        case 0x35c97cu: goto label_35c97c;
        case 0x35c980u: goto label_35c980;
        case 0x35c984u: goto label_35c984;
        case 0x35c988u: goto label_35c988;
        case 0x35c98cu: goto label_35c98c;
        case 0x35c990u: goto label_35c990;
        case 0x35c994u: goto label_35c994;
        case 0x35c998u: goto label_35c998;
        case 0x35c99cu: goto label_35c99c;
        case 0x35c9a0u: goto label_35c9a0;
        case 0x35c9a4u: goto label_35c9a4;
        case 0x35c9a8u: goto label_35c9a8;
        case 0x35c9acu: goto label_35c9ac;
        case 0x35c9b0u: goto label_35c9b0;
        case 0x35c9b4u: goto label_35c9b4;
        case 0x35c9b8u: goto label_35c9b8;
        case 0x35c9bcu: goto label_35c9bc;
        case 0x35c9c0u: goto label_35c9c0;
        case 0x35c9c4u: goto label_35c9c4;
        case 0x35c9c8u: goto label_35c9c8;
        case 0x35c9ccu: goto label_35c9cc;
        default: break;
    }

    ctx->pc = 0x35c8d0u;

label_35c8d0:
    // 0x35c8d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c8d4:
    // 0x35c8d4: 0x3e00008  jr          $ra
label_35c8d8:
    if (ctx->pc == 0x35C8D8u) {
        ctx->pc = 0x35C8D8u;
            // 0x35c8d8: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x35C8DCu;
        goto label_35c8dc;
    }
    ctx->pc = 0x35C8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C8D4u;
            // 0x35c8d8: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C8DCu;
label_35c8dc:
    // 0x35c8dc: 0x0  nop
    ctx->pc = 0x35c8dcu;
    // NOP
label_35c8e0:
    // 0x35c8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35c8e4:
    // 0x35c8e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35c8e8:
    // 0x35c8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35c8ec:
    // 0x35c8ec: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x35c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_35c8f0:
    // 0x35c8f0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x35c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_35c8f4:
    // 0x35c8f4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x35c8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_35c8f8:
    // 0x35c8f8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x35c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_35c8fc:
    // 0x35c8fc: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x35c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_35c900:
    // 0x35c900: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c904:
    // 0x35c904: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x35c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_35c908:
    // 0x35c908: 0x8c430e48  lw          $v1, 0xE48($v0)
    ctx->pc = 0x35c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35c90c:
    // 0x35c90c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x35c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_35c910:
    // 0x35c910: 0x24626ab0  addiu       $v0, $v1, 0x6AB0
    ctx->pc = 0x35c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_35c914:
    // 0x35c914: 0x24656aa4  addiu       $a1, $v1, 0x6AA4
    ctx->pc = 0x35c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27300));
label_35c918:
    // 0x35c918: 0xc0582cc  jal         func_160B30
label_35c91c:
    if (ctx->pc == 0x35C91Cu) {
        ctx->pc = 0x35C91Cu;
            // 0x35c91c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x35C920u;
        goto label_35c920;
    }
    ctx->pc = 0x35C918u;
    SET_GPR_U32(ctx, 31, 0x35C920u);
    ctx->pc = 0x35C91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C918u;
            // 0x35c91c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C920u; }
        if (ctx->pc != 0x35C920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C920u; }
        if (ctx->pc != 0x35C920u) { return; }
    }
    ctx->pc = 0x35C920u;
label_35c920:
    // 0x35c920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35c924:
    // 0x35c924: 0x3e00008  jr          $ra
label_35c928:
    if (ctx->pc == 0x35C928u) {
        ctx->pc = 0x35C928u;
            // 0x35c928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C92Cu;
        goto label_35c92c;
    }
    ctx->pc = 0x35C924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C924u;
            // 0x35c928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C92Cu;
label_35c92c:
    // 0x35c92c: 0x0  nop
    ctx->pc = 0x35c92cu;
    // NOP
label_35c930:
    // 0x35c930: 0x3e00008  jr          $ra
label_35c934:
    if (ctx->pc == 0x35C934u) {
        ctx->pc = 0x35C938u;
        goto label_35c938;
    }
    ctx->pc = 0x35C930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C938u;
label_35c938:
    // 0x35c938: 0x0  nop
    ctx->pc = 0x35c938u;
    // NOP
label_35c93c:
    // 0x35c93c: 0x0  nop
    ctx->pc = 0x35c93cu;
    // NOP
label_35c940:
    // 0x35c940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35c944:
    // 0x35c944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c948:
    // 0x35c948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c94c:
    // 0x35c94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c950:
    // 0x35c950: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x35c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35c954:
    // 0x35c954: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35c958:
    if (ctx->pc == 0x35C958u) {
        ctx->pc = 0x35C958u;
            // 0x35c958: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x35C95Cu;
        goto label_35c95c;
    }
    ctx->pc = 0x35C954u;
    {
        const bool branch_taken_0x35c954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c954) {
            ctx->pc = 0x35C958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C954u;
            // 0x35c958: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C970u;
            goto label_35c970;
        }
    }
    ctx->pc = 0x35C95Cu;
label_35c95c:
    // 0x35c95c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35c95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35c960:
    // 0x35c960: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35c960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35c964:
    // 0x35c964: 0x320f809  jalr        $t9
label_35c968:
    if (ctx->pc == 0x35C968u) {
        ctx->pc = 0x35C968u;
            // 0x35c968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C96Cu;
        goto label_35c96c;
    }
    ctx->pc = 0x35C964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C96Cu);
        ctx->pc = 0x35C968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C964u;
            // 0x35c968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C96Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C96Cu; }
            if (ctx->pc != 0x35C96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35C96Cu;
label_35c96c:
    // 0x35c96c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x35c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_35c970:
    // 0x35c970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c974:
    // 0x35c974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c978:
    // 0x35c978: 0x3e00008  jr          $ra
label_35c97c:
    if (ctx->pc == 0x35C97Cu) {
        ctx->pc = 0x35C97Cu;
            // 0x35c97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C980u;
        goto label_35c980;
    }
    ctx->pc = 0x35C978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C978u;
            // 0x35c97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C980u;
label_35c980:
    // 0x35c980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35c984:
    // 0x35c984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c988:
    // 0x35c988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c98c:
    // 0x35c98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c990:
    // 0x35c990: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x35c990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35c994:
    // 0x35c994: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_35c998:
    if (ctx->pc == 0x35C998u) {
        ctx->pc = 0x35C998u;
            // 0x35c998: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35C99Cu;
        goto label_35c99c;
    }
    ctx->pc = 0x35C994u;
    {
        const bool branch_taken_0x35c994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c994) {
            ctx->pc = 0x35C998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C994u;
            // 0x35c998: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C9BCu;
            goto label_35c9bc;
        }
    }
    ctx->pc = 0x35C99Cu;
label_35c99c:
    // 0x35c99c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35c9a0:
    if (ctx->pc == 0x35C9A0u) {
        ctx->pc = 0x35C9A0u;
            // 0x35c9a0: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x35C9A4u;
        goto label_35c9a4;
    }
    ctx->pc = 0x35C99Cu;
    {
        const bool branch_taken_0x35c99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c99c) {
            ctx->pc = 0x35C9A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C99Cu;
            // 0x35c9a0: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C9B8u;
            goto label_35c9b8;
        }
    }
    ctx->pc = 0x35C9A4u;
label_35c9a4:
    // 0x35c9a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35c9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35c9a8:
    // 0x35c9a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35c9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35c9ac:
    // 0x35c9ac: 0x320f809  jalr        $t9
label_35c9b0:
    if (ctx->pc == 0x35C9B0u) {
        ctx->pc = 0x35C9B0u;
            // 0x35c9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C9B4u;
        goto label_35c9b4;
    }
    ctx->pc = 0x35C9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C9B4u);
        ctx->pc = 0x35C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C9ACu;
            // 0x35c9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C9B4u; }
            if (ctx->pc != 0x35C9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x35C9B4u;
label_35c9b4:
    // 0x35c9b4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x35c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_35c9b8:
    // 0x35c9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c9bc:
    // 0x35c9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c9c0:
    // 0x35c9c0: 0x3e00008  jr          $ra
label_35c9c4:
    if (ctx->pc == 0x35C9C4u) {
        ctx->pc = 0x35C9C4u;
            // 0x35c9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C9C8u;
        goto label_35c9c8;
    }
    ctx->pc = 0x35C9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C9C0u;
            // 0x35c9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C9C8u;
label_35c9c8:
    // 0x35c9c8: 0x0  nop
    ctx->pc = 0x35c9c8u;
    // NOP
label_35c9cc:
    // 0x35c9cc: 0x0  nop
    ctx->pc = 0x35c9ccu;
    // NOP
}
