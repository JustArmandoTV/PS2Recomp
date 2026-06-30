#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0228
// Address: 0x1a0228 - 0x1a0288
void sub_001A0228_0x1a0228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0228_0x1a0228");
#endif

    switch (ctx->pc) {
        case 0x1a0244u: goto label_1a0244;
        default: break;
    }

    ctx->pc = 0x1a0228u;

    // 0x1a0228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a022c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0230: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a023c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A023Cu;
    SET_GPR_U32(ctx, 31, 0x1A0244u);
    ctx->pc = 0x1A0240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A023Cu;
            // 0x1a0240: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0244u; }
        if (ctx->pc != 0x1A0244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0244u; }
        if (ctx->pc != 0x1A0244u) { return; }
    }
    ctx->pc = 0x1A0244u;
label_1a0244:
    // 0x1a0244: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a024c: 0x2484a4a0  addiu       $a0, $a0, -0x5B60
    ctx->pc = 0x1a024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x1a0250: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0250u;
    {
        const bool branch_taken_0x1a0250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0250u;
            // 0x1a0254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0250) {
            ctx->pc = 0x1A0270u;
            goto label_1a0270;
        }
    }
    ctx->pc = 0x1A0258u;
    // 0x1a0258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a025c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a025cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0264: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0264u;
    ctx->pc = 0x1A0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0264u;
            // 0x1a0268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A026Cu;
    // 0x1a026c: 0x0  nop
    ctx->pc = 0x1a026cu;
    // NOP
label_1a0270:
    // 0x1a0270: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1a0270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1a0274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a027c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0280: 0x80602fe  j           func_180BF8
    ctx->pc = 0x1A0280u;
    ctx->pc = 0x1A0284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0280u;
            // 0x1a0284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180BF8u;
    if (runtime->hasFunction(0x180BF8u)) {
        auto targetFn = runtime->lookupFunction(0x180BF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180BF8_0x180bf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0288u;
}
