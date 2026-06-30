#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0C30
// Address: 0x1b0c30 - 0x1b0d20
void sub_001B0C30_0x1b0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0C30_0x1b0c30");
#endif

    switch (ctx->pc) {
        case 0x1b0c68u: goto label_1b0c68;
        default: break;
    }

    ctx->pc = 0x1b0c30u;

    // 0x1b0c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0c40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b0c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0c48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0c50: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b0c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b0c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b0c58: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1b0c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b0c60: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B0C60u;
    SET_GPR_U32(ctx, 31, 0x1B0C68u);
    ctx->pc = 0x1B0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C60u;
            // 0x1b0c64: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C68u; }
        if (ctx->pc != 0x1B0C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C68u; }
        if (ctx->pc != 0x1B0C68u) { return; }
    }
    ctx->pc = 0x1B0C68u;
label_1b0c68:
    // 0x1b0c68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b0c6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b0c70: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b0c74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0c78: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1b0c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0c7c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1b0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1b0c80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b0c84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0c88: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0C88u;
    {
        const bool branch_taken_0x1b0c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c88) {
            ctx->pc = 0x1B0C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C88u;
            // 0x1b0c8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0C90u;
            goto label_1b0c90;
        }
    }
    ctx->pc = 0x1B0C90u;
label_1b0c90:
    // 0x1b0c90: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1b0c90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0c94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0c98: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b0c9c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1b0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1b0ca0: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x1b0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b0ca4: 0x3810  mfhi        $a3
    ctx->pc = 0x1b0ca4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1b0ca8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1b0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b0cac: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1b0cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b0cb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0CB0u;
    {
        const bool branch_taken_0x1b0cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cb0) {
            ctx->pc = 0x1B0CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CB0u;
            // 0x1b0cb4: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0CD8u;
            goto label_1b0cd8;
        }
    }
    ctx->pc = 0x1B0CB8u;
    // 0x1b0cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0cbc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1b0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1b0cc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b0cc4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1b0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1b0cc8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b0ccc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B0CCCu;
    {
        const bool branch_taken_0x1b0ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CCCu;
            // 0x1b0cd0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ccc) {
            ctx->pc = 0x1B0CF8u;
            goto label_1b0cf8;
        }
    }
    ctx->pc = 0x1B0CD4u;
    // 0x1b0cd4: 0x0  nop
    ctx->pc = 0x1b0cd4u;
    // NOP
label_1b0cd8:
    // 0x1b0cd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0cdc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0ce0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b0ce4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1b0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b0ce8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1b0cec: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0cf0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1b0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1b0cf4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1b0cf8:
    // 0x1b0cf8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b0cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b0d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0d0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0d10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b0d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0d14: 0x80430e0  j           func_10C380
    ctx->pc = 0x1B0D14u;
    ctx->pc = 0x1B0D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D14u;
            // 0x1b0d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C380_0x10c380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0D1Cu;
    // 0x1b0d1c: 0x0  nop
    ctx->pc = 0x1b0d1cu;
    // NOP
}
