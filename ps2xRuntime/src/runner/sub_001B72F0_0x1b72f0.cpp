#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B72F0
// Address: 0x1b72f0 - 0x1b7360
void sub_001B72F0_0x1b72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B72F0_0x1b72f0");
#endif

    switch (ctx->pc) {
        case 0x1b730cu: goto label_1b730c;
        default: break;
    }

    ctx->pc = 0x1b72f0u;

    // 0x1b72f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b72f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b72f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b72f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7304: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B7304u;
    SET_GPR_U32(ctx, 31, 0x1B730Cu);
    ctx->pc = 0x1B7308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7304u;
            // 0x1b7308: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B730Cu; }
        if (ctx->pc != 0x1B730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B730Cu; }
        if (ctx->pc != 0x1B730Cu) { return; }
    }
    ctx->pc = 0x1B730Cu;
label_1b730c:
    // 0x1b730c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7310u;
    {
        const bool branch_taken_0x1b7310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7310u;
            // 0x1b7314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7310) {
            ctx->pc = 0x1B7330u;
            goto label_1b7330;
        }
    }
    ctx->pc = 0x1B7318u;
    // 0x1b7318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b731c: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x1b731cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
    // 0x1b7320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7328: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7328u;
    ctx->pc = 0x1B732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7328u;
            // 0x1b732c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7330u;
label_1b7330:
    // 0x1b7330: 0xae110da0  sw          $s1, 0xDA0($s0)
    ctx->pc = 0x1b7330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 17));
    // 0x1b7334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b733c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7340: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7340u;
            // 0x1b7344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7348u;
    // 0x1b7348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b734c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7354: 0x8062890  j           func_18A240
    ctx->pc = 0x1B7354u;
    ctx->pc = 0x1B7358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7354u;
            // 0x1b7358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0018A240_0x18a240(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B735Cu;
    // 0x1b735c: 0x0  nop
    ctx->pc = 0x1b735cu;
    // NOP
}
