#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00378DC0
// Address: 0x378dc0 - 0x379050
void sub_00378DC0_0x378dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378DC0_0x378dc0");
#endif

    switch (ctx->pc) {
        case 0x378decu: goto label_378dec;
        case 0x378e1cu: goto label_378e1c;
        case 0x378f48u: goto label_378f48;
        case 0x378f50u: goto label_378f50;
        case 0x378fc0u: goto label_378fc0;
        case 0x379018u: goto label_379018;
        case 0x379030u: goto label_379030;
        default: break;
    }

    ctx->pc = 0x378dc0u;

    // 0x378dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378dc4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x378dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x378dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x378dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x378dcc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x378dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x378dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378dd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x378dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x378ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378de0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x378de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378de4: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x378DE4u;
    SET_GPR_U32(ctx, 31, 0x378DECu);
    ctx->pc = 0x378DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378DE4u;
            // 0x378de8: 0x34459180  ori         $a1, $v0, 0x9180 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37248);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378DECu; }
        if (ctx->pc != 0x378DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378DECu; }
        if (ctx->pc != 0x378DECu) { return; }
    }
    ctx->pc = 0x378DECu;
label_378dec:
    // 0x378dec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x378decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x378df0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x378df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x378df4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x378df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x378df8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x378df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x378dfc: 0x24427190  addiu       $v0, $v0, 0x7190
    ctx->pc = 0x378dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    // 0x378e00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x378e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x378e04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x378e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x378e08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x378e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e0c: 0xa2300054  sb          $s0, 0x54($s1)
    ctx->pc = 0x378e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 16));
    // 0x378e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x378e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e14: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x378e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x378e18: 0x24c650a0  addiu       $a2, $a2, 0x50A0
    ctx->pc = 0x378e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20640));
label_378e1c:
    // 0x378e1c: 0x90c50004  lbu         $a1, 0x4($a2)
    ctx->pc = 0x378e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x378e20: 0x54650040  bnel        $v1, $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x378E20u;
    {
        const bool branch_taken_0x378e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x378e20) {
            ctx->pc = 0x378E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378E20u;
            // 0x378e24: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378F24u;
            goto label_378f24;
        }
    }
    ctx->pc = 0x378E28u;
    // 0x378e28: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x378e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x378e2c: 0xc4cc000c  lwc1        $f12, 0xC($a2)
    ctx->pc = 0x378e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x378e30: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x378e30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x378e34: 0xc4cb0010  lwc1        $f11, 0x10($a2)
    ctx->pc = 0x378e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x378e38: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x378e38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x378e3c: 0xc4ca0014  lwc1        $f10, 0x14($a2)
    ctx->pc = 0x378e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x378e40: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x378e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
    // 0x378e44: 0xc4c90018  lwc1        $f9, 0x18($a2)
    ctx->pc = 0x378e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x378e48: 0xa225005c  sb          $a1, 0x5C($s1)
    ctx->pc = 0x378e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x378e4c: 0xc4c8001c  lwc1        $f8, 0x1C($a2)
    ctx->pc = 0x378e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x378e50: 0xa223005d  sb          $v1, 0x5D($s1)
    ctx->pc = 0x378e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x378e54: 0xc4c70020  lwc1        $f7, 0x20($a2)
    ctx->pc = 0x378e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x378e58: 0xa222005e  sb          $v0, 0x5E($s1)
    ctx->pc = 0x378e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x378e5c: 0xc4c60024  lwc1        $f6, 0x24($a2)
    ctx->pc = 0x378e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x378e60: 0x90c40007  lbu         $a0, 0x7($a2)
    ctx->pc = 0x378e60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x378e64: 0xc4c50028  lwc1        $f5, 0x28($a2)
    ctx->pc = 0x378e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x378e68: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x378e68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x378e6c: 0xc4c4002c  lwc1        $f4, 0x2C($a2)
    ctx->pc = 0x378e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x378e70: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x378e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x378e74: 0xc4c30030  lwc1        $f3, 0x30($a2)
    ctx->pc = 0x378e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x378e78: 0xa224005f  sb          $a0, 0x5F($s1)
    ctx->pc = 0x378e78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x378e7c: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x378e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378e80: 0xa2230060  sb          $v1, 0x60($s1)
    ctx->pc = 0x378e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x378e84: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x378e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378e88: 0xa2220061  sb          $v0, 0x61($s1)
    ctx->pc = 0x378e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x378e8c: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x378e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378e90: 0xe62c0064  swc1        $f12, 0x64($s1)
    ctx->pc = 0x378e90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x378e94: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x378e94u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x378e98: 0xe62b0068  swc1        $f11, 0x68($s1)
    ctx->pc = 0x378e98u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x378e9c: 0xe62a006c  swc1        $f10, 0x6C($s1)
    ctx->pc = 0x378e9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x378ea0: 0xe6290070  swc1        $f9, 0x70($s1)
    ctx->pc = 0x378ea0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x378ea4: 0xe6280074  swc1        $f8, 0x74($s1)
    ctx->pc = 0x378ea4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x378ea8: 0xe6270078  swc1        $f7, 0x78($s1)
    ctx->pc = 0x378ea8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x378eac: 0xe626007c  swc1        $f6, 0x7C($s1)
    ctx->pc = 0x378eacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x378eb0: 0xe6250080  swc1        $f5, 0x80($s1)
    ctx->pc = 0x378eb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x378eb4: 0xe6240084  swc1        $f4, 0x84($s1)
    ctx->pc = 0x378eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x378eb8: 0xe6230088  swc1        $f3, 0x88($s1)
    ctx->pc = 0x378eb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x378ebc: 0xe622008c  swc1        $f2, 0x8C($s1)
    ctx->pc = 0x378ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x378ec0: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x378ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x378ec4: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x378ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x378ec8: 0xc4c20040  lwc1        $f2, 0x40($a2)
    ctx->pc = 0x378ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378ecc: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x378eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378ed0: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x378ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378ed4: 0xe6220098  swc1        $f2, 0x98($s1)
    ctx->pc = 0x378ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x378ed8: 0xe621009c  swc1        $f1, 0x9C($s1)
    ctx->pc = 0x378ed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x378edc: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x378edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x378ee0: 0xc4c2004c  lwc1        $f2, 0x4C($a2)
    ctx->pc = 0x378ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378ee4: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x378ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378ee8: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x378ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378eec: 0xe62200a4  swc1        $f2, 0xA4($s1)
    ctx->pc = 0x378eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x378ef0: 0xe62100a8  swc1        $f1, 0xA8($s1)
    ctx->pc = 0x378ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x378ef4: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x378ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x378ef8: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x378ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378efc: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x378efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378f00: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x378f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378f04: 0xe62200b0  swc1        $f2, 0xB0($s1)
    ctx->pc = 0x378f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x378f08: 0xe62100b4  swc1        $f1, 0xB4($s1)
    ctx->pc = 0x378f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x378f0c: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x378f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x378f10: 0xc4c10064  lwc1        $f1, 0x64($a2)
    ctx->pc = 0x378f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378f14: 0xc4c00068  lwc1        $f0, 0x68($a2)
    ctx->pc = 0x378f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378f18: 0xe62100bc  swc1        $f1, 0xBC($s1)
    ctx->pc = 0x378f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x378f1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x378F1Cu;
    {
        const bool branch_taken_0x378f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378F1Cu;
            // 0x378f20: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f1c) {
            ctx->pc = 0x378F30u;
            goto label_378f30;
        }
    }
    ctx->pc = 0x378F24u;
label_378f24:
    // 0x378f24: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x378f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x378f28: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x378F28u;
    {
        const bool branch_taken_0x378f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378F28u;
            // 0x378f2c: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f28) {
            ctx->pc = 0x378E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_378e1c;
        }
    }
    ctx->pc = 0x378F30u;
label_378f30:
    // 0x378f30: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x378F30u;
    {
        const bool branch_taken_0x378f30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x378f30) {
            ctx->pc = 0x378F70u;
            goto label_378f70;
        }
    }
    ctx->pc = 0x378F38u;
    // 0x378f38: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x378f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x378f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x378f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f40: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x378F40u;
    SET_GPR_U32(ctx, 31, 0x378F48u);
    ctx->pc = 0x378F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378F40u;
            // 0x378f44: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378F48u; }
        if (ctx->pc != 0x378F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378F48u; }
        if (ctx->pc != 0x378F48u) { return; }
    }
    ctx->pc = 0x378F48u;
label_378f48:
    // 0x378f48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x378f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f4c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x378f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_378f50:
    // 0x378f50: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x378f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x378f54: 0xa043005e  sb          $v1, 0x5E($v0)
    ctx->pc = 0x378f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x378f58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x378f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x378f5c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x378f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378f60: 0x0  nop
    ctx->pc = 0x378f60u;
    // NOP
    // 0x378f64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x378F64u;
    {
        const bool branch_taken_0x378f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378f64) {
            ctx->pc = 0x378F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_378f50;
        }
    }
    ctx->pc = 0x378F6Cu;
    // 0x378f6c: 0x0  nop
    ctx->pc = 0x378f6cu;
    // NOP
label_378f70:
    // 0x378f70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x378f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x378f74: 0xa0406080  sb          $zero, 0x6080($v0)
    ctx->pc = 0x378f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24704), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x378f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x378f7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x378f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x378f80: 0xa0406088  sb          $zero, 0x6088($v0)
    ctx->pc = 0x378f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24712), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f84: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x378f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x378f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x378f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f8c: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x378f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x378f90: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x378f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x378f94: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x378f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x378f98: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x378f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
    // 0x378f9c: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x378f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    // 0x378fa0: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x378fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
    // 0x378fa4: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x378fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
    // 0x378fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x378fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x378FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378FB4u;
            // 0x378fb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x378FBCu;
    // 0x378fbc: 0x0  nop
    ctx->pc = 0x378fbcu;
    // NOP
label_378fc0:
    // 0x378fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x378fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x378fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378fd4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x378FD4u;
    {
        const bool branch_taken_0x378fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378FD4u;
            // 0x378fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fd4) {
            ctx->pc = 0x379030u;
            goto label_379030;
        }
    }
    ctx->pc = 0x378FDCu;
    // 0x378fdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x378fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x378fe0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x378fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x378fe4: 0x246371c0  addiu       $v1, $v1, 0x71C0
    ctx->pc = 0x378fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29120));
    // 0x378fe8: 0x244271f8  addiu       $v0, $v0, 0x71F8
    ctx->pc = 0x378fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29176));
    // 0x378fec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x378fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x378ff0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x378FF0u;
    {
        const bool branch_taken_0x378ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378FF0u;
            // 0x378ff4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ff0) {
            ctx->pc = 0x379018u;
            goto label_379018;
        }
    }
    ctx->pc = 0x378FF8u;
    // 0x378ff8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x378ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x378ffc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x378ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x379000: 0x246372a0  addiu       $v1, $v1, 0x72A0
    ctx->pc = 0x379000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29344));
    // 0x379004: 0x244272d8  addiu       $v0, $v0, 0x72D8
    ctx->pc = 0x379004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
    // 0x379008: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x379008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37900c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379010: 0xc0de414  jal         func_379050
    ctx->pc = 0x379010u;
    SET_GPR_U32(ctx, 31, 0x379018u);
    ctx->pc = 0x379014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379010u;
            // 0x379014: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379050u;
    if (runtime->hasFunction(0x379050u)) {
        auto targetFn = runtime->lookupFunction(0x379050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379018u; }
        if (ctx->pc != 0x379018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379050_0x379050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379018u; }
        if (ctx->pc != 0x379018u) { return; }
    }
    ctx->pc = 0x379018u;
label_379018:
    // 0x379018: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x379018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37901c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37901cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x379020: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379020u;
    {
        const bool branch_taken_0x379020 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x379020) {
            ctx->pc = 0x379024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379020u;
            // 0x379024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379034u;
            goto label_379034;
        }
    }
    ctx->pc = 0x379028u;
    // 0x379028: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x379028u;
    SET_GPR_U32(ctx, 31, 0x379030u);
    ctx->pc = 0x37902Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379028u;
            // 0x37902c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379030u; }
        if (ctx->pc != 0x379030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379030u; }
        if (ctx->pc != 0x379030u) { return; }
    }
    ctx->pc = 0x379030u;
label_379030:
    // 0x379030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x379030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379034:
    // 0x379034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x379034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37903c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37903cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379040: 0x3e00008  jr          $ra
    ctx->pc = 0x379040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379040u;
            // 0x379044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379048u;
    // 0x379048: 0x0  nop
    ctx->pc = 0x379048u;
    // NOP
    // 0x37904c: 0x0  nop
    ctx->pc = 0x37904cu;
    // NOP
}
