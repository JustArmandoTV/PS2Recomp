#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D100
// Address: 0x34d100 - 0x34d650
void sub_0034D100_0x34d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D100_0x34d100");
#endif

    switch (ctx->pc) {
        case 0x34d14cu: goto label_34d14c;
        case 0x34d4c8u: goto label_34d4c8;
        case 0x34d4e0u: goto label_34d4e0;
        case 0x34d4f8u: goto label_34d4f8;
        case 0x34d508u: goto label_34d508;
        case 0x34d550u: goto label_34d550;
        case 0x34d574u: goto label_34d574;
        case 0x34d580u: goto label_34d580;
        case 0x34d594u: goto label_34d594;
        case 0x34d620u: goto label_34d620;
        case 0x34d63cu: goto label_34d63c;
        default: break;
    }

    ctx->pc = 0x34d100u;

    // 0x34d100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x34d104: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34d104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d10c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x34d110: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34d110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34d114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d118: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34d118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d11c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34d11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d124: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34d124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34d128: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x34d12c: 0xc4421640  lwc1        $f2, 0x1640($v0)
    ctx->pc = 0x34d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d130: 0xc4611644  lwc1        $f1, 0x1644($v1)
    ctx->pc = 0x34d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d134: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34d134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x34d138: 0xc4401648  lwc1        $f0, 0x1648($v0)
    ctx->pc = 0x34d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d13c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x34d13cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34d140: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x34d140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x34d144: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x34D144u;
    SET_GPR_U32(ctx, 31, 0x34D14Cu);
    ctx->pc = 0x34D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D144u;
            // 0x34d148: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (runtime->hasFunction(0x13E730u)) {
        auto targetFn = runtime->lookupFunction(0x13E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D14Cu; }
        if (ctx->pc != 0x34D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E730_0x13e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D14Cu; }
        if (ctx->pc != 0x34D14Cu) { return; }
    }
    ctx->pc = 0x34D14Cu;
label_34d14c:
    // 0x34d14c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d150: 0x24020c3f  addiu       $v0, $zero, 0xC3F
    ctx->pc = 0x34d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3135));
    // 0x34d154: 0x106200b4  beq         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x34D154u;
    {
        const bool branch_taken_0x34d154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34d154) {
            ctx->pc = 0x34D428u;
            goto label_34d428;
        }
    }
    ctx->pc = 0x34D15Cu;
    // 0x34d15c: 0x2402027f  addiu       $v0, $zero, 0x27F
    ctx->pc = 0x34d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x34d160: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x34D160u;
    {
        const bool branch_taken_0x34d160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34d160) {
            ctx->pc = 0x34D348u;
            goto label_34d348;
        }
    }
    ctx->pc = 0x34D168u;
    // 0x34d168: 0x2402017f  addiu       $v0, $zero, 0x17F
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x34d16c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x34D16Cu;
    {
        const bool branch_taken_0x34d16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34d16c) {
            ctx->pc = 0x34D268u;
            goto label_34d268;
        }
    }
    ctx->pc = 0x34D174u;
    // 0x34d174: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d178: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D178u;
    {
        const bool branch_taken_0x34d178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34d178) {
            ctx->pc = 0x34D188u;
            goto label_34d188;
        }
    }
    ctx->pc = 0x34D180u;
    // 0x34d180: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x34D180u;
    {
        const bool branch_taken_0x34d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d180) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D188u;
label_34d188:
    // 0x34d188: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d18c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34d190: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d194: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x34d194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x34d198: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x34d198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x34d19c: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x34d19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x34d1a0: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x34d1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34d1a4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x34d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x34d1a8: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x34d1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34d1ac: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x34d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x34d1b0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x34d1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34d1b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d1b8: 0xad2a0194  sw          $t2, 0x194($t1)
    ctx->pc = 0x34d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 10));
    // 0x34d1bc: 0x8d08d120  lw          $t0, -0x2EE0($t0)
    ctx->pc = 0x34d1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955296)));
    // 0x34d1c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x34d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1c4: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x34d1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x34d1c8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x34d1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34d1cc: 0xe5000198  swc1        $f0, 0x198($t0)
    ctx->pc = 0x34d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 408), bits); }
    // 0x34d1d0: 0x8ce7d120  lw          $a3, -0x2EE0($a3)
    ctx->pc = 0x34d1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955296)));
    // 0x34d1d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1d8: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x34d1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x34d1dc: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x34d1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34d1e0: 0xe4e0019c  swc1        $f0, 0x19C($a3)
    ctx->pc = 0x34d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 412), bits); }
    // 0x34d1e4: 0x8cc6d120  lw          $a2, -0x2EE0($a2)
    ctx->pc = 0x34d1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955296)));
    // 0x34d1e8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1ec: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x34d1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34d1f0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x34d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34d1f4: 0xe4c001a0  swc1        $f0, 0x1A0($a2)
    ctx->pc = 0x34d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 416), bits); }
    // 0x34d1f8: 0x8ca5d120  lw          $a1, -0x2EE0($a1)
    ctx->pc = 0x34d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955296)));
    // 0x34d1fc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34d1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d200: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x34d200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34d204: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x34d204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d208: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x34d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x34d20c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d210: 0xe4a001a8  swc1        $f0, 0x1A8($a1)
    ctx->pc = 0x34d210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 424), bits); }
    // 0x34d214: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d218: 0xe4a001ac  swc1        $f0, 0x1AC($a1)
    ctx->pc = 0x34d218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 428), bits); }
    // 0x34d21c: 0x8c84d120  lw          $a0, -0x2EE0($a0)
    ctx->pc = 0x34d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
    // 0x34d220: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x34d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d224: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d228: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34d228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d22c: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x34d22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x34d230: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x34d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d234: 0xe48001b4  swc1        $f0, 0x1B4($a0)
    ctx->pc = 0x34d234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x34d238: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x34d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d23c: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x34d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x34d240: 0x8c62d120  lw          $v0, -0x2EE0($v1)
    ctx->pc = 0x34d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d244: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d248: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d24c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d250: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x34d250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
    // 0x34d254: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x34d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d258: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x34d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x34d25c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x34d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d260: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x34D260u;
    {
        const bool branch_taken_0x34d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D260u;
            // 0x34d264: 0xe44001c4  swc1        $f0, 0x1C4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d260) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D268u;
label_34d268:
    // 0x34d268: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d26c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34d270: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d274: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x34d274u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x34d278: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x34d278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x34d27c: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x34d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x34d280: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x34d280u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34d284: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x34d284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x34d288: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x34d288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34d28c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x34d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x34d290: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x34d290u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34d294: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d298: 0xad2a0194  sw          $t2, 0x194($t1)
    ctx->pc = 0x34d298u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 10));
    // 0x34d29c: 0x8d08d120  lw          $t0, -0x2EE0($t0)
    ctx->pc = 0x34d29cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955296)));
    // 0x34d2a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x34d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2a4: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x34d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x34d2a8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x34d2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34d2ac: 0xe5000198  swc1        $f0, 0x198($t0)
    ctx->pc = 0x34d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 408), bits); }
    // 0x34d2b0: 0x8ce7d120  lw          $a3, -0x2EE0($a3)
    ctx->pc = 0x34d2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955296)));
    // 0x34d2b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2b8: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x34d2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x34d2bc: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x34d2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34d2c0: 0xe4e0019c  swc1        $f0, 0x19C($a3)
    ctx->pc = 0x34d2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 412), bits); }
    // 0x34d2c4: 0x8cc6d120  lw          $a2, -0x2EE0($a2)
    ctx->pc = 0x34d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955296)));
    // 0x34d2c8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2cc: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x34d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34d2d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x34d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34d2d4: 0xe4c001a0  swc1        $f0, 0x1A0($a2)
    ctx->pc = 0x34d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 416), bits); }
    // 0x34d2d8: 0x8ca5d120  lw          $a1, -0x2EE0($a1)
    ctx->pc = 0x34d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955296)));
    // 0x34d2dc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2e0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x34d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34d2e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x34d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d2e8: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x34d2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x34d2ec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2f0: 0xe4a001a8  swc1        $f0, 0x1A8($a1)
    ctx->pc = 0x34d2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 424), bits); }
    // 0x34d2f4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2f8: 0xe4a001ac  swc1        $f0, 0x1AC($a1)
    ctx->pc = 0x34d2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 428), bits); }
    // 0x34d2fc: 0x8c84d120  lw          $a0, -0x2EE0($a0)
    ctx->pc = 0x34d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
    // 0x34d300: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x34d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d304: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d308: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d30c: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x34d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x34d310: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x34d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d314: 0xe48001b4  swc1        $f0, 0x1B4($a0)
    ctx->pc = 0x34d314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x34d318: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x34d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d31c: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x34d31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x34d320: 0x8c62d120  lw          $v0, -0x2EE0($v1)
    ctx->pc = 0x34d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d324: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d328: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d32c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d330: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x34d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
    // 0x34d334: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x34d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d338: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x34d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x34d33c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x34d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d340: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x34D340u;
    {
        const bool branch_taken_0x34d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D340u;
            // 0x34d344: 0xe44001c4  swc1        $f0, 0x1C4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d340) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D348u;
label_34d348:
    // 0x34d348: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d34c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34d350: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d354: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x34d354u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x34d358: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x34d358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x34d35c: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x34d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x34d360: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x34d360u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34d364: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x34d364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x34d368: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x34d368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34d36c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x34d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x34d370: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x34d370u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34d374: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d378: 0xad2a0194  sw          $t2, 0x194($t1)
    ctx->pc = 0x34d378u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 10));
    // 0x34d37c: 0x8d08d120  lw          $t0, -0x2EE0($t0)
    ctx->pc = 0x34d37cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955296)));
    // 0x34d380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x34d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d384: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x34d384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x34d388: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x34d388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34d38c: 0xe5000198  swc1        $f0, 0x198($t0)
    ctx->pc = 0x34d38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 408), bits); }
    // 0x34d390: 0x8ce7d120  lw          $a3, -0x2EE0($a3)
    ctx->pc = 0x34d390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955296)));
    // 0x34d394: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d398: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x34d398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x34d39c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x34d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34d3a0: 0xe4e0019c  swc1        $f0, 0x19C($a3)
    ctx->pc = 0x34d3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 412), bits); }
    // 0x34d3a4: 0x8cc6d120  lw          $a2, -0x2EE0($a2)
    ctx->pc = 0x34d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955296)));
    // 0x34d3a8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3ac: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x34d3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34d3b0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x34d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34d3b4: 0xe4c001a0  swc1        $f0, 0x1A0($a2)
    ctx->pc = 0x34d3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 416), bits); }
    // 0x34d3b8: 0x8ca5d120  lw          $a1, -0x2EE0($a1)
    ctx->pc = 0x34d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955296)));
    // 0x34d3bc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3c0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x34d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34d3c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x34d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d3c8: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x34d3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x34d3cc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3d0: 0xe4a001a8  swc1        $f0, 0x1A8($a1)
    ctx->pc = 0x34d3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 424), bits); }
    // 0x34d3d4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3d8: 0xe4a001ac  swc1        $f0, 0x1AC($a1)
    ctx->pc = 0x34d3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 428), bits); }
    // 0x34d3dc: 0x8c84d120  lw          $a0, -0x2EE0($a0)
    ctx->pc = 0x34d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
    // 0x34d3e0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x34d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3e4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d3e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d3ec: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x34d3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x34d3f0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x34d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3f4: 0xe48001b4  swc1        $f0, 0x1B4($a0)
    ctx->pc = 0x34d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x34d3f8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x34d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3fc: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x34d3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x34d400: 0x8c62d120  lw          $v0, -0x2EE0($v1)
    ctx->pc = 0x34d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d404: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d408: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d40c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d410: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x34d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
    // 0x34d414: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x34d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d418: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x34d418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x34d41c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x34d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d420: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x34D420u;
    {
        const bool branch_taken_0x34d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D420u;
            // 0x34d424: 0xe44001c4  swc1        $f0, 0x1C4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d420) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D428u;
label_34d428:
    // 0x34d428: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d42c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x34d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34d430: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x34d430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d434: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x34d434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x34d438: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d43c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x34d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34d440: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34d444: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x34d444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34d448: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d44c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x34d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34d450: 0xacc70194  sw          $a3, 0x194($a2)
    ctx->pc = 0x34d450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 7));
    // 0x34d454: 0x8c84d120  lw          $a0, -0x2EE0($a0)
    ctx->pc = 0x34d454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
    // 0x34d458: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x34d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d45c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d460: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d464: 0xe4800198  swc1        $f0, 0x198($a0)
    ctx->pc = 0x34d464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x34d468: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d46c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x34d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d470: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x34d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34d474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d478: 0xe460019c  swc1        $f0, 0x19C($v1)
    ctx->pc = 0x34d478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 412), bits); }
    // 0x34d47c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x34d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d480: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x34d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d484: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d48c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x34d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x34d490: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x34d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34d494: 0x50650014  beql        $v1, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34D494u;
    {
        const bool branch_taken_0x34d494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x34d494) {
            ctx->pc = 0x34D498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D494u;
            // 0x34d498: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D4E8u;
            goto label_34d4e8;
        }
    }
    ctx->pc = 0x34D49Cu;
    // 0x34d49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d4a0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34D4A0u;
    {
        const bool branch_taken_0x34d4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34d4a0) {
            ctx->pc = 0x34D4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4A0u;
            // 0x34d4a4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D4D0u;
            goto label_34d4d0;
        }
    }
    ctx->pc = 0x34D4A8u;
    // 0x34d4a8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D4A8u;
    {
        const bool branch_taken_0x34d4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d4a8) {
            ctx->pc = 0x34D4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4A8u;
            // 0x34d4ac: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D4B8u;
            goto label_34d4b8;
        }
    }
    ctx->pc = 0x34D4B0u;
    // 0x34d4b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34D4B0u;
    {
        const bool branch_taken_0x34d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4B0u;
            // 0x34d4b4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4b0) {
            ctx->pc = 0x34D4FCu;
            goto label_34d4fc;
        }
    }
    ctx->pc = 0x34D4B8u;
label_34d4b8:
    // 0x34d4b8: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x34d4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x34d4bc: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x34d4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x34d4c0: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x34D4C0u;
    SET_GPR_U32(ctx, 31, 0x34D4C8u);
    ctx->pc = 0x34D4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4C0u;
            // 0x34d4c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4C8u; }
        if (ctx->pc != 0x34D4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4C8u; }
        if (ctx->pc != 0x34D4C8u) { return; }
    }
    ctx->pc = 0x34D4C8u;
label_34d4c8:
    // 0x34d4c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34D4C8u;
    {
        const bool branch_taken_0x34d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d4c8) {
            ctx->pc = 0x34D4F8u;
            goto label_34d4f8;
        }
    }
    ctx->pc = 0x34D4D0u;
label_34d4d0:
    // 0x34d4d0: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x34d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x34d4d4: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x34d4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x34d4d8: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x34D4D8u;
    SET_GPR_U32(ctx, 31, 0x34D4E0u);
    ctx->pc = 0x34D4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4D8u;
            // 0x34d4dc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4E0u; }
        if (ctx->pc != 0x34D4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4E0u; }
        if (ctx->pc != 0x34D4E0u) { return; }
    }
    ctx->pc = 0x34D4E0u;
label_34d4e0:
    // 0x34d4e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34D4E0u;
    {
        const bool branch_taken_0x34d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d4e0) {
            ctx->pc = 0x34D4F8u;
            goto label_34d4f8;
        }
    }
    ctx->pc = 0x34D4E8u;
label_34d4e8:
    // 0x34d4e8: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x34d4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x34d4ec: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x34d4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x34d4f0: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x34D4F0u;
    SET_GPR_U32(ctx, 31, 0x34D4F8u);
    ctx->pc = 0x34D4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4F0u;
            // 0x34d4f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4F8u; }
        if (ctx->pc != 0x34D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4F8u; }
        if (ctx->pc != 0x34D4F8u) { return; }
    }
    ctx->pc = 0x34D4F8u;
label_34d4f8:
    // 0x34d4f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_34d4fc:
    // 0x34d4fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d500: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x34D500u;
    SET_GPR_U32(ctx, 31, 0x34D508u);
    ctx->pc = 0x34D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D500u;
            // 0x34d504: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D508u; }
        if (ctx->pc != 0x34D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D508u; }
        if (ctx->pc != 0x34D508u) { return; }
    }
    ctx->pc = 0x34D508u;
label_34d508:
    // 0x34d508: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d50c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d510: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x34d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d514: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d51c: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x34d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d520: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x34d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d524: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34d524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d528: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x34d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x34d52c: 0xc44101b4  lwc1        $f1, 0x1B4($v0)
    ctx->pc = 0x34d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d530: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x34d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d534: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34d534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d538: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x34d538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x34d53c: 0xc44101b8  lwc1        $f1, 0x1B8($v0)
    ctx->pc = 0x34d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d540: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x34d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d544: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34d544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d548: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x34D548u;
    SET_GPR_U32(ctx, 31, 0x34D550u);
    ctx->pc = 0x34D54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D548u;
            // 0x34d54c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D550u; }
        if (ctx->pc != 0x34D550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D550u; }
        if (ctx->pc != 0x34D550u) { return; }
    }
    ctx->pc = 0x34D550u;
label_34d550:
    // 0x34d550: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x34d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x34d554: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d558: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34d558u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x34d55c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x34d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x34d560: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d564: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34d564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d568: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x34d568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x34d56c: 0xc04cbbc  jal         func_132EF0
    ctx->pc = 0x34D56Cu;
    SET_GPR_U32(ctx, 31, 0x34D574u);
    ctx->pc = 0x34D570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D56Cu;
            // 0x34d570: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D574u; }
        if (ctx->pc != 0x34D574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D574u; }
        if (ctx->pc != 0x34D574u) { return; }
    }
    ctx->pc = 0x34D574u;
label_34d574:
    // 0x34d574: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34d574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d578: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x34D578u;
    SET_GPR_U32(ctx, 31, 0x34D580u);
    ctx->pc = 0x34D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D578u;
            // 0x34d57c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D580u; }
        if (ctx->pc != 0x34D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D580u; }
        if (ctx->pc != 0x34D580u) { return; }
    }
    ctx->pc = 0x34D580u;
label_34d580:
    // 0x34d580: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34d580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d584: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x34d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x34d588: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34d588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34d58c: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x34D58Cu;
    SET_GPR_U32(ctx, 31, 0x34D594u);
    ctx->pc = 0x34D590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D58Cu;
            // 0x34d590: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D594u; }
        if (ctx->pc != 0x34D594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D594u; }
        if (ctx->pc != 0x34D594u) { return; }
    }
    ctx->pc = 0x34D594u;
label_34d594:
    // 0x34d594: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d598: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34d598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34d59c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x34d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d5a0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x34d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5a4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d5a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d5ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d5b0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x34d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x34d5b4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x34d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5b8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x34d5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x34d5bc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x34d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5c0: 0xe48001ac  swc1        $f0, 0x1AC($a0)
    ctx->pc = 0x34d5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 428), bits); }
    // 0x34d5c4: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34d5c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5cc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x34d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34d5d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d5d4: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x34d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x34d5d8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x34d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5dc: 0xe46001b4  swc1        $f0, 0x1B4($v1)
    ctx->pc = 0x34d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 436), bits); }
    // 0x34d5e0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x34d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5e4: 0xe46001b8  swc1        $f0, 0x1B8($v1)
    ctx->pc = 0x34d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 440), bits); }
    // 0x34d5e8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x34d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d5ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d5f0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d5f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d5f8: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x34d5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
    // 0x34d5fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x34d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d600: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x34d600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x34d604: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x34d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d608: 0xe44001c4  swc1        $f0, 0x1C4($v0)
    ctx->pc = 0x34d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 452), bits); }
label_34d60c:
    // 0x34d60c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d610: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d614: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d618: 0xc0a9540  jal         func_2A5500
    ctx->pc = 0x34D618u;
    SET_GPR_U32(ctx, 31, 0x34D620u);
    ctx->pc = 0x34D61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D618u;
            // 0x34d61c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5500u;
    if (runtime->hasFunction(0x2A5500u)) {
        auto targetFn = runtime->lookupFunction(0x2A5500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D620u; }
        if (ctx->pc != 0x34D620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5500_0x2a5500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D620u; }
        if (ctx->pc != 0x34D620u) { return; }
    }
    ctx->pc = 0x34D620u;
label_34d620:
    // 0x34d620: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x34d624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d628: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x34d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x34d62c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d634: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x34D634u;
    SET_GPR_U32(ctx, 31, 0x34D63Cu);
    ctx->pc = 0x34D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D634u;
            // 0x34d638: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D63Cu; }
        if (ctx->pc != 0x34D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D63Cu; }
        if (ctx->pc != 0x34D63Cu) { return; }
    }
    ctx->pc = 0x34D63Cu;
label_34d63c:
    // 0x34d63c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d640: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34d644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d648: 0x3e00008  jr          $ra
    ctx->pc = 0x34D648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D648u;
            // 0x34d64c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D650u;
}
