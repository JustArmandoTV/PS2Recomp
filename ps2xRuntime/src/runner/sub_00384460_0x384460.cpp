#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384460
// Address: 0x384460 - 0x3844c0
void sub_00384460_0x384460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384460_0x384460");
#endif

    switch (ctx->pc) {
        case 0x38449cu: goto label_38449c;
        case 0x3844b0u: goto label_3844b0;
        default: break;
    }

    ctx->pc = 0x384460u;

    // 0x384460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x384460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x384464: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x384464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x384468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38446c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38446cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x384470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384474: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x384474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x384478: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x384478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x38447c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38447cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x384480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x384484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x384484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384488: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x384488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x38448c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x38448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x384490: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x384490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x384494: 0xc089688  jal         func_225A20
    ctx->pc = 0x384494u;
    SET_GPR_U32(ctx, 31, 0x38449Cu);
    ctx->pc = 0x384498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384494u;
            // 0x384498: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38449Cu; }
        if (ctx->pc != 0x38449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38449Cu; }
        if (ctx->pc != 0x38449Cu) { return; }
    }
    ctx->pc = 0x38449Cu;
label_38449c:
    // 0x38449c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x38449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3844a0: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x3844a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3844a4: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x3844a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3844a8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3844A8u;
    SET_GPR_U32(ctx, 31, 0x3844B0u);
    ctx->pc = 0x3844ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3844A8u;
            // 0x3844ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3844B0u; }
        if (ctx->pc != 0x3844B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3844B0u; }
        if (ctx->pc != 0x3844B0u) { return; }
    }
    ctx->pc = 0x3844B0u;
label_3844b0:
    // 0x3844b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3844b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3844b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3844b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3844b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3844B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3844BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3844B8u;
            // 0x3844bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3844C0u;
}
