#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE670
// Address: 0x1ee670 - 0x1ee7b0
void sub_001EE670_0x1ee670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE670_0x1ee670");
#endif

    switch (ctx->pc) {
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee78cu: goto label_1ee78c;
        default: break;
    }

    ctx->pc = 0x1ee670u;

    // 0x1ee670: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ee674: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ee674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ee678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee67c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ee67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee680: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ee680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ee684: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ee684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ee688: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee68c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1ee690: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1ee690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1ee694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee698: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1ee698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee69c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ee69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ee6a0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ee6a4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1ee6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1ee6a8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ee6ac: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1ee6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x1ee6b0: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1ee6b4: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1ee6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee6b8: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1ee6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1ee6bc: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1ee6bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ee6c0: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1ee6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1ee6c4: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1ee6c4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x1ee6c8: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1ee6c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ee6cc: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1ee6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ee6d0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1ee6d0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x1ee6d4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1ee6d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ee6d8: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1ee6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ee6dc: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1ee6dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1ee6e0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1ee6e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ee6e4: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1ee6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ee6e8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1ee6e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1ee6ec: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1ee6ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ee6f0: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1ee6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ee6f4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1ee6f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ee6f8: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1ee6fc: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1ee6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1ee700: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1ee700u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ee704: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1ee704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ee708: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1ee708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1ee70c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ee70cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ee710: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1ee710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1ee714: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1ee714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ee718: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ee718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ee71c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1ee71cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ee720: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1ee720u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ee724: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1ee724u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ee728: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE728u;
    {
        const bool branch_taken_0x1ee728 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE728u;
            // 0x1ee72c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee728) {
            ctx->pc = 0x1EE774u;
            goto label_1ee774;
        }
    }
    ctx->pc = 0x1EE730u;
    // 0x1ee730: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee734: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1ee734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1ee738: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ee738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ee73c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee740: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ee740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee744: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ee748: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1ee748u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ee74c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ee750: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1ee750u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ee754: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ee758: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1ee758u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ee75c: 0xc07d694  jal         func_1F5A50
    ctx->pc = 0x1EE75Cu;
    SET_GPR_U32(ctx, 31, 0x1EE764u);
    ctx->pc = 0x1EE760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE75Cu;
            // 0x1ee760: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A50u;
    if (runtime->hasFunction(0x1F5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE764u; }
        if (ctx->pc != 0x1EE764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A50_0x1f5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE764u; }
        if (ctx->pc != 0x1EE764u) { return; }
    }
    ctx->pc = 0x1EE764u;
label_1ee764:
    // 0x1ee764: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee768: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee76c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE76Cu;
    {
        const bool branch_taken_0x1ee76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE76Cu;
            // 0x1ee770: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee76c) {
            ctx->pc = 0x1EE78Cu;
            goto label_1ee78c;
        }
    }
    ctx->pc = 0x1EE774u;
label_1ee774:
    // 0x1ee774: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee778: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ee778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ee77c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ee77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee780: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1ee780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ee784: 0xc07d694  jal         func_1F5A50
    ctx->pc = 0x1EE784u;
    SET_GPR_U32(ctx, 31, 0x1EE78Cu);
    ctx->pc = 0x1EE788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE784u;
            // 0x1ee788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A50u;
    if (runtime->hasFunction(0x1F5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE78Cu; }
        if (ctx->pc != 0x1EE78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A50_0x1f5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE78Cu; }
        if (ctx->pc != 0x1EE78Cu) { return; }
    }
    ctx->pc = 0x1EE78Cu;
label_1ee78c:
    // 0x1ee78c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee790: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee794: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1ee794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1ee798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE79Cu;
            // 0x1ee7a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE7A4u;
    // 0x1ee7a4: 0x0  nop
    ctx->pc = 0x1ee7a4u;
    // NOP
    // 0x1ee7a8: 0x0  nop
    ctx->pc = 0x1ee7a8u;
    // NOP
    // 0x1ee7ac: 0x0  nop
    ctx->pc = 0x1ee7acu;
    // NOP
}
