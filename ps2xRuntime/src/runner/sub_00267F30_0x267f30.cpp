#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267F30
// Address: 0x267f30 - 0x268130
void sub_00267F30_0x267f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267F30_0x267f30");
#endif

    switch (ctx->pc) {
        case 0x268080u: goto label_268080;
        case 0x2680a4u: goto label_2680a4;
        default: break;
    }

    ctx->pc = 0x267f30u;

    // 0x267f30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x267f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x267f34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x267f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x267f38: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x267f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x267f3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x267f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x267f40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267f44: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x267f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267f4c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x267f4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267f54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267f5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x267f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267f64: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x267f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x267f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267f6c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x267f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
    // 0x267f70: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x267f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x267f74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x267f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f78: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267f7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x267f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f80: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x267f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x267f84: 0xa3a200f8  sb          $v0, 0xF8($sp)
    ctx->pc = 0x267f84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 2));
    // 0x267f88: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267f8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267F8Cu;
    {
        const bool branch_taken_0x267f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F8Cu;
            // 0x267f90: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f8c) {
            ctx->pc = 0x267FC0u;
            goto label_267fc0;
        }
    }
    ctx->pc = 0x267F94u;
    // 0x267f94: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267f98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x267f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x267f9c: 0x2442cff0  addiu       $v0, $v0, -0x3010
    ctx->pc = 0x267f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954992));
    // 0x267fa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x267fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x267fa4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x267fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x267fa8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x267fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x267fac: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x267facu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x267fb0: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x267fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x267fb4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x267fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x267fb8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x267fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x267fbc: 0x0  nop
    ctx->pc = 0x267fbcu;
    // NOP
label_267fc0:
    // 0x267fc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x267fc4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x267fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fc8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x267fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fcc: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x267fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x267fd0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x267fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x267fd4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x267fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fd8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x267fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x267fdc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x267fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fe0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x267fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x267fe4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x267fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fe8: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x267fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x267fec: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x267fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ff0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x267ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x267ff4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x267ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ff8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x267ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x267ffc: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x267ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268000: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x268000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x268004: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x268004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268008: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x268008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x26800c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x26800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268010: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x268010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x268014: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x268014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268018: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x268018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x26801c: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x26801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268020: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x268020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x268024: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x268024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268028: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x268028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x26802c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x26802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268030: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x268030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x268034: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x268034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268038: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x268038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x26803c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x26803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268040: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x268040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x268044: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x268044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268048: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x268048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x26804c: 0xafa900e8  sw          $t1, 0xE8($sp)
    ctx->pc = 0x26804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 9));
    // 0x268050: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x268050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x268054: 0xafb400d4  sw          $s4, 0xD4($sp)
    ctx->pc = 0x268054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 20));
    // 0x268058: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x268058u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26805c: 0xafb300d8  sw          $s3, 0xD8($sp)
    ctx->pc = 0x26805cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 19));
    // 0x268060: 0xe7ac00c4  swc1        $f12, 0xC4($sp)
    ctx->pc = 0x268060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x268064: 0xafb100e0  sw          $s1, 0xE0($sp)
    ctx->pc = 0x268064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 17));
    // 0x268068: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x268068u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x26806c: 0xafb000e4  sw          $s0, 0xE4($sp)
    ctx->pc = 0x26806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 16));
    // 0x268070: 0xe7ac00cc  swc1        $f12, 0xCC($sp)
    ctx->pc = 0x268070u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x268074: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x268074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x268078: 0xc099ed4  jal         func_267B50
    ctx->pc = 0x268078u;
    SET_GPR_U32(ctx, 31, 0x268080u);
    ctx->pc = 0x26807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268078u;
            // 0x26807c: 0xafb500ec  sw          $s5, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267B50u;
    if (runtime->hasFunction(0x267B50u)) {
        auto targetFn = runtime->lookupFunction(0x267B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268080u; }
        if (ctx->pc != 0x268080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267B50_0x267b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268080u; }
        if (ctx->pc != 0x268080u) { return; }
    }
    ctx->pc = 0x268080u;
label_268080:
    // 0x268080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268084: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x268084u;
    {
        const bool branch_taken_0x268084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x268088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268084u;
            // 0x268088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268084) {
            ctx->pc = 0x2680B0u;
            goto label_2680b0;
        }
    }
    ctx->pc = 0x26808Cu;
    // 0x26808c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268090: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x268090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268094: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268098: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x268098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26809c: 0xc09a298  jal         func_268A60
    ctx->pc = 0x26809Cu;
    SET_GPR_U32(ctx, 31, 0x2680A4u);
    ctx->pc = 0x2680A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26809Cu;
            // 0x2680a0: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268A60u;
    if (runtime->hasFunction(0x268A60u)) {
        auto targetFn = runtime->lookupFunction(0x268A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680A4u; }
        if (ctx->pc != 0x2680A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268A60_0x268a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680A4u; }
        if (ctx->pc != 0x2680A4u) { return; }
    }
    ctx->pc = 0x2680A4u;
label_2680a4:
    // 0x2680a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2680a8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2680a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2680ac: 0x0  nop
    ctx->pc = 0x2680acu;
    // NOP
label_2680b0:
    // 0x2680b0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2680b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x2680b4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x2680b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
    // 0x2680b8: 0x27a400f4  addiu       $a0, $sp, 0xF4
    ctx->pc = 0x2680b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2680bc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2680bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2680c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2680c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2680c4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2680c8: 0xa3a300f4  sb          $v1, 0xF4($sp)
    ctx->pc = 0x2680c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 3));
    // 0x2680cc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2680ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2680d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2680D0u;
    {
        const bool branch_taken_0x2680d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680d0) {
            ctx->pc = 0x268100u;
            goto label_268100;
        }
    }
    ctx->pc = 0x2680D8u;
    // 0x2680d8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2680dc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2680dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2680e0: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x2680e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
    // 0x2680e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2680e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2680e8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2680e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x2680ec: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2680f0: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2680f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
    // 0x2680f4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2680f8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2680f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2680fc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2680fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_268100:
    // 0x268100: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x268100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268104: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x268104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268108: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x268108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26810c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26810cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26811c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26811cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268120: 0x3e00008  jr          $ra
    ctx->pc = 0x268120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268120u;
            // 0x268124: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268128u;
    // 0x268128: 0x0  nop
    ctx->pc = 0x268128u;
    // NOP
    // 0x26812c: 0x0  nop
    ctx->pc = 0x26812cu;
    // NOP
}
