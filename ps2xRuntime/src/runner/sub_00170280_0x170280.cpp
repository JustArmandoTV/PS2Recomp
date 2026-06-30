#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170280
// Address: 0x170280 - 0x1702d8
void sub_00170280_0x170280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170280_0x170280");
#endif

    switch (ctx->pc) {
        case 0x170298u: goto label_170298;
        case 0x1702bcu: goto label_1702bc;
        default: break;
    }

    ctx->pc = 0x170280u;

    // 0x170280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17028c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170290: 0xc0593d0  jal         func_164F40
    ctx->pc = 0x170290u;
    SET_GPR_U32(ctx, 31, 0x170298u);
    ctx->pc = 0x170294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170290u;
            // 0x170294: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F40u;
    if (runtime->hasFunction(0x164F40u)) {
        auto targetFn = runtime->lookupFunction(0x164F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170298u; }
        if (ctx->pc != 0x170298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F40_0x164f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170298u; }
        if (ctx->pc != 0x170298u) { return; }
    }
    ctx->pc = 0x170298u;
label_170298:
    // 0x170298: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170298u;
    {
        const bool branch_taken_0x170298 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170298u;
            // 0x17029c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170298) {
            ctx->pc = 0x1702C8u;
            goto label_1702c8;
        }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1702a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1702a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1702a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1702a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1702a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1702ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1702ACu;
    {
        const bool branch_taken_0x1702ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1702ac) {
            ctx->pc = 0x1702B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1702ACu;
            // 0x1702b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1702C8u;
            goto label_1702c8;
        }
    }
    ctx->pc = 0x1702B4u;
    // 0x1702b4: 0xc0593d2  jal         func_164F48
    ctx->pc = 0x1702B4u;
    SET_GPR_U32(ctx, 31, 0x1702BCu);
    ctx->pc = 0x1702B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702B4u;
            // 0x1702b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F48u;
    if (runtime->hasFunction(0x164F48u)) {
        auto targetFn = runtime->lookupFunction(0x164F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702BCu; }
        if (ctx->pc != 0x1702BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F48_0x164f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702BCu; }
        if (ctx->pc != 0x1702BCu) { return; }
    }
    ctx->pc = 0x1702BCu;
label_1702bc:
    // 0x1702bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1702BCu;
    {
        const bool branch_taken_0x1702bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702BCu;
            // 0x1702c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702bc) {
            ctx->pc = 0x1702CCu;
            goto label_1702cc;
        }
    }
    ctx->pc = 0x1702C4u;
    // 0x1702c4: 0x0  nop
    ctx->pc = 0x1702c4u;
    // NOP
label_1702c8:
    // 0x1702c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1702c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1702cc:
    // 0x1702cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1702ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1702d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1702D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702D0u;
            // 0x1702d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1702D8u;
}
