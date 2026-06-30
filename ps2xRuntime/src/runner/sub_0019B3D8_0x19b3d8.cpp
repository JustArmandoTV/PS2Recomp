#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B3D8
// Address: 0x19b3d8 - 0x19b4a8
void sub_0019B3D8_0x19b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B3D8_0x19b3d8");
#endif

    switch (ctx->pc) {
        case 0x19b3f0u: goto label_19b3f0;
        case 0x19b404u: goto label_19b404;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b494u: goto label_19b494;
        default: break;
    }

    ctx->pc = 0x19b3d8u;

    // 0x19b3d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19b3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b3e8: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B3E8u;
    SET_GPR_U32(ctx, 31, 0x19B3F0u);
    ctx->pc = 0x19B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3E8u;
            // 0x19b3ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3F0u; }
        if (ctx->pc != 0x19B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3F0u; }
        if (ctx->pc != 0x19B3F0u) { return; }
    }
    ctx->pc = 0x19B3F0u;
label_19b3f0:
    // 0x19b3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19b3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3fc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19B3FCu;
    SET_GPR_U32(ctx, 31, 0x19B404u);
    ctx->pc = 0x19B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3FCu;
            // 0x19b400: 0x24062d10  addiu       $a2, $zero, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B404u; }
        if (ctx->pc != 0x19B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B404u; }
        if (ctx->pc != 0x19B404u) { return; }
    }
    ctx->pc = 0x19B404u;
label_19b404:
    // 0x19b404: 0xc0689f0  jal         func_1A27C0
    ctx->pc = 0x19B404u;
    SET_GPR_U32(ctx, 31, 0x19B40Cu);
    ctx->pc = 0x19B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B404u;
            // 0x19b408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A27C0u;
    if (runtime->hasFunction(0x1A27C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B40Cu; }
        if (ctx->pc != 0x19B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A27C0_0x1a27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B40Cu; }
        if (ctx->pc != 0x19B40Cu) { return; }
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b410: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x19b410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x19b414: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B414u;
    {
        const bool branch_taken_0x19b414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B414u;
            // 0x19b418: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b414) {
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B41Cu;
    // 0x19b41c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19b420: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19b424: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19b424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19b428: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x19b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b42c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19b430: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x19b430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x19b434: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x19b434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x19b438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B438u;
    {
        const bool branch_taken_0x19b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B438u;
            // 0x19b43c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b438) {
            ctx->pc = 0x19B45Cu;
            goto label_19b45c;
        }
    }
    ctx->pc = 0x19B440u;
label_19b440:
    // 0x19b440: 0x3c01426f  lui         $at, 0x426F
    ctx->pc = 0x19b440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17007 << 16));
    // 0x19b444: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19b444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x19b448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b44c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x19b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x19b450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x19b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x19b454: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19b454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19b458: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19b458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_19b45c:
    // 0x19b45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b460: 0xae202d0c  sw          $zero, 0x2D0C($s1)
    ctx->pc = 0x19b460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11532), GPR_U32(ctx, 0));
    // 0x19b464: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x19b464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x19b468: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x19b468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x19b46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19b470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b478: 0x3e00008  jr          $ra
    ctx->pc = 0x19B478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B478u;
            // 0x19b47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B480u;
    // 0x19b480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b488: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19b48c: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B48Cu;
    SET_GPR_U32(ctx, 31, 0x19B494u);
    ctx->pc = 0x19B490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B48Cu;
            // 0x19b490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B494u; }
        if (ctx->pc != 0x19B494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B494u; }
        if (ctx->pc != 0x19B494u) { return; }
    }
    ctx->pc = 0x19B494u;
label_19b494:
    // 0x19b494: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x19b494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x19b498: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4A0u;
            // 0x19b4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B4A8u;
}
