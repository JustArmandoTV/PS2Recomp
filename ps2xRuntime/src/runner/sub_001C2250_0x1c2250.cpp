#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2250
// Address: 0x1c2250 - 0x1c22b8
void sub_001C2250_0x1c2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2250_0x1c2250");
#endif

    ctx->pc = 0x1c2250u;

    // 0x1c2250: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c2254: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c2254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2258: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c225c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1c225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2260: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2260u;
    {
        const bool branch_taken_0x1c2260 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C2264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2260u;
            // 0x1c2264: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2260) {
            ctx->pc = 0x1C2274u;
            goto label_1c2274;
        }
    }
    ctx->pc = 0x1C2268u;
    // 0x1c2268: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1c2268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c226c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C226Cu;
    {
        const bool branch_taken_0x1c226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c226c) {
            ctx->pc = 0x1C2270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C226Cu;
            // 0x1c2270: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2280u;
            goto label_1c2280;
        }
    }
    ctx->pc = 0x1C2274u;
label_1c2274:
    // 0x1c2274: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2274u;
            // 0x1c2278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C227Cu;
    // 0x1c227c: 0x0  nop
    ctx->pc = 0x1c227cu;
    // NOP
label_1c2280:
    // 0x1c2280: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1c2284: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c2288: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c2288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c228c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c2290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2294: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1c2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1c2298: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x1c2298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c229c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1c229cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c22a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c22a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c22a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c22ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22ACu;
            // 0x1c22b0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C22B4u;
    // 0x1c22b4: 0x0  nop
    ctx->pc = 0x1c22b4u;
    // NOP
}
