#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFE60
// Address: 0x1ffe60 - 0x1fff50
void sub_001FFE60_0x1ffe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFE60_0x1ffe60");
#endif

    switch (ctx->pc) {
        case 0x1ffef0u: goto label_1ffef0;
        case 0x1fff24u: goto label_1fff24;
        default: break;
    }

    ctx->pc = 0x1ffe60u;

    // 0x1ffe60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffe64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ffe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ffe68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ffe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ffe6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ffe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ffe70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ffe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ffe78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ffe78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffe80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ffe80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe84: 0x8c860190  lw          $a2, 0x190($a0)
    ctx->pc = 0x1ffe84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x1ffe88: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ffe88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ffe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffe90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ffe90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe94: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ffe94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe9c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ffe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ffea0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1ffea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffea4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ffea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ffeac: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1ffeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ffeb0: 0xac6209a0  sw          $v0, 0x9A0($v1)
    ctx->pc = 0x1ffeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2464), GPR_U32(ctx, 2));
    // 0x1ffeb4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ffeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ffeb8: 0xac6209a4  sw          $v0, 0x9A4($v1)
    ctx->pc = 0x1ffeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2468), GPR_U32(ctx, 2));
    // 0x1ffebc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ffec0: 0xac6209a8  sw          $v0, 0x9A8($v1)
    ctx->pc = 0x1ffec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2472), GPR_U32(ctx, 2));
    // 0x1ffec4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ffec8: 0xac6209ac  sw          $v0, 0x9AC($v1)
    ctx->pc = 0x1ffec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2476), GPR_U32(ctx, 2));
    // 0x1ffecc: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x1ffeccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ffed0: 0xa06209b0  sb          $v0, 0x9B0($v1)
    ctx->pc = 0x1ffed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffed4: 0x90a20011  lbu         $v0, 0x11($a1)
    ctx->pc = 0x1ffed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x1ffed8: 0xa06209b1  sb          $v0, 0x9B1($v1)
    ctx->pc = 0x1ffed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2481), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffedc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ffee0: 0x8c860190  lw          $a2, 0x190($a0)
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x1ffee4: 0x8c8b1c40  lw          $t3, 0x1C40($a0)
    ctx->pc = 0x1ffee4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7232)));
    // 0x1ffee8: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFEE8u;
    SET_GPR_U32(ctx, 31, 0x1FFEF0u);
    ctx->pc = 0x1FFEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEE8u;
            // 0x1ffeec: 0x266501a0  addiu       $a1, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEF0u; }
        if (ctx->pc != 0x1FFEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFEF0u; }
        if (ctx->pc != 0x1FFEF0u) { return; }
    }
    ctx->pc = 0x1FFEF0u;
label_1ffef0:
    // 0x1ffef0: 0x82430011  lb          $v1, 0x11($s2)
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x1ffef4: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFEF4u;
    {
        const bool branch_taken_0x1ffef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffef4) {
            ctx->pc = 0x1FFEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFEF4u;
            // 0x1ffef8: 0x8e630190  lw          $v1, 0x190($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF28u;
            goto label_1fff28;
        }
    }
    ctx->pc = 0x1FFEFCu;
    // 0x1ffefc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fff00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff04: 0x8e660190  lw          $a2, 0x190($s3)
    ctx->pc = 0x1fff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x1fff08: 0x266505a0  addiu       $a1, $s3, 0x5A0
    ctx->pc = 0x1fff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
    // 0x1fff0c: 0x8e6b1c44  lw          $t3, 0x1C44($s3)
    ctx->pc = 0x1fff0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7236)));
    // 0x1fff10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fff10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1fff14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff18: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fff18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff1c: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF24u);
    ctx->pc = 0x1FFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF1Cu;
            // 0x1fff20: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF24u; }
        if (ctx->pc != 0x1FFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF24u; }
        if (ctx->pc != 0x1FFF24u) { return; }
    }
    ctx->pc = 0x1FFF24u;
label_1fff24:
    // 0x1fff24: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
label_1fff28:
    // 0x1fff28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fff2c: 0xae630190  sw          $v1, 0x190($s3)
    ctx->pc = 0x1fff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 3));
    // 0x1fff30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fff30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fff34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fff34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fff38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fff38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fff3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fff3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fff40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fff40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fff44: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF44u;
            // 0x1fff48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFF4Cu;
    // 0x1fff4c: 0x0  nop
    ctx->pc = 0x1fff4cu;
    // NOP
}
