#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC450
// Address: 0x2fc450 - 0x2fc4f0
void sub_002FC450_0x2fc450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC450_0x2fc450");
#endif

    switch (ctx->pc) {
        case 0x2fc49cu: goto label_2fc49c;
        default: break;
    }

    ctx->pc = 0x2fc450u;

    // 0x2fc450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc454: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc45c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc464: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc468: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc470: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc474: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc478: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc47c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc47cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc480: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc484: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc488: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc48c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc490: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc494: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC494u;
    SET_GPR_U32(ctx, 31, 0x2FC49Cu);
    ctx->pc = 0x2FC498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC494u;
            // 0x2fc498: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC49Cu; }
        if (ctx->pc != 0x2FC49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC49Cu; }
        if (ctx->pc != 0x2FC49Cu) { return; }
    }
    ctx->pc = 0x2FC49Cu;
label_2fc49c:
    // 0x2fc49c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc4a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fc4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2fc4a4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc4a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fc4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2fc4ac: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fc4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc4b0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc4b4: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x2fc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x2fc4b8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fc4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc4bc: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x2fc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x2fc4c0: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
    // 0x2fc4c4: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x2fc4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x2fc4c8: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
    // 0x2fc4cc: 0xae050048  sw          $a1, 0x48($s0)
    ctx->pc = 0x2fc4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
    // 0x2fc4d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc4d4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc4d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2fc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2fc4dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2fc4e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC4E8u;
            // 0x2fc4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC4F0u;
}
