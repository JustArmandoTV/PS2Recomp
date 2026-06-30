#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E478
// Address: 0x17e478 - 0x17e4d8
void sub_0017E478_0x17e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E478_0x17e478");
#endif

    ctx->pc = 0x17e478u;

    // 0x17e478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e47c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e484: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x17e488: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x17e488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17e48c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x17e48cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17e490: 0x43ac0  sll         $a3, $a0, 11
    ctx->pc = 0x17e490u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x17e494: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x17e498: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x17e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17e49c: 0x43202f  dsubu       $a0, $v0, $v1
    ctx->pc = 0x17e49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x17e4a0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x17e4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e4a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x17e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17e4a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17e4a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17e4ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E4ACu;
    {
        const bool branch_taken_0x17e4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4ACu;
            // 0x17e4b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4ac) {
            ctx->pc = 0x17E4D0u;
            goto label_17e4d0;
        }
    }
    ctx->pc = 0x17E4B4u;
    // 0x17e4b4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17e4b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17e4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4c0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17e4c4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e4c8: 0x804a576  j           func_1295D8
    ctx->pc = 0x17E4C8u;
    ctx->pc = 0x17E4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4C8u;
            // 0x17e4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17E4D0u;
label_17e4d0:
    // 0x17e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4D0u;
            // 0x17e4d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E4D8u;
}
