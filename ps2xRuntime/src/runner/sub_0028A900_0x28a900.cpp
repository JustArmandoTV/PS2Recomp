#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A900
// Address: 0x28a900 - 0x28aa20
void sub_0028A900_0x28a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A900_0x28a900");
#endif

    switch (ctx->pc) {
        case 0x28a948u: goto label_28a948;
        case 0x28a95cu: goto label_28a95c;
        case 0x28a988u: goto label_28a988;
        case 0x28a9f0u: goto label_28a9f0;
        default: break;
    }

    ctx->pc = 0x28a900u;

    // 0x28a900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28a904: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28a908: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a90c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a914: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28a914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a91c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28a91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a924: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28a924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a930: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A930u;
    {
        const bool branch_taken_0x28a930 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x28A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A930u;
            // 0x28a934: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a930) {
            ctx->pc = 0x28A940u;
            goto label_28a940;
        }
    }
    ctx->pc = 0x28A938u;
    // 0x28a938: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x28a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28a93c: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28a93cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28a940:
    // 0x28a940: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A940u;
    {
        const bool branch_taken_0x28a940 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28a940) {
            ctx->pc = 0x28A968u;
            goto label_28a968;
        }
    }
    ctx->pc = 0x28A948u;
label_28a948:
    // 0x28a948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a94c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a950: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a954: 0xc0a2b1c  jal         func_28AC70
    ctx->pc = 0x28A954u;
    SET_GPR_U32(ctx, 31, 0x28A95Cu);
    ctx->pc = 0x28A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A954u;
            // 0x28a958: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AC70u;
    if (runtime->hasFunction(0x28AC70u)) {
        auto targetFn = runtime->lookupFunction(0x28AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A95Cu; }
        if (ctx->pc != 0x28A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028AC70_0x28ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A95Cu; }
        if (ctx->pc != 0x28A95Cu) { return; }
    }
    ctx->pc = 0x28A95Cu;
label_28a95c:
    // 0x28a95c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a960: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28A960u;
    {
        const bool branch_taken_0x28a960 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x28a960) {
            ctx->pc = 0x28A948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a948;
        }
    }
    ctx->pc = 0x28A968u;
label_28a968:
    // 0x28a968: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x28A968u;
    {
        const bool branch_taken_0x28a968 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x28a968) {
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A970u;
    // 0x28a970: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x28a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x28a974: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x28a978: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28a97c: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x28a980: 0x27b6008c  addiu       $s6, $sp, 0x8C
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x28a984: 0x0  nop
    ctx->pc = 0x28a984u;
    // NOP
label_28a988:
    // 0x28a988: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x28a988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28a98c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x28a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28a990: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28a994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a99c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28a9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x28a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x28a9a8: 0xc640fff0  lwc1        $f0, -0x10($s2)
    ctx->pc = 0x28a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9ac: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x28a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x28a9b0: 0xc640fff4  lwc1        $f0, -0xC($s2)
    ctx->pc = 0x28a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9b4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x28a9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x28a9b8: 0xc640fff8  lwc1        $f0, -0x8($s2)
    ctx->pc = 0x28a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9bc: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x28a9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x28a9c0: 0xc640fffc  lwc1        $f0, -0x4($s2)
    ctx->pc = 0x28a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9c4: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x28a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x28a9c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9cc: 0xe640fff0  swc1        $f0, -0x10($s2)
    ctx->pc = 0x28a9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), bits); }
    // 0x28a9d0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9d4: 0xe640fff4  swc1        $f0, -0xC($s2)
    ctx->pc = 0x28a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967284), bits); }
    // 0x28a9d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9dc: 0xe640fff8  swc1        $f0, -0x8($s2)
    ctx->pc = 0x28a9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967288), bits); }
    // 0x28a9e0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x28a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9e4: 0xe640fffc  swc1        $f0, -0x4($s2)
    ctx->pc = 0x28a9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967292), bits); }
    // 0x28a9e8: 0xc0a2b1c  jal         func_28AC70
    ctx->pc = 0x28A9E8u;
    SET_GPR_U32(ctx, 31, 0x28A9F0u);
    ctx->pc = 0x28A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9E8u;
            // 0x28a9ec: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AC70u;
    if (runtime->hasFunction(0x28AC70u)) {
        auto targetFn = runtime->lookupFunction(0x28AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9F0u; }
        if (ctx->pc != 0x28A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028AC70_0x28ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9F0u; }
        if (ctx->pc != 0x28A9F0u) { return; }
    }
    ctx->pc = 0x28A9F0u;
label_28a9f0:
    // 0x28a9f0: 0x1e80ffe5  bgtz        $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x28A9F0u;
    {
        const bool branch_taken_0x28a9f0 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x28a9f0) {
            ctx->pc = 0x28A988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a988;
        }
    }
    ctx->pc = 0x28A9F8u;
label_28a9f8:
    // 0x28a9f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28a9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a9fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a9fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28aa00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28aa00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28aa04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28aa04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28aa08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28aa08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28aa0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28aa0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28aa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aa14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28aa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aa18: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA18u;
            // 0x28aa1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AA20u;
}
