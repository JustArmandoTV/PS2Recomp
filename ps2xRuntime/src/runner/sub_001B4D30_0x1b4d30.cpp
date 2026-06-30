#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4D30
// Address: 0x1b4d30 - 0x1b4da8
void sub_001B4D30_0x1b4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D30_0x1b4d30");
#endif

    switch (ctx->pc) {
        case 0x1b4d94u: goto label_1b4d94;
        default: break;
    }

    ctx->pc = 0x1b4d30u;

    // 0x1b4d30: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1b4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b4d34: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x1b4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1b4d38: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b4d3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b4d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b4d4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b4d54: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x1b4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1b4d58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d60: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x1b4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1b4d64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b4d68: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4d6c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d70: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b4d74: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b4d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d78: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4D78u;
    {
        const bool branch_taken_0x1b4d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D78u;
            // 0x1b4d7c: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d78) {
            ctx->pc = 0x1B4D98u;
            goto label_1b4d98;
        }
    }
    ctx->pc = 0x1B4D80u;
    // 0x1b4d80: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b4d84: 0x1282823  subu        $a1, $t1, $t0
    ctx->pc = 0x1b4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1b4d88: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4d8c: 0xc06d36a  jal         func_1B4DA8
    ctx->pc = 0x1B4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D94u);
    ctx->pc = 0x1B4D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D8Cu;
            // 0x1b4d90: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DA8u;
    if (runtime->hasFunction(0x1B4DA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D94u; }
        if (ctx->pc != 0x1B4D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4DA8_0x1b4da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D94u; }
        if (ctx->pc != 0x1B4D94u) { return; }
    }
    ctx->pc = 0x1B4D94u;
label_1b4d94:
    // 0x1b4d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d98:
    // 0x1b4d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D9Cu;
            // 0x1b4da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4DA4u;
    // 0x1b4da4: 0x0  nop
    ctx->pc = 0x1b4da4u;
    // NOP
}
