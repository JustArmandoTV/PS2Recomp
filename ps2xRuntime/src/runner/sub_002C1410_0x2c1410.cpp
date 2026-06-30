#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1410
// Address: 0x2c1410 - 0x2c1520
void sub_002C1410_0x2c1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1410_0x2c1410");
#endif

    switch (ctx->pc) {
        case 0x2c1470u: goto label_2c1470;
        case 0x2c1478u: goto label_2c1478;
        default: break;
    }

    ctx->pc = 0x2c1410u;

    // 0x2c1410: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x2C1410u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C1418u;
    // 0x2c1418: 0x0  nop
    ctx->pc = 0x2c1418u;
    // NOP
    // 0x2c141c: 0x0  nop
    ctx->pc = 0x2c141cu;
    // NOP
    // 0x2c1420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1424: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c1428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c142c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c142cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1434: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c1438: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c143c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c143cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c1440: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c1444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1448: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c1448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c144c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c144cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1450: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c1450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c1454: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c1454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c1458: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c1458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c145c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c145cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c1460: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c1460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1464: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c1464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c1468: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C1468u;
    SET_GPR_U32(ctx, 31, 0x2C1470u);
    ctx->pc = 0x2C146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1468u;
            // 0x2c146c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1470u; }
        if (ctx->pc != 0x2C1470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1470u; }
        if (ctx->pc != 0x2C1470u) { return; }
    }
    ctx->pc = 0x2C1470u;
label_2c1470:
    // 0x2c1470: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C1470u;
    SET_GPR_U32(ctx, 31, 0x2C1478u);
    ctx->pc = 0x2C1474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1470u;
            // 0x2c1474: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1478u; }
        if (ctx->pc != 0x2C1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1478u; }
        if (ctx->pc != 0x2C1478u) { return; }
    }
    ctx->pc = 0x2C1478u;
label_2c1478:
    // 0x2c1478: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c1478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c147c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2c147cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2c1480: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c1484: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c1484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2c1488: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2c148c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2c148cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2c1490: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c1490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2c1494: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c1494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c1498: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2c149c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2c149cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x2c14a0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x2c14a4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x2c14a8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2c14a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x2c14ac: 0x2484a470  addiu       $a0, $a0, -0x5B90
    ctx->pc = 0x2c14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943856));
    // 0x2c14b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2c14b4: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x2c14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
    // 0x2c14b8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2c14b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c14bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c14bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14c0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2c14c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x2c14c4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2c14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2c14c8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2c14cc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2c14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2c14d0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2c14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2c14d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2c14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2c14d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2c14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2c14dc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c14dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2c14e0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2c14e4: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x2c14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x2c14e8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2c14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2c14ec: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2c14ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2c14f0: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2c14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2c14f4: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2c14f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x2c14f8: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2c14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x2c14fc: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2c14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x2c1500: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2c1500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2c1504: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2c1504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2c1508: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2c1508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x2c150c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2c150cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2c1510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c1510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1518: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1518u;
            // 0x2c151c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1520u;
}
