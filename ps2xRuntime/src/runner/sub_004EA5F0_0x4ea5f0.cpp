#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EA5F0
// Address: 0x4ea5f0 - 0x4ea820
void sub_004EA5F0_0x4ea5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA5F0_0x4ea5f0");
#endif

    switch (ctx->pc) {
        case 0x4ea678u: goto label_4ea678;
        case 0x4ea6e4u: goto label_4ea6e4;
        case 0x4ea6f0u: goto label_4ea6f0;
        case 0x4ea728u: goto label_4ea728;
        case 0x4ea774u: goto label_4ea774;
        case 0x4ea7a4u: goto label_4ea7a4;
        case 0x4ea7c4u: goto label_4ea7c4;
        case 0x4ea7e0u: goto label_4ea7e0;
        default: break;
    }

    ctx->pc = 0x4ea5f0u;

    // 0x4ea5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ea5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ea5f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4ea5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4ea5f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ea5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ea5fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ea5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4ea600: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x4ea600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x4ea604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ea604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ea608: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ea608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4ea60c: 0x8c4b89f0  lw          $t3, -0x7610($v0)
    ctx->pc = 0x4ea60cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x4ea610: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x4ea610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ea614: 0x93a5002c  lbu         $a1, 0x2C($sp)
    ctx->pc = 0x4ea614u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4ea618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea61c: 0x93a6002d  lbu         $a2, 0x2D($sp)
    ctx->pc = 0x4ea61cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x4ea620: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ea620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ea624: 0x93a8002e  lbu         $t0, 0x2E($sp)
    ctx->pc = 0x4ea624u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x4ea628: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ea628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4ea62c: 0xa165003c  sb          $a1, 0x3C($t3)
    ctx->pc = 0x4ea62cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 60), (uint8_t)GPR_U32(ctx, 5));
    // 0x4ea630: 0x2604005e  addiu       $a0, $s0, 0x5E
    ctx->pc = 0x4ea630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 94));
    // 0x4ea634: 0xa166003d  sb          $a2, 0x3D($t3)
    ctx->pc = 0x4ea634u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 61), (uint8_t)GPR_U32(ctx, 6));
    // 0x4ea638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea63c: 0xa168003e  sb          $t0, 0x3E($t3)
    ctx->pc = 0x4ea63cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 62), (uint8_t)GPR_U32(ctx, 8));
    // 0x4ea640: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x4ea640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x4ea644: 0x93a8002f  lbu         $t0, 0x2F($sp)
    ctx->pc = 0x4ea644u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x4ea648: 0xa168003f  sb          $t0, 0x3F($t3)
    ctx->pc = 0x4ea648u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 63), (uint8_t)GPR_U32(ctx, 8));
    // 0x4ea64c: 0x9169003e  lbu         $t1, 0x3E($t3)
    ctx->pc = 0x4ea64cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 62)));
    // 0x4ea650: 0x9168003d  lbu         $t0, 0x3D($t3)
    ctx->pc = 0x4ea650u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 61)));
    // 0x4ea654: 0x916a003f  lbu         $t2, 0x3F($t3)
    ctx->pc = 0x4ea654u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 63)));
    // 0x4ea658: 0x94a38  dsll        $t1, $t1, 8
    ctx->pc = 0x4ea658u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 8);
    // 0x4ea65c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x4ea65cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x4ea660: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x4ea660u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4ea664: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x4ea664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x4ea668: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x4ea668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x4ea66c: 0xfc67ec90  sd          $a3, -0x1370($v1)
    ctx->pc = 0x4ea66cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 7));
    // 0x4ea670: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4EA670u;
    SET_GPR_U32(ctx, 31, 0x4EA678u);
    ctx->pc = 0x4EA674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA670u;
            // 0x4ea674: 0xfc47ee00  sd          $a3, -0x1200($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA678u; }
        if (ctx->pc != 0x4EA678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA678u; }
        if (ctx->pc != 0x4EA678u) { return; }
    }
    ctx->pc = 0x4EA678u;
label_4ea678:
    // 0x4ea678: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x4ea678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x4ea67c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x4ea67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x4ea680: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x4ea680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x4ea684: 0x26040168  addiu       $a0, $s0, 0x168
    ctx->pc = 0x4ea684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4ea688: 0x3c024378  lui         $v0, 0x4378
    ctx->pc = 0x4ea688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17272 << 16));
    // 0x4ea68c: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4ea68cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ea690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ea694: 0xa6030164  sh          $v1, 0x164($s0)
    ctx->pc = 0x4ea694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea698: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ea698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4ea69c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x4ea69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x4ea6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ea6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ea6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ea6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ea6a8: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x4ea6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x4ea6ac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4ea6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4ea6b0: 0x0  nop
    ctx->pc = 0x4ea6b0u;
    // NOP
    // 0x4ea6b4: 0xa6070166  sh          $a3, 0x166($s0)
    ctx->pc = 0x4ea6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ea6b8: 0xa2000197  sb          $zero, 0x197($s0)
    ctx->pc = 0x4ea6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 407), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6bc: 0xa2000199  sb          $zero, 0x199($s0)
    ctx->pc = 0x4ea6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6c0: 0xa200019a  sb          $zero, 0x19A($s0)
    ctx->pc = 0x4ea6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6c4: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x4ea6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x4ea6c8: 0xa2020198  sb          $v0, 0x198($s0)
    ctx->pc = 0x4ea6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ea6cc: 0xa200019d  sb          $zero, 0x19D($s0)
    ctx->pc = 0x4ea6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6d0: 0xa200019e  sb          $zero, 0x19E($s0)
    ctx->pc = 0x4ea6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6d4: 0xa2000196  sb          $zero, 0x196($s0)
    ctx->pc = 0x4ea6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea6d8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4ea6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x4ea6dc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4EA6DCu;
    SET_GPR_U32(ctx, 31, 0x4EA6E4u);
    ctx->pc = 0x4EA6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA6DCu;
            // 0x4ea6e0: 0xa2000195  sb          $zero, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA6E4u; }
        if (ctx->pc != 0x4EA6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA6E4u; }
        if (ctx->pc != 0x4EA6E4u) { return; }
    }
    ctx->pc = 0x4EA6E4u;
label_4ea6e4:
    // 0x4ea6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea6e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ea6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ea6ec: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x4ea6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_4ea6f0:
    // 0x4ea6f0: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x4ea6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4ea6f4: 0x80420168  lb          $v0, 0x168($v0)
    ctx->pc = 0x4ea6f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x4ea6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EA6F8u;
    {
        const bool branch_taken_0x4ea6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea6f8) {
            ctx->pc = 0x4EA708u;
            goto label_4ea708;
        }
    }
    ctx->pc = 0x4EA700u;
    // 0x4ea700: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4ea700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea704: 0x0  nop
    ctx->pc = 0x4ea704u;
    // NOP
label_4ea708:
    // 0x4ea708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4ea70c: 0x2ca20027  sltiu       $v0, $a1, 0x27
    ctx->pc = 0x4ea70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x4ea710: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4EA710u;
    {
        const bool branch_taken_0x4ea710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea710) {
            ctx->pc = 0x4EA714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA710u;
            // 0x4ea714: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea6f0;
        }
    }
    ctx->pc = 0x4EA718u;
    // 0x4ea718: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4ea718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x4ea71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ea720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea724: 0x248485a0  addiu       $a0, $a0, -0x7A60
    ctx->pc = 0x4ea724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935968));
label_4ea728:
    // 0x4ea728: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea728u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x4ea72c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4ea730: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4ea730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4ea734: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4ea738: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ea73c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4ea73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4ea740: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ea740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ea744: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4ea744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ea748: 0xa0600168  sb          $zero, 0x168($v1)
    ctx->pc = 0x4ea748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 360), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ea74c: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea74cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x4ea750: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4ea754: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ea758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ea758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ea75c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ea75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ea760: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4EA760u;
    {
        const bool branch_taken_0x4ea760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA760u;
            // 0x4ea764: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea760) {
            ctx->pc = 0x4EA728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea728;
        }
    }
    ctx->pc = 0x4EA768u;
    // 0x4ea768: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ea768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4ea76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ea76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea770: 0x24a58528  addiu       $a1, $a1, -0x7AD8
    ctx->pc = 0x4ea770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935848));
label_4ea774:
    // 0x4ea774: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4ea774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea778: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4ea778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4ea77c: 0x80a40001  lb          $a0, 0x1($a1)
    ctx->pc = 0x4ea77cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4ea780: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x4ea780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4ea784: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4ea784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ea788: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4ea788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4ea78c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4EA78Cu;
    {
        const bool branch_taken_0x4ea78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA78Cu;
            // 0x4ea790: 0xa0640168  sb          $a0, 0x168($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 360), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea78c) {
            ctx->pc = 0x4EA774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea774;
        }
    }
    ctx->pc = 0x4EA794u;
    // 0x4ea794: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4ea794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x4ea798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea79c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4EA79Cu;
    SET_GPR_U32(ctx, 31, 0x4EA7A4u);
    ctx->pc = 0x4EA7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA79Cu;
            // 0x4ea7a0: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA7A4u; }
        if (ctx->pc != 0x4EA7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA7A4u; }
        if (ctx->pc != 0x4EA7A4u) { return; }
    }
    ctx->pc = 0x4EA7A4u;
label_4ea7a4:
    // 0x4ea7a4: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x4ea7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x4ea7a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EA7A8u;
    {
        const bool branch_taken_0x4ea7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea7a8) {
            ctx->pc = 0x4EA7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA7A8u;
            // 0x4ea7ac: 0x92030196  lbu         $v1, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA7C8u;
            goto label_4ea7c8;
        }
    }
    ctx->pc = 0x4EA7B0u;
    // 0x4ea7b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ea7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ea7b4: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4ea7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x4ea7b8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4ea7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4ea7bc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4EA7BCu;
    SET_GPR_U32(ctx, 31, 0x4EA7C4u);
    ctx->pc = 0x4EA7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA7BCu;
            // 0x4ea7c0: 0x24450410  addiu       $a1, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA7C4u; }
        if (ctx->pc != 0x4EA7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA7C4u; }
        if (ctx->pc != 0x4EA7C4u) { return; }
    }
    ctx->pc = 0x4EA7C4u;
label_4ea7c4:
    // 0x4ea7c4: 0x92030196  lbu         $v1, 0x196($s0)
    ctx->pc = 0x4ea7c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea7c8:
    // 0x4ea7c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ea7cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4ea7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4ea7d0: 0x94630148  lhu         $v1, 0x148($v1)
    ctx->pc = 0x4ea7d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x4ea7d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4EA7D4u;
    {
        const bool branch_taken_0x4ea7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea7d4) {
            ctx->pc = 0x4EA800u;
            goto label_4ea800;
        }
    }
    ctx->pc = 0x4EA7DCu;
    // 0x4ea7dc: 0x92030196  lbu         $v1, 0x196($s0)
    ctx->pc = 0x4ea7dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea7e0:
    // 0x4ea7e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ea7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ea7e4: 0xa2030196  sb          $v1, 0x196($s0)
    ctx->pc = 0x4ea7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea7e8: 0x92030196  lbu         $v1, 0x196($s0)
    ctx->pc = 0x4ea7e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
    // 0x4ea7ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ea7f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4ea7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ea7f4: 0x94630148  lhu         $v1, 0x148($v1)
    ctx->pc = 0x4ea7f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x4ea7f8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4EA7F8u;
    {
        const bool branch_taken_0x4ea7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea7f8) {
            ctx->pc = 0x4EA7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA7F8u;
            // 0x4ea7fc: 0x92030196  lbu         $v1, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea7e0;
        }
    }
    ctx->pc = 0x4EA800u;
label_4ea800:
    // 0x4ea800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ea800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ea804: 0xa20301a1  sb          $v1, 0x1A1($s0)
    ctx->pc = 0x4ea804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 417), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea808: 0xa20301a0  sb          $v1, 0x1A0($s0)
    ctx->pc = 0x4ea808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea80c: 0xa20301a2  sb          $v1, 0x1A2($s0)
    ctx->pc = 0x4ea80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 418), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ea810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ea814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea818: 0x3e00008  jr          $ra
    ctx->pc = 0x4EA818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA818u;
            // 0x4ea81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EA820u;
}
