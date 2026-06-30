#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0EF8
// Address: 0x1a0ef8 - 0x1a0fc8
void sub_001A0EF8_0x1a0ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0EF8_0x1a0ef8");
#endif

    ctx->pc = 0x1a0ef8u;

    // 0x1a0ef8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0efc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0f08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f10: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f18: 0x8c650514  lw          $a1, 0x514($v1)
    ctx->pc = 0x1a0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1300)));
    // 0x1a0f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f24: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x1a0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1a0f28: 0x80679b0  j           func_19E6C0
    ctx->pc = 0x1A0F28u;
    ctx->pc = 0x1A0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F28u;
            // 0x1a0f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E6C0u;
    if (runtime->hasFunction(0x19E6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E6C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019E6C0_0x19e6c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0F30u;
    // 0x1a0f30: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0f44: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f4c: 0x246304f8  addiu       $v1, $v1, 0x4F8
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1272));
    // 0x1a0f50: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a0f54: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x1a0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x1a0f58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f5c: 0x806839c  j           func_1A0E70
    ctx->pc = 0x1A0F5Cu;
    ctx->pc = 0x1A0F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F5Cu;
            // 0x1a0f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E70u;
    if (runtime->hasFunction(0x1A0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A0E70_0x1a0e70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0F64u;
    // 0x1a0f64: 0x0  nop
    ctx->pc = 0x1a0f64u;
    // NOP
    // 0x1a0f68: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0f6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0f70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0f74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F78u;
            // 0x1a0f7c: 0x8c820510  lw          $v0, 0x510($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0F80u;
    // 0x1a0f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f90: 0x80683ec  j           func_1A0FB0
    ctx->pc = 0x1A0F90u;
    ctx->pc = 0x1A0F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F90u;
            // 0x1a0f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FB0u;
    goto label_1a0fb0;
    ctx->pc = 0x1A0F98u;
    // 0x1a0f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0fa8: 0x80683f2  j           func_1A0FC8
    ctx->pc = 0x1A0FA8u;
    ctx->pc = 0x1A0FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FA8u;
            // 0x1a0fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC8u;
    if (runtime->hasFunction(0x1A0FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A0FC8_0x1a0fc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0FB0u;
label_1a0fb0:
    // 0x1a0fb0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0fb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0fbc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FC0u;
            // 0x1a0fc4: 0x8c82050c  lw          $v0, 0x50C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FC8u;
}
