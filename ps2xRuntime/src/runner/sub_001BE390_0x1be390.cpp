#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE390
// Address: 0x1be390 - 0x1be400
void sub_001BE390_0x1be390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE390_0x1be390");
#endif

    switch (ctx->pc) {
        case 0x1be3b4u: goto label_1be3b4;
        case 0x1be3c4u: goto label_1be3c4;
        case 0x1be3ccu: goto label_1be3cc;
        case 0x1be3d4u: goto label_1be3d4;
        case 0x1be3dcu: goto label_1be3dc;
        default: break;
    }

    ctx->pc = 0x1be390u;

    // 0x1be390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be394: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be39c: 0x24509d30  addiu       $s0, $v0, -0x62D0
    ctx->pc = 0x1be39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x1be3a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1be3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be3a4: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE3A4u;
    {
        const bool branch_taken_0x1be3a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BE3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3A4u;
            // 0x1be3a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3a4) {
            ctx->pc = 0x1BE3F0u;
            goto label_1be3f0;
        }
    }
    ctx->pc = 0x1BE3ACu;
    // 0x1be3ac: 0xc06f900  jal         func_1BE400
    ctx->pc = 0x1BE3ACu;
    SET_GPR_U32(ctx, 31, 0x1BE3B4u);
    ctx->pc = 0x1BE400u;
    if (runtime->hasFunction(0x1BE400u)) {
        auto targetFn = runtime->lookupFunction(0x1BE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B4u; }
        if (ctx->pc != 0x1BE3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE400_0x1be400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B4u; }
        if (ctx->pc != 0x1BE3B4u) { return; }
    }
    ctx->pc = 0x1BE3B4u;
label_1be3b4:
    // 0x1be3b4: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1be3b8: 0x24631ea8  addiu       $v1, $v1, 0x1EA8
    ctx->pc = 0x1be3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7848));
    // 0x1be3bc: 0xc06f904  jal         func_1BE410
    ctx->pc = 0x1BE3BCu;
    SET_GPR_U32(ctx, 31, 0x1BE3C4u);
    ctx->pc = 0x1BE3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3BCu;
            // 0x1be3c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE410u;
    if (runtime->hasFunction(0x1BE410u)) {
        auto targetFn = runtime->lookupFunction(0x1BE410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3C4u; }
        if (ctx->pc != 0x1BE3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE410_0x1be410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3C4u; }
        if (ctx->pc != 0x1BE3C4u) { return; }
    }
    ctx->pc = 0x1BE3C4u;
label_1be3c4:
    // 0x1be3c4: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1BE3C4u;
    SET_GPR_U32(ctx, 31, 0x1BE3CCu);
    ctx->pc = 0x1BECE0u;
    if (runtime->hasFunction(0x1BECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3CCu; }
        if (ctx->pc != 0x1BE3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BECE0_0x1bece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3CCu; }
        if (ctx->pc != 0x1BE3CCu) { return; }
    }
    ctx->pc = 0x1BE3CCu;
label_1be3cc:
    // 0x1be3cc: 0xc06fb44  jal         func_1BED10
    ctx->pc = 0x1BE3CCu;
    SET_GPR_U32(ctx, 31, 0x1BE3D4u);
    ctx->pc = 0x1BED10u;
    if (runtime->hasFunction(0x1BED10u)) {
        auto targetFn = runtime->lookupFunction(0x1BED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BED10_0x1bed10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    }
    ctx->pc = 0x1BE3D4u;
label_1be3d4:
    // 0x1be3d4: 0xc06f4d2  jal         func_1BD348
    ctx->pc = 0x1BE3D4u;
    SET_GPR_U32(ctx, 31, 0x1BE3DCu);
    ctx->pc = 0x1BD348u;
    if (runtime->hasFunction(0x1BD348u)) {
        auto targetFn = runtime->lookupFunction(0x1BD348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3DCu; }
        if (ctx->pc != 0x1BE3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD348_0x1bd348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3DCu; }
        if (ctx->pc != 0x1BE3DCu) { return; }
    }
    ctx->pc = 0x1BE3DCu;
label_1be3dc:
    // 0x1be3dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be3e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1be3e4: 0xac609d34  sw          $zero, -0x62CC($v1)
    ctx->pc = 0x1be3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942004), GPR_U32(ctx, 0));
    // 0x1be3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be3ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1be3f0:
    // 0x1be3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3F8u;
            // 0x1be3fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE400u;
}
