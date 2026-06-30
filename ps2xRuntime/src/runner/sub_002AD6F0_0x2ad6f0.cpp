#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD6F0
// Address: 0x2ad6f0 - 0x2ad750
void sub_002AD6F0_0x2ad6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6F0_0x2ad6f0");
#endif

    switch (ctx->pc) {
        case 0x2ad71cu: goto label_2ad71c;
        case 0x2ad728u: goto label_2ad728;
        case 0x2ad73cu: goto label_2ad73c;
        default: break;
    }

    ctx->pc = 0x2ad6f0u;

    // 0x2ad6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad6fc: 0x90830108  lbu         $v1, 0x108($a0)
    ctx->pc = 0x2ad6fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2ad700: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AD700u;
    {
        const bool branch_taken_0x2ad700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD700u;
            // 0x2ad704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad700) {
            ctx->pc = 0x2AD73Cu;
            goto label_2ad73c;
        }
    }
    ctx->pc = 0x2AD708u;
    // 0x2ad708: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x2ad708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2ad70c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2ad710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad714: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AD714u;
    SET_GPR_U32(ctx, 31, 0x2AD71Cu);
    ctx->pc = 0x2AD718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD714u;
            // 0x2ad718: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD71Cu; }
        if (ctx->pc != 0x2AD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD71Cu; }
        if (ctx->pc != 0x2AD71Cu) { return; }
    }
    ctx->pc = 0x2AD71Cu;
label_2ad71c:
    // 0x2ad71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad720: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AD720u;
    SET_GPR_U32(ctx, 31, 0x2AD728u);
    ctx->pc = 0x2AD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD720u;
            // 0x2ad724: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD728u; }
        if (ctx->pc != 0x2AD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD728u; }
        if (ctx->pc != 0x2AD728u) { return; }
    }
    ctx->pc = 0x2AD728u;
label_2ad728:
    // 0x2ad728: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ad728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ad72c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2ad730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad734: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AD734u;
    SET_GPR_U32(ctx, 31, 0x2AD73Cu);
    ctx->pc = 0x2AD738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD734u;
            // 0x2ad738: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD73Cu; }
        if (ctx->pc != 0x2AD73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD73Cu; }
        if (ctx->pc != 0x2AD73Cu) { return; }
    }
    ctx->pc = 0x2AD73Cu;
label_2ad73c:
    // 0x2ad73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad744: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD744u;
            // 0x2ad748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD74Cu;
    // 0x2ad74c: 0x0  nop
    ctx->pc = 0x2ad74cu;
    // NOP
}
