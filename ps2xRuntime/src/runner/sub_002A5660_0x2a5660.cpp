#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5660
// Address: 0x2a5660 - 0x2a5780
void sub_002A5660_0x2a5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5660_0x2a5660");
#endif

    switch (ctx->pc) {
        case 0x2a567cu: goto label_2a567c;
        case 0x2a5738u: goto label_2a5738;
        case 0x2a5750u: goto label_2a5750;
        case 0x2a5768u: goto label_2a5768;
        default: break;
    }

    ctx->pc = 0x2a5660u;

    // 0x2a5660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5664: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a566c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2a566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a5670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5674: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5674u;
    {
        const bool branch_taken_0x2a5674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5674u;
            // 0x2a5678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5674) {
            ctx->pc = 0x2A5698u;
            goto label_2a5698;
        }
    }
    ctx->pc = 0x2A567Cu;
label_2a567c:
    // 0x2a567c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2a567cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a5684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a5688: 0x0  nop
    ctx->pc = 0x2a5688u;
    // NOP
    // 0x2a568c: 0x0  nop
    ctx->pc = 0x2a568cu;
    // NOP
    // 0x2a5690: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A5690u;
    {
        const bool branch_taken_0x2a5690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5690) {
            ctx->pc = 0x2A567Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a567c;
        }
    }
    ctx->pc = 0x2A5698u;
label_2a5698:
    // 0x2a5698: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a5698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a569c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a56a0: 0xc468e130  lwc1        $f8, -0x1ED0($v1)
    ctx->pc = 0x2a56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a56a4: 0x24061fff  addiu       $a2, $zero, 0x1FFF
    ctx->pc = 0x2a56a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x2a56a8: 0xc447e134  lwc1        $f7, -0x1ECC($v0)
    ctx->pc = 0x2a56a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a56ac: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2a56acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x2a56b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a56b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a56b4: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x2a56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x2a56b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a56bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a56c0: 0xc466e138  lwc1        $f6, -0x1EC8($v1)
    ctx->pc = 0x2a56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a56c4: 0xc445e140  lwc1        $f5, -0x1EC0($v0)
    ctx->pc = 0x2a56c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a56c8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2a56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a56cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a56d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a56d4: 0xc443e148  lwc1        $f3, -0x1EB8($v0)
    ctx->pc = 0x2a56d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a56d8: 0xc464e144  lwc1        $f4, -0x1EBC($v1)
    ctx->pc = 0x2a56d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a56dc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2a56dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a56e0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a56e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56e4: 0x3c023faa  lui         $v0, 0x3FAA
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16298 << 16));
    // 0x2a56e8: 0xe60201a4  swc1        $f2, 0x1A4($s0)
    ctx->pc = 0x2a56e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2a56ec: 0x3447aaab  ori         $a3, $v0, 0xAAAB
    ctx->pc = 0x2a56ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2a56f0: 0xe60101a8  swc1        $f1, 0x1A8($s0)
    ctx->pc = 0x2a56f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2a56f4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2a56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x2a56f8: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2a56f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x2a56fc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2a56fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2a5700: 0xe60801b0  swc1        $f8, 0x1B0($s0)
    ctx->pc = 0x2a5700u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x2a5704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5708: 0xe60701b4  swc1        $f7, 0x1B4($s0)
    ctx->pc = 0x2a5708u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x2a570c: 0xe60601b8  swc1        $f6, 0x1B8($s0)
    ctx->pc = 0x2a570cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x2a5710: 0xe60501bc  swc1        $f5, 0x1BC($s0)
    ctx->pc = 0x2a5710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x2a5714: 0xe60401c0  swc1        $f4, 0x1C0($s0)
    ctx->pc = 0x2a5714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
    // 0x2a5718: 0xe60301c4  swc1        $f3, 0x1C4($s0)
    ctx->pc = 0x2a5718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x2a571c: 0xae070198  sw          $a3, 0x198($s0)
    ctx->pc = 0x2a571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 7));
    // 0x2a5720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5724: 0xae060194  sw          $a2, 0x194($s0)
    ctx->pc = 0x2a5724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 6));
    // 0x2a5728: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2a5728u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2a572c: 0xae05019c  sw          $a1, 0x19C($s0)
    ctx->pc = 0x2a572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 5));
    // 0x2a5730: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A5730u;
    SET_GPR_U32(ctx, 31, 0x2A5738u);
    ctx->pc = 0x2A5734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5730u;
            // 0x2a5734: 0xae0301a0  sw          $v1, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5738u; }
        if (ctx->pc != 0x2A5738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5738u; }
        if (ctx->pc != 0x2A5738u) { return; }
    }
    ctx->pc = 0x2A5738u;
label_2a5738:
    // 0x2a5738: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a5738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a573c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5740: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5744: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x2a5744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x2a5748: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A5748u;
    SET_GPR_U32(ctx, 31, 0x2A5750u);
    ctx->pc = 0x2A574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5748u;
            // 0x2a574c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5750u; }
        if (ctx->pc != 0x2A5750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5750u; }
        if (ctx->pc != 0x2A5750u) { return; }
    }
    ctx->pc = 0x2A5750u;
label_2a5750:
    // 0x2a5750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5754: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x2a5754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x2a5758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a5758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a575c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a575cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a5760: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A5760u;
    SET_GPR_U32(ctx, 31, 0x2A5768u);
    ctx->pc = 0x2A5764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5760u;
            // 0x2a5764: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5768u; }
        if (ctx->pc != 0x2A5768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5768u; }
        if (ctx->pc != 0x2A5768u) { return; }
    }
    ctx->pc = 0x2A5768u;
label_2a5768:
    // 0x2a5768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a576c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a576cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5770: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5770u;
            // 0x2a5774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5778u;
    // 0x2a5778: 0x0  nop
    ctx->pc = 0x2a5778u;
    // NOP
    // 0x2a577c: 0x0  nop
    ctx->pc = 0x2a577cu;
    // NOP
}
