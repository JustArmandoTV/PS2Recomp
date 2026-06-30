#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188C58
// Address: 0x188c58 - 0x18a240
void sub_00188C58_0x188c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C58_0x188c58");
#endif

    switch (ctx->pc) {
        case 0x188c6cu: goto label_188c6c;
        case 0x188c80u: goto label_188c80;
        case 0x188c90u: goto label_188c90;
        case 0x188d10u: goto label_188d10;
        case 0x188d20u: goto label_188d20;
        default: break;
    }

    ctx->pc = 0x188c58u;

    // 0x188c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x188c64: 0xc062312  jal         func_188C48
    ctx->pc = 0x188C64u;
    SET_GPR_U32(ctx, 31, 0x188C6Cu);
    ctx->pc = 0x188C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C64u;
            // 0x188c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C48u;
    if (runtime->hasFunction(0x188C48u)) {
        auto targetFn = runtime->lookupFunction(0x188C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C6Cu; }
        if (ctx->pc != 0x188C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188C48_0x188c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C6Cu; }
        if (ctx->pc != 0x188C6Cu) { return; }
    }
    ctx->pc = 0x188C6Cu;
label_188c6c:
    // 0x188c6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x188c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x188c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c78: 0x3e00008  jr          $ra
    ctx->pc = 0x188C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C78u;
            // 0x188c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188C80u;
label_188c80:
    // 0x188c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188c88: 0xc062312  jal         func_188C48
    ctx->pc = 0x188C88u;
    SET_GPR_U32(ctx, 31, 0x188C90u);
    ctx->pc = 0x188C48u;
    if (runtime->hasFunction(0x188C48u)) {
        auto targetFn = runtime->lookupFunction(0x188C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C90u; }
        if (ctx->pc != 0x188C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188C48_0x188c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C90u; }
        if (ctx->pc != 0x188C90u) { return; }
    }
    ctx->pc = 0x188C90u;
label_188c90:
    // 0x188c90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x188c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c98: 0x3e00008  jr          $ra
    ctx->pc = 0x188C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C98u;
            // 0x188c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CA0u;
    // 0x188ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x188CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CA8u;
    // 0x188ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x188CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CB0u;
    // 0x188cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x188CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CB8u;
    // 0x188cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x188CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CC0u;
    // 0x188cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x188CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188CC8u;
    // 0x188cc8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x188cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ccc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x188cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cd0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x188cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x188cd4: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x188cd8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x188cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x188cdc: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x188cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x188ce0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x188ce0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x188ce4: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x188ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x188ce8: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x188ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x188cec: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x188cf0: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x188cf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x188cf4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188cf8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x188cf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x188cfc: 0x1860054d  blez        $v1, . + 4 + (0x54D << 2)
    ctx->pc = 0x188CFCu;
    {
        const bool branch_taken_0x188cfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x188D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188CFCu;
            // 0x188d00: 0x8d2b0004  lw          $t3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cfc) {
            ctx->pc = 0x18A234u;
            goto label_18a234;
        }
    }
    ctx->pc = 0x188D04u;
    // 0x188d04: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x188d04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d08: 0x56a80  sll         $t5, $a1, 10
    ctx->pc = 0x188d08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x188d0c: 0x0  nop
    ctx->pc = 0x188d0cu;
    // NOP
label_188d10:
    // 0x188d10: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x188d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d14: 0x18a00544  blez        $a1, . + 4 + (0x544 << 2)
    ctx->pc = 0x188D14u;
    {
        const bool branch_taken_0x188d14 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x188D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D14u;
            // 0x188d18: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d14) {
            ctx->pc = 0x18A228u;
            goto label_18a228;
        }
    }
    ctx->pc = 0x188D1Cu;
    // 0x188d1c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x188d1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_188d20:
    // 0x188d20: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x188d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188d24: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x188d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x188d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x188d38: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x188d38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x188d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d48: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x188d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x188d4c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x188d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x188d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d5c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x188d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x188d60: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x188d60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x188d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d68: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d70: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x188d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x188d74: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x188d74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x188d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d84: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x188d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x188d88: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x188d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x188d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188d90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188d94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188d98: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x188d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x188d9c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x188d9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x188da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188da4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188da8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188dac: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x188dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x188db0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x188db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x188db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188db8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188dbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188dc0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x188dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x188dc4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x188dc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x188dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188dcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188dd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188dd4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x188dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x188dd8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x188dd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x188ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188de0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188de8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x188de8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x188dec: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x188decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x188df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188df4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188dfc: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x188dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x188e00: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x188e00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x188e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e10: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x188e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x188e14: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x188e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x188e18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e24: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x188e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x188e28: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x188e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x188e2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e38: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x188e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x188e3c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x188e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x188e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e4c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x188e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x188e50: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x188e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x188e54: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x188e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x188e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e64: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x188e64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x188e68: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x188e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188e6c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x188e70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x188e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x188e7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e80: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x188e84: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x188e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x188e88: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x188e88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x188e8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188e90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188e94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188e98: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x188e98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x188e9c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x188e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x188ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188ea4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188eac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x188eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x188eb0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x188eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x188eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188eb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ec0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x188ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x188ec4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x188ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x188ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188ecc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ed4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x188ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x188ed8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x188ed8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x188edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188ee0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ee8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x188ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x188eec: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x188eecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x188ef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188ef4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188efc: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x188efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x188f00: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x188f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x188f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f10: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x188f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x188f14: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x188f14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x188f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f24: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x188f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x188f28: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x188f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x188f2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f38: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x188f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x188f3c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x188f3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x188f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f4c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x188f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x188f50: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x188f50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x188f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f60: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x188f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x188f64: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x188f64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x188f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f74: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x188f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x188f78: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x188f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x188f7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f88: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x188f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x188f8c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x188f8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x188f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188f94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188f98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f9c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x188f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x188fa0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x188fa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x188fa4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x188fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188fac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188fb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fb4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x188fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x188fb8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x188fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188fbc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x188fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x188fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188fc4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188fc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x188fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x188fcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fd0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x188fd4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x188fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x188fd8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x188fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x188fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188fe0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188fe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fe8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x188fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x188fec: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x188fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x188ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x188ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x188ff4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x188ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x188ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ffc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x188ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189000: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189008: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18900c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189010: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189014: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189014u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18901c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189020: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189024: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189028: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18902c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189030: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189038: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18903c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18903cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189044: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18904c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18904cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189050: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189058: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18905c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189060: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189064: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18906c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189074: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189078: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189078u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18907c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189080: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189088: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18908c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18908cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189094: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18909c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18909cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1890a0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1890a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1890a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1890a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1890a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1890ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1890acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1890b0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1890b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1890b4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1890b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1890b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1890bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1890c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1890c4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1890c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1890c8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1890c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1890cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1890ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1890d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1890d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1890d8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1890d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1890dc: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1890dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1890e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1890e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1890e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1890ec: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1890ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1890f0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1890f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1890f4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1890f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1890fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1890fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189104: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189108: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18910c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189114: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18911c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189120: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189124: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189128: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18912c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18912cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189130: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189138: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18913c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18913cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189144: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18914c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18914cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189150: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189158: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18915c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189160: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189164: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18916c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189174: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189178: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18917c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18917cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189180: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189188: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18918c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18918cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189194: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18919c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18919cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1891a0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1891a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1891a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1891a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1891ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1891acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1891b0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1891b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1891b4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1891b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1891b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1891bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1891bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1891c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1891c4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1891c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1891c8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1891c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1891cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1891ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1891d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1891d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1891d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1891d8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1891d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1891dc: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1891dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1891e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1891e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1891e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1891e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1891ec: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1891ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1891f0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1891f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1891f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1891f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1891f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1891fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189200: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189204: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18920c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189214: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189218: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18921c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189220: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189228: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18922c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18922cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189234: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18923c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18923cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189240: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189244: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18924c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189254: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189258: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18925c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189264: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189268: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18926c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189270: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189274: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189278: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18927c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18927cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189280: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189288: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18928c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18928cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189294: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18929c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18929cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1892a0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1892a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1892a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1892a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1892ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1892b0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1892b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1892b4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1892b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1892b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1892bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1892c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1892c4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1892c8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1892c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1892cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1892d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1892d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1892d8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1892d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1892dc: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1892dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1892e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1892e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1892e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1892e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1892e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1892ec: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1892f0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1892f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1892f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1892f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1892fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189300: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189304: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18930c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189314: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189318: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18931c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189320: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189324: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189328: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18932c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18932cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189334: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18933c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18933cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189340: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189348: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18934c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189350: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189354: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18935c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189364: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189368: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18936c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18936cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189370: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189378: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18937c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18937cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189384: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18938c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18938cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189390: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189394: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18939c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1893a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893a4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1893a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1893a8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1893a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1893ac: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1893b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1893b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1893b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1893bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1893bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1893c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1893c4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1893c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1893c8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1893c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1893cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1893ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1893d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1893d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1893d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1893d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893d8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1893d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1893dc: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1893dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1893e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1893e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1893e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1893e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1893e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893ec: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1893ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1893f0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1893f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1893f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1893f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1893f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1893f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1893fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189400: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189404: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18940c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189414: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189418: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18941c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18941cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189420: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189424: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189428: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18942c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18942cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189434: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18943c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18943cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189440: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189448: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18944c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189450: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189454: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18945c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189464: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189468: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18946c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18946cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189470: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189478: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18947c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18947cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189484: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189488: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18948c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18948cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189490: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189498: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18949c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894a0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1894a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1894a4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1894a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1894a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1894ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1894b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894b4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1894b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1894b8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1894b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1894bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1894c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1894c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894c8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1894c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1894cc: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1894ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1894d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1894d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1894d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1894d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894dc: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1894e0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1894e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1894e4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1894e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1894e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1894e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1894ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1894f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894f4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1894f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1894f8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1894f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1894fc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18950c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189510: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189514: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189518: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18951c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189520: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189528: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18952c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18952cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189534: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189538: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18953c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18953cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189540: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189548: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18954c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189550: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189554: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18955c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189560: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189564: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189564u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189568: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18956c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18956cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189570: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189578: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18957c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18957cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189584: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18958c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18958cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189590: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189598: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18959c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895a0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1895a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1895a4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1895a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1895a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1895ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1895b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1895b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895b4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1895b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1895b8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1895b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1895bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1895c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1895c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1895c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895c8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1895c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1895cc: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1895ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1895d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1895d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1895d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1895d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1895d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895dc: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1895dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1895e0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1895e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1895e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1895e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1895e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1895e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1895ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895f0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1895f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1895f4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1895f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1895f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1895f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1895fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189604: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189608: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18960c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189610: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189618: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18961c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18961cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189624: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18962c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18962cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189630: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189634: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18963c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189644: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189648: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18964c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189654: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18965c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189660: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189664: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189668: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18966c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189670: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189678: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18967c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18967cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189684: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18968c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18968cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189690: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189698: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18969c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896a0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1896a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1896a4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1896a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1896a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1896ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1896b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1896b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896b4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1896b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1896b8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x1896b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1896bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1896bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1896c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1896c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1896c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1896c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896c8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1896c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1896cc: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x1896ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1896d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1896d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1896d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1896d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1896d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1896d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896dc: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1896dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1896e0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x1896e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1896e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1896e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1896e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1896ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1896ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896f0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1896f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1896f4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x1896f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1896f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1896fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1896fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189704: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189708: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18970c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18970cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189710: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189718: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18971c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18971cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189724: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18972c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18972cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189730: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189734: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189738: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18973c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189740: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189744: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18974c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189754: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189758: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189758u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18975c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189760: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189768: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18976c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18976cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189774: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18977c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18977cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189780: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189784: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18978c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189794: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189798: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18979c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1897a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1897a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1897a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1897a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1897ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1897acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1897b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1897b4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1897b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1897b8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x1897b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1897bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1897c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1897c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1897c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1897c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897c8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1897c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1897cc: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1897ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1897d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1897d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1897d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897dc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1897dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1897e0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x1897e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1897e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1897e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1897e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1897ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1897ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897f0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1897f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1897f4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x1897f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1897f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1897fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1897fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189804: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189808: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18980c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189810: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189818: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18981c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18981cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189824: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18982c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18982cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189830: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189838: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18983c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189840: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189844: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18984c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189854: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189858: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18985c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189860: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189868: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18986c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18986cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189874: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18987c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18987cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189880: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189888: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18988c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189890: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189894: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18989c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1898a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898a4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1898a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1898a8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1898a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1898ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1898b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1898b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898b8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x1898b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x1898bc: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x1898bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1898c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1898c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1898c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898cc: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1898ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1898d0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x1898d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1898d4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1898d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1898d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1898dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1898dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1898e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898e4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x1898e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x1898e8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1898e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1898ec: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1898f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1898f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1898f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1898f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1898fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189900: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189904: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189908: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18990c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189910: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189914: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189918: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18991c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18991cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189924: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18992c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18992cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189930: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189938: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18993c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189940: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189944: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18994c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189950: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189954: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189958: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189958u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18995c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189960: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189964: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189968: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18996c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18996cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189974: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18997c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18997cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189980: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189988: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18998c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189990: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189994: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18999c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1899a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899a4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x1899a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1899a8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x1899a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1899ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1899b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1899b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899b8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1899b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1899bc: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x1899bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1899c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1899c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899cc: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x1899ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x1899d0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x1899d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1899d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1899d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1899dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899e0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1899e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1899e4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x1899e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1899e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1899ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1899f4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1899f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1899f8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x1899f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1899fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1899fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a00: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a08: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x189a0c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x189a0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a1c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x189a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189a20: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189a24: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a34: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189a38: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189a3c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189a4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a50: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189a54: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189a54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189a58: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a60: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a68: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189a6c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x189a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a7c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x189a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189a80: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189a84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a88: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a90: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189a90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189a94: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189a9c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189aa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189aa4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189aa8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x189aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ab0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ab4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ab8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x189abc: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x189abcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ac4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189acc: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x189accu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189ad0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ad8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189adc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ae0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189ae4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189aec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189af4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189af8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x189afc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b00: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b08: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189b08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x189b0c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x189b0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189b10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b1c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x189b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189b20: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b30: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189b34: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b44: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189b44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189b48: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189b4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b58: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x189b5c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x189b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b6c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x189b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189b70: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189b74: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b84: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189b84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189b88: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189b8c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x189b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189b90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189b94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189b9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ba0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189ba4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189ba8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189bb0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189bb8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189bbc: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x189bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189bc4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189bc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189bcc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x189bccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189bd0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189bd8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189bdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189be0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189be4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189be4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189bec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189bf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189bf4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189bf8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x189bfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c00: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c08: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x189c0c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x189c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c1c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x189c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189c20: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189c20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c30: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189c34: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c44: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189c44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189c48: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x189c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c58: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x189c5c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x189c5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c6c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x189c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189c70: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c80: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189c84: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189c84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189c8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189c94: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189c94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189c98: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ca0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ca8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x189cac: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x189cacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189cb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189cb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189cbc: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x189cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189cc0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189cc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189cc4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ccc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189cd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189cd4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189cd8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189cd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189cdc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ce4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189cec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189cf0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189cf4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189cf8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189cfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d00: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d08: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189d0c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x189d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189d10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d1c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x189d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189d20: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189d24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d28: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d30: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189d34: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189d34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d44: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189d48: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x189d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d58: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x189d5c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x189d5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d6c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x189d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189d70: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189d70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189d74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d80: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189d80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189d84: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189d84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189d8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189d94: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189d98: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189d98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x189d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189da0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189da4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189da8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x189dac: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x189dacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189db4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189db8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189dbc: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x189dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189dc0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189dc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189dc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189dcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189dd0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189dd4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ddc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189de4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189de4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189de8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189df0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189df8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x189dfc: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x189dfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e0c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x189e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189e10: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189e14: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189e18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e24: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189e28: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189e2c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x189e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189e3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e40: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189e44: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189e48: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e58: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189e5c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x189e5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e6c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x189e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189e70: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e80: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189e84: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189e84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189e8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189e90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189e94: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189e98: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x189e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ea0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ea8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x189eac: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x189eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x189eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189eb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189eb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ebc: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x189ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x189ec0: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x189ec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x189ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ec8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ed0: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x189ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x189ed4: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x189ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x189ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189edc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ee0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ee4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x189ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x189ee8: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x189ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x189eec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ef0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ef8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x189ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x189efc: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x189efcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x189f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f0c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x189f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x189f10: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x189f10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x189f14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f20: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x189f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x189f24: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x189f24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x189f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f34: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x189f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x189f38: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x189f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189f3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f48: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x189f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x189f4c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x189f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x189f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f5c: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x189f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x189f60: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x189f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x189f64: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x189f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x189f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f74: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x189f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x189f78: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x189f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189f7c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189f80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f84: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189f8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f90: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x189f94: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x189f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x189f98: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x189f98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x189f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189fa0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189fa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fa8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x189fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189fac: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x189facu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x189fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189fb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fbc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x189fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x189fc0: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x189fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189fc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189fcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fd0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x189fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x189fd4: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x189fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x189fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189fdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189fe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fe4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x189fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x189fe8: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x189fe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x189fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189ff0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x189ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ff8: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x189ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x189ffc: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x189ffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x18a000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a004: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a00c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x18a010: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x18a010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x18a014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a018: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a01c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a020: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x18a020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x18a024: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x18a024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x18a028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a02c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a034: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x18a034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x18a038: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x18a038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18a03c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a040: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a048: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x18a048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18a04c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18a04cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x18a050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a054: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a05c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x18a060: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x18a060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x18a064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a068: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a06c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a070: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x18a070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x18a074: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x18a074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x18a078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a07c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a084: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x18a084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x18a088: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x18a088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18a08c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a090: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a098: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x18a098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18a09c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18a09cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x18a0a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a0a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a0a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0ac: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x18a0b0: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x18a0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x18a0b4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18a0b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a0bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a0c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0c4: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x18a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x18a0c8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x18a0c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18a0cc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x18a0d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a0d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a0d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a0dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18a0e4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x18a0e8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x18a0e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18a0ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a0f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a0f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0f8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x18a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18a0fc: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18a0fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18a100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a104: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a10c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x18a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x18a110: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x18a110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18a114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a118: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a11c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a120: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x18a120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x18a124: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x18a124u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x18a128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a12c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a134: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x18a134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x18a138: 0x90e20014  lbu         $v0, 0x14($a3)
    ctx->pc = 0x18a138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18a13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a140: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a144: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a148: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x18a148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x18a14c: 0x90e20018  lbu         $v0, 0x18($a3)
    ctx->pc = 0x18a14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x18a150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a154: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a15c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x18a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x18a160: 0x90e2001c  lbu         $v0, 0x1C($a3)
    ctx->pc = 0x18a160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x18a164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a168: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a16c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a170: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x18a170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x18a174: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x18a174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x18a178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a17c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a180: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a184: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x18a184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x18a188: 0x90e20024  lbu         $v0, 0x24($a3)
    ctx->pc = 0x18a188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18a18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a190: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a198: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x18a198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x18a19c: 0x90e20028  lbu         $v0, 0x28($a3)
    ctx->pc = 0x18a19cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x18a1a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a1a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a1a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1ac: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x18a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x18a1b0: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x18a1b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x18a1b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a1b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a1bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1c0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x18a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x18a1c4: 0x90e20030  lbu         $v0, 0x30($a3)
    ctx->pc = 0x18a1c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x18a1c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a1cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a1d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1d4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x18a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x18a1d8: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x18a1d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18a1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a1e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a1e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1e8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x18a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x18a1ec: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x18a1ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x18a1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a1f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a1f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a1fc: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x18a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x18a200: 0x90e2003c  lbu         $v0, 0x3C($a3)
    ctx->pc = 0x18a200u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x18a204: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18a208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a20c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a214: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x18a214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x18a218: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x18a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x18a21c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a220: 0x1540fabf  bnez        $t2, . + 4 + (-0x541 << 2)
    ctx->pc = 0x18A220u;
    {
        const bool branch_taken_0x18a220 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A220u;
            // 0x18a224: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a220) {
            ctx->pc = 0x188D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188d20;
        }
    }
    ctx->pc = 0x18A228u;
label_18a228:
    // 0x18a228: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x18a228u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x18a22c: 0x1580fab8  bnez        $t4, . + 4 + (-0x548 << 2)
    ctx->pc = 0x18A22Cu;
    {
        const bool branch_taken_0x18a22c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A22Cu;
            // 0x18a230: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a22c) {
            ctx->pc = 0x188D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188d10;
        }
    }
    ctx->pc = 0x18A234u;
label_18a234:
    // 0x18a234: 0x3e00008  jr          $ra
    ctx->pc = 0x18A234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A23Cu;
    // 0x18a23c: 0x0  nop
    ctx->pc = 0x18a23cu;
    // NOP
}
