#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE7A0
// Address: 0x2de7a0 - 0x2de9a0
void sub_002DE7A0_0x2de7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7A0_0x2de7a0");
#endif

    ctx->pc = 0x2de7a0u;

    // 0x2de7a0: 0x908305a8  lbu         $v1, 0x5A8($a0)
    ctx->pc = 0x2de7a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1448)));
    // 0x2de7a4: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DE7A4u;
    {
        const bool branch_taken_0x2de7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de7a4) {
            ctx->pc = 0x2DE7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7A4u;
            // 0x2de7a8: 0x8c830628  lw          $v1, 0x628($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1576)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE858u;
            goto label_2de858;
        }
    }
    ctx->pc = 0x2DE7ACu;
    // 0x2de7ac: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2de7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de7b4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2de7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de7b8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2de7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de7bc: 0xe48205e8  swc1        $f2, 0x5E8($a0)
    ctx->pc = 0x2de7bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1512), bits); }
    // 0x2de7c0: 0xe48105ec  swc1        $f1, 0x5EC($a0)
    ctx->pc = 0x2de7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1516), bits); }
    // 0x2de7c4: 0xe48005f0  swc1        $f0, 0x5F0($a0)
    ctx->pc = 0x2de7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1520), bits); }
    // 0x2de7c8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2de7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de7cc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2de7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de7d0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2de7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de7d4: 0xe48205f4  swc1        $f2, 0x5F4($a0)
    ctx->pc = 0x2de7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1524), bits); }
    // 0x2de7d8: 0xe48105f8  swc1        $f1, 0x5F8($a0)
    ctx->pc = 0x2de7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1528), bits); }
    // 0x2de7dc: 0xe48005fc  swc1        $f0, 0x5FC($a0)
    ctx->pc = 0x2de7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1532), bits); }
    // 0x2de7e0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2de7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de7e4: 0xe4800600  swc1        $f0, 0x600($a0)
    ctx->pc = 0x2de7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1536), bits); }
    // 0x2de7e8: 0x80a7001c  lb          $a3, 0x1C($a1)
    ctx->pc = 0x2de7e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2de7ec: 0xa0870604  sb          $a3, 0x604($a0)
    ctx->pc = 0x2de7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1540), (uint8_t)GPR_U32(ctx, 7));
    // 0x2de7f0: 0x80a7001d  lb          $a3, 0x1D($a1)
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
    // 0x2de7f4: 0xa0870605  sb          $a3, 0x605($a0)
    ctx->pc = 0x2de7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1541), (uint8_t)GPR_U32(ctx, 7));
    // 0x2de7f8: 0x80a7001e  lb          $a3, 0x1E($a1)
    ctx->pc = 0x2de7f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x2de7fc: 0xa0870606  sb          $a3, 0x606($a0)
    ctx->pc = 0x2de7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1542), (uint8_t)GPR_U32(ctx, 7));
    // 0x2de800: 0x80a7001f  lb          $a3, 0x1F($a1)
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
    // 0x2de804: 0xa0870607  sb          $a3, 0x607($a0)
    ctx->pc = 0x2de804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1543), (uint8_t)GPR_U32(ctx, 7));
    // 0x2de808: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x2de808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2de80c: 0xac870608  sw          $a3, 0x608($a0)
    ctx->pc = 0x2de80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 7));
    // 0x2de810: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2de810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de814: 0xe480060c  swc1        $f0, 0x60C($a0)
    ctx->pc = 0x2de814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1548), bits); }
    // 0x2de818: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2de818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de81c: 0xe4800610  swc1        $f0, 0x610($a0)
    ctx->pc = 0x2de81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1552), bits); }
    // 0x2de820: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2de820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de824: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x2de824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x2de828: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2de828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de82c: 0xe4800618  swc1        $f0, 0x618($a0)
    ctx->pc = 0x2de82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1560), bits); }
    // 0x2de830: 0x8ca70034  lw          $a3, 0x34($a1)
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2de834: 0xac87061c  sw          $a3, 0x61C($a0)
    ctx->pc = 0x2de834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1564), GPR_U32(ctx, 7));
    // 0x2de838: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x2de838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2de83c: 0xac850620  sw          $a1, 0x620($a0)
    ctx->pc = 0x2de83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 5));
    // 0x2de840: 0xac860628  sw          $a2, 0x628($a0)
    ctx->pc = 0x2de840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 6));
    // 0x2de844: 0xa08305a8  sb          $v1, 0x5A8($a0)
    ctx->pc = 0x2de844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1448), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de848: 0xac800658  sw          $zero, 0x658($a0)
    ctx->pc = 0x2de848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1624), GPR_U32(ctx, 0));
    // 0x2de84c: 0xac80065c  sw          $zero, 0x65C($a0)
    ctx->pc = 0x2de84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1628), GPR_U32(ctx, 0));
    // 0x2de850: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2DE850u;
    {
        const bool branch_taken_0x2de850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE850u;
            // 0x2de854: 0xac800654  sw          $zero, 0x654($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de850) {
            ctx->pc = 0x2DE998u;
            goto label_2de998;
        }
    }
    ctx->pc = 0x2DE858u;
label_2de858:
    // 0x2de858: 0x10c3004f  beq         $a2, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2DE858u;
    {
        const bool branch_taken_0x2de858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de858) {
            ctx->pc = 0x2DE998u;
            goto label_2de998;
        }
    }
    ctx->pc = 0x2DE860u;
    // 0x2de860: 0xc48205e8  lwc1        $f2, 0x5E8($a0)
    ctx->pc = 0x2de860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de864: 0xc48105ec  lwc1        $f1, 0x5EC($a0)
    ctx->pc = 0x2de864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de868: 0xc48005f0  lwc1        $f0, 0x5F0($a0)
    ctx->pc = 0x2de868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de86c: 0xe48205ac  swc1        $f2, 0x5AC($a0)
    ctx->pc = 0x2de86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1452), bits); }
    // 0x2de870: 0xe48105b0  swc1        $f1, 0x5B0($a0)
    ctx->pc = 0x2de870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1456), bits); }
    // 0x2de874: 0xe48005b4  swc1        $f0, 0x5B4($a0)
    ctx->pc = 0x2de874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1460), bits); }
    // 0x2de878: 0xc48205f4  lwc1        $f2, 0x5F4($a0)
    ctx->pc = 0x2de878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de87c: 0xc48105f8  lwc1        $f1, 0x5F8($a0)
    ctx->pc = 0x2de87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de880: 0xc48005fc  lwc1        $f0, 0x5FC($a0)
    ctx->pc = 0x2de880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de884: 0xe48205b8  swc1        $f2, 0x5B8($a0)
    ctx->pc = 0x2de884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
    // 0x2de888: 0xe48105bc  swc1        $f1, 0x5BC($a0)
    ctx->pc = 0x2de888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1468), bits); }
    // 0x2de88c: 0xe48005c0  swc1        $f0, 0x5C0($a0)
    ctx->pc = 0x2de88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1472), bits); }
    // 0x2de890: 0xc4800600  lwc1        $f0, 0x600($a0)
    ctx->pc = 0x2de890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de894: 0xe48005c4  swc1        $f0, 0x5C4($a0)
    ctx->pc = 0x2de894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1476), bits); }
    // 0x2de898: 0x80830604  lb          $v1, 0x604($a0)
    ctx->pc = 0x2de898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x2de89c: 0xa08305c8  sb          $v1, 0x5C8($a0)
    ctx->pc = 0x2de89cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1480), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de8a0: 0x80830605  lb          $v1, 0x605($a0)
    ctx->pc = 0x2de8a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1541)));
    // 0x2de8a4: 0xa08305c9  sb          $v1, 0x5C9($a0)
    ctx->pc = 0x2de8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1481), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de8a8: 0x80830606  lb          $v1, 0x606($a0)
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1542)));
    // 0x2de8ac: 0xa08305ca  sb          $v1, 0x5CA($a0)
    ctx->pc = 0x2de8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1482), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de8b0: 0x80830607  lb          $v1, 0x607($a0)
    ctx->pc = 0x2de8b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1543)));
    // 0x2de8b4: 0xa08305cb  sb          $v1, 0x5CB($a0)
    ctx->pc = 0x2de8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1483), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de8b8: 0x8c830608  lw          $v1, 0x608($a0)
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1544)));
    // 0x2de8bc: 0xac8305cc  sw          $v1, 0x5CC($a0)
    ctx->pc = 0x2de8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1484), GPR_U32(ctx, 3));
    // 0x2de8c0: 0xc480060c  lwc1        $f0, 0x60C($a0)
    ctx->pc = 0x2de8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8c4: 0xe48005d0  swc1        $f0, 0x5D0($a0)
    ctx->pc = 0x2de8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1488), bits); }
    // 0x2de8c8: 0xc4800610  lwc1        $f0, 0x610($a0)
    ctx->pc = 0x2de8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8cc: 0xe48005d4  swc1        $f0, 0x5D4($a0)
    ctx->pc = 0x2de8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1492), bits); }
    // 0x2de8d0: 0xc4800614  lwc1        $f0, 0x614($a0)
    ctx->pc = 0x2de8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8d4: 0xe48005d8  swc1        $f0, 0x5D8($a0)
    ctx->pc = 0x2de8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1496), bits); }
    // 0x2de8d8: 0xc4800618  lwc1        $f0, 0x618($a0)
    ctx->pc = 0x2de8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8dc: 0xe48005dc  swc1        $f0, 0x5DC($a0)
    ctx->pc = 0x2de8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1500), bits); }
    // 0x2de8e0: 0x8c83061c  lw          $v1, 0x61C($a0)
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1564)));
    // 0x2de8e4: 0xac8305e0  sw          $v1, 0x5E0($a0)
    ctx->pc = 0x2de8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 3));
    // 0x2de8e8: 0x8c830620  lw          $v1, 0x620($a0)
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1568)));
    // 0x2de8ec: 0xac8305e4  sw          $v1, 0x5E4($a0)
    ctx->pc = 0x2de8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1508), GPR_U32(ctx, 3));
    // 0x2de8f0: 0x8c830628  lw          $v1, 0x628($a0)
    ctx->pc = 0x2de8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1576)));
    // 0x2de8f4: 0xac830624  sw          $v1, 0x624($a0)
    ctx->pc = 0x2de8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1572), GPR_U32(ctx, 3));
    // 0x2de8f8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2de8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de8fc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2de8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de900: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2de900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de904: 0xe48205e8  swc1        $f2, 0x5E8($a0)
    ctx->pc = 0x2de904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1512), bits); }
    // 0x2de908: 0xe48105ec  swc1        $f1, 0x5EC($a0)
    ctx->pc = 0x2de908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1516), bits); }
    // 0x2de90c: 0xe48005f0  swc1        $f0, 0x5F0($a0)
    ctx->pc = 0x2de90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1520), bits); }
    // 0x2de910: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x2de910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de914: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2de914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de918: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2de918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de91c: 0xe48205f4  swc1        $f2, 0x5F4($a0)
    ctx->pc = 0x2de91cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1524), bits); }
    // 0x2de920: 0xe48105f8  swc1        $f1, 0x5F8($a0)
    ctx->pc = 0x2de920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1528), bits); }
    // 0x2de924: 0xe48005fc  swc1        $f0, 0x5FC($a0)
    ctx->pc = 0x2de924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1532), bits); }
    // 0x2de928: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2de928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de92c: 0xe4800600  swc1        $f0, 0x600($a0)
    ctx->pc = 0x2de92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1536), bits); }
    // 0x2de930: 0x80a3001c  lb          $v1, 0x1C($a1)
    ctx->pc = 0x2de930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2de934: 0xa0830604  sb          $v1, 0x604($a0)
    ctx->pc = 0x2de934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1540), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de938: 0x80a3001d  lb          $v1, 0x1D($a1)
    ctx->pc = 0x2de938u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
    // 0x2de93c: 0xa0830605  sb          $v1, 0x605($a0)
    ctx->pc = 0x2de93cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1541), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de940: 0x80a3001e  lb          $v1, 0x1E($a1)
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x2de944: 0xa0830606  sb          $v1, 0x606($a0)
    ctx->pc = 0x2de944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1542), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de948: 0x80a3001f  lb          $v1, 0x1F($a1)
    ctx->pc = 0x2de948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
    // 0x2de94c: 0xa0830607  sb          $v1, 0x607($a0)
    ctx->pc = 0x2de94cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1543), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de950: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2de950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2de954: 0xac830608  sw          $v1, 0x608($a0)
    ctx->pc = 0x2de954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 3));
    // 0x2de958: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2de958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de95c: 0xe480060c  swc1        $f0, 0x60C($a0)
    ctx->pc = 0x2de95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1548), bits); }
    // 0x2de960: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2de960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de964: 0xe4800610  swc1        $f0, 0x610($a0)
    ctx->pc = 0x2de964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1552), bits); }
    // 0x2de968: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2de968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de96c: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x2de96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x2de970: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2de970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de974: 0xe4800618  swc1        $f0, 0x618($a0)
    ctx->pc = 0x2de974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1560), bits); }
    // 0x2de978: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2de978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2de97c: 0xac83061c  sw          $v1, 0x61C($a0)
    ctx->pc = 0x2de97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1564), GPR_U32(ctx, 3));
    // 0x2de980: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x2de980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2de984: 0xac830620  sw          $v1, 0x620($a0)
    ctx->pc = 0x2de984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 3));
    // 0x2de988: 0xac860628  sw          $a2, 0x628($a0)
    ctx->pc = 0x2de988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 6));
    // 0x2de98c: 0xac800658  sw          $zero, 0x658($a0)
    ctx->pc = 0x2de98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1624), GPR_U32(ctx, 0));
    // 0x2de990: 0xac80065c  sw          $zero, 0x65C($a0)
    ctx->pc = 0x2de990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1628), GPR_U32(ctx, 0));
    // 0x2de994: 0xac800654  sw          $zero, 0x654($a0)
    ctx->pc = 0x2de994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1620), GPR_U32(ctx, 0));
label_2de998:
    // 0x2de998: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE9A0u;
}
