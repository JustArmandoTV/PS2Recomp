#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002065D0
// Address: 0x2065d0 - 0x206b60
void sub_002065D0_0x2065d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065D0_0x2065d0");
#endif

    switch (ctx->pc) {
        case 0x2065e0u: goto label_2065e0;
        case 0x2067c0u: goto label_2067c0;
        case 0x206850u: goto label_206850;
        case 0x20689cu: goto label_20689c;
        case 0x20692cu: goto label_20692c;
        case 0x2069c0u: goto label_2069c0;
        case 0x2069f0u: goto label_2069f0;
        case 0x206a64u: goto label_206a64;
        case 0x206ab0u: goto label_206ab0;
        case 0x206b40u: goto label_206b40;
        default: break;
    }

    ctx->pc = 0x2065d0u;

    // 0x2065d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2065D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2065D0u;
            // 0x2065d4: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2065D8u;
    // 0x2065d8: 0x0  nop
    ctx->pc = 0x2065d8u;
    // NOP
    // 0x2065dc: 0x0  nop
    ctx->pc = 0x2065dcu;
    // NOP
label_2065e0:
    // 0x2065e0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2065e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2065e4: 0x8c890044  lw          $t1, 0x44($a0)
    ctx->pc = 0x2065e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2065e8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2065ec: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2065f0: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2065f4: 0xe56018  mult        $t4, $a3, $a1
    ctx->pc = 0x2065f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2065f8: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2065fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2065fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x206600: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x206600u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206604: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x206604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206608: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x206608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x20660c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x20660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x206610: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x206610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x206614: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206618: 0x94e70002  lhu         $a3, 0x2($a3)
    ctx->pc = 0x206618u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x20661c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206620: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x206620u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x206624: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x206624u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x206628: 0x1484018  mult        $t0, $t2, $t0
    ctx->pc = 0x206628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x20662c: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x20662cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206630: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x206634: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x206634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x206638: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x20663c: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20663Cu;
    {
        const bool branch_taken_0x20663c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20663Cu;
            // 0x206640: 0x1631821  addu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20663c) {
            ctx->pc = 0x20664Cu;
            goto label_20664c;
        }
    }
    ctx->pc = 0x206644u;
    // 0x206644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206644u;
    {
        const bool branch_taken_0x206644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206644u;
            // 0x206648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206644) {
            ctx->pc = 0x206664u;
            goto label_206664;
        }
    }
    ctx->pc = 0x20664Cu;
label_20664c:
    // 0x20664c: 0x8c490034  lw          $t1, 0x34($v0)
    ctx->pc = 0x20664cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x206650: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x206654: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x206658: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x206658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20665c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x206660: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x206660u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_206664:
    // 0x206664: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x206664u;
    {
        const bool branch_taken_0x206664 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x206668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206664u;
            // 0x206668: 0x304cffff  andi        $t4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206664) {
            ctx->pc = 0x2066F0u;
            goto label_2066f0;
        }
    }
    ctx->pc = 0x20666Cu;
    // 0x20666c: 0x908b004c  lbu         $t3, 0x4C($a0)
    ctx->pc = 0x20666cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x206670: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x206670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206674: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x206678: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x20667c: 0x254ad420  addiu       $t2, $t2, -0x2BE0
    ctx->pc = 0x20667cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956064));
    // 0x206680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206684: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x206684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x206688: 0x2529d430  addiu       $t1, $t1, -0x2BD0
    ctx->pc = 0x206688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956080));
    // 0x20668c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x20668cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x206690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206694: 0xa4c50006  sh          $a1, 0x6($a2)
    ctx->pc = 0x206694u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x206698: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x20669c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20669cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2066a0: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x2066a4: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2066a8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2066a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2066ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2066b0: 0x2529db60  addiu       $t1, $t1, -0x24A0
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957920));
    // 0x2066b4: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x2066b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
    // 0x2066b8: 0x24a5e1e0  addiu       $a1, $a1, -0x1E20
    ctx->pc = 0x2066b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959584));
    // 0x2066bc: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2066bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2066c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2066c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2066c4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2066c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2066c8: 0x2442e600  addiu       $v0, $v0, -0x1A00
    ctx->pc = 0x2066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960640));
    // 0x2066cc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2066ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2066d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2066d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2066d4: 0xa4cc0014  sh          $t4, 0x14($a2)
    ctx->pc = 0x2066d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x2066d8: 0xa0cb0016  sb          $t3, 0x16($a2)
    ctx->pc = 0x2066d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 11));
    // 0x2066dc: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x2066dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x2066e0: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x2066e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x2066e4: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x2066e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x2066e8: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x2066e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x2066ec: 0xa0c00017  sb          $zero, 0x17($a2)
    ctx->pc = 0x2066ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 23), (uint8_t)GPR_U32(ctx, 0));
label_2066f0:
    // 0x2066f0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2066f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2066f4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2066f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066f8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2066f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2066fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2066fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206700: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x206700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x206704: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x206704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206708: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x206708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20670c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20670cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206710: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x206710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x206714: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x206714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206718: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x206718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20671c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20671cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206720: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x206720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x206724: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x206724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206728: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x206728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20672c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20672cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206730: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x206730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x206734: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x206734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206738: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x206738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20673c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20673cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206740: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x206740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x206744: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x206744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206748: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x206748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20674c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20674cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206750: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x206750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x206754: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x206754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206758: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x206758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20675c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20675cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206760: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x206760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x206764: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x206764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206768: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x206768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20676c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20676cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206770: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x206770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x206774: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x206774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206778: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x206778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20677c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20677cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206780: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x206780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x206784: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x206784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206788: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x206788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20678c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20678cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206790: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x206790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x206794: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x206794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206798: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x206798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20679c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20679cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2067a0: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x2067a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x2067a4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2067a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2067a8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2067a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2067ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2067acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2067b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2067B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067B0u;
            // 0x2067b4: 0xe4c0004c  swc1        $f0, 0x4C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2067B8u;
    // 0x2067b8: 0x0  nop
    ctx->pc = 0x2067b8u;
    // NOP
    // 0x2067bc: 0x0  nop
    ctx->pc = 0x2067bcu;
    // NOP
label_2067c0:
    // 0x2067c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2067c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2067c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2067c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2067c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2067cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2067ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2067d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2067d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067d4: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2067D4u;
    {
        const bool branch_taken_0x2067d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067D4u;
            // 0x2067d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067d4) {
            ctx->pc = 0x20692Cu;
            goto label_20692c;
        }
    }
    ctx->pc = 0x2067DCu;
    // 0x2067dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2067dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2067e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2067e4: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x2067e8: 0x2442e328  addiu       $v0, $v0, -0x1CD8
    ctx->pc = 0x2067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
    // 0x2067ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2067ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2067f0: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2067F0u;
    {
        const bool branch_taken_0x2067f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067F0u;
            // 0x2067f4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067f0) {
            ctx->pc = 0x206904u;
            goto label_206904;
        }
    }
    ctx->pc = 0x2067F8u;
    // 0x2067f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2067fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2067fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x206800: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x206804: 0x2463e498  addiu       $v1, $v1, -0x1B68
    ctx->pc = 0x206804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960280));
    // 0x206808: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x20680c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x206810: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x206810u;
    {
        const bool branch_taken_0x206810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206810u;
            // 0x206814: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206810) {
            ctx->pc = 0x206850u;
            goto label_206850;
        }
    }
    ctx->pc = 0x206818u;
    // 0x206818: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x20681c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206824: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x206824u;
    {
        const bool branch_taken_0x206824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206824) {
            ctx->pc = 0x206828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206824u;
            // 0x206828: 0x26220034  addiu       $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206854u;
            goto label_206854;
        }
    }
    ctx->pc = 0x20682Cu;
    // 0x20682c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206830: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x206830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x206834: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x206838: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x206838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x20683c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x20683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x206840: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x206840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x206844: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x206844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x206848: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206848u;
    SET_GPR_U32(ctx, 31, 0x206850u);
    ctx->pc = 0x20684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206848u;
            // 0x20684c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206850u; }
        if (ctx->pc != 0x206850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206850u; }
        if (ctx->pc != 0x206850u) { return; }
    }
    ctx->pc = 0x206850u;
label_206850:
    // 0x206850: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x206850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_206854:
    // 0x206854: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206854u;
    {
        const bool branch_taken_0x206854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206854) {
            ctx->pc = 0x20689Cu;
            goto label_20689c;
        }
    }
    ctx->pc = 0x20685Cu;
    // 0x20685c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x20685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x206860: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206864: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206868: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x206868u;
    {
        const bool branch_taken_0x206868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206868) {
            ctx->pc = 0x20689Cu;
            goto label_20689c;
        }
    }
    ctx->pc = 0x206870u;
    // 0x206870: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x206874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206878: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x20687c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x20687cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x206880: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x206880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x206884: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x206884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x206888: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x206888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x20688c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x206890: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x206890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206894: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206894u;
    SET_GPR_U32(ctx, 31, 0x20689Cu);
    ctx->pc = 0x206898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206894u;
            // 0x206898: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20689Cu; }
        if (ctx->pc != 0x20689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20689Cu; }
        if (ctx->pc != 0x20689Cu) { return; }
    }
    ctx->pc = 0x20689Cu;
label_20689c:
    // 0x20689c: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x20689Cu;
    {
        const bool branch_taken_0x20689c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20689c) {
            ctx->pc = 0x2068A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20689Cu;
            // 0x2068a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206908u;
            goto label_206908;
        }
    }
    ctx->pc = 0x2068A4u;
    // 0x2068a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2068a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2068a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2068a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2068ac: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x2068acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
    // 0x2068b0: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
    // 0x2068b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2068b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2068b8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2068bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2068BCu;
    {
        const bool branch_taken_0x2068bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068BCu;
            // 0x2068c0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068bc) {
            ctx->pc = 0x2068D0u;
            goto label_2068d0;
        }
    }
    ctx->pc = 0x2068C4u;
    // 0x2068c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2068c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2068c8: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x2068cc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2068ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2068d0:
    // 0x2068d0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2068D0u;
    {
        const bool branch_taken_0x2068d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068d0) {
            ctx->pc = 0x206904u;
            goto label_206904;
        }
    }
    ctx->pc = 0x2068D8u;
    // 0x2068d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2068d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2068dc: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x2068dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x2068e0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2068E0u;
    {
        const bool branch_taken_0x2068e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068E0u;
            // 0x2068e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e0) {
            ctx->pc = 0x206904u;
            goto label_206904;
        }
    }
    ctx->pc = 0x2068E8u;
    // 0x2068e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2068e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2068ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2068ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2068f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2068F0u;
    {
        const bool branch_taken_0x2068f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068F0u;
            // 0x2068f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068f0) {
            ctx->pc = 0x206904u;
            goto label_206904;
        }
    }
    ctx->pc = 0x2068F8u;
    // 0x2068f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2068f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2068fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2068fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x206900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_206904:
    // 0x206904: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_206908:
    // 0x206908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x206908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20690c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20690Cu;
    {
        const bool branch_taken_0x20690c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20690c) {
            ctx->pc = 0x206910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20690Cu;
            // 0x206910: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206930u;
            goto label_206930;
        }
    }
    ctx->pc = 0x206914u;
    // 0x206914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206918: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x206918u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20691c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x206920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206924: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206924u;
    SET_GPR_U32(ctx, 31, 0x20692Cu);
    ctx->pc = 0x206928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206924u;
            // 0x206928: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20692Cu; }
        if (ctx->pc != 0x20692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20692Cu; }
        if (ctx->pc != 0x20692Cu) { return; }
    }
    ctx->pc = 0x20692Cu;
label_20692c:
    // 0x20692c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20692cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206930:
    // 0x206930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20693c: 0x3e00008  jr          $ra
    ctx->pc = 0x20693Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20693Cu;
            // 0x206940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206944u;
    // 0x206944: 0x0  nop
    ctx->pc = 0x206944u;
    // NOP
    // 0x206948: 0x0  nop
    ctx->pc = 0x206948u;
    // NOP
    // 0x20694c: 0x0  nop
    ctx->pc = 0x20694cu;
    // NOP
    // 0x206950: 0x8081978  j           func_2065E0
    ctx->pc = 0x206950u;
    ctx->pc = 0x206954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206950u;
            // 0x206954: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2065E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2065e0;
    ctx->pc = 0x206958u;
    // 0x206958: 0x0  nop
    ctx->pc = 0x206958u;
    // NOP
    // 0x20695c: 0x0  nop
    ctx->pc = 0x20695cu;
    // NOP
    // 0x206960: 0x80820f8  j           func_2083E0
    ctx->pc = 0x206960u;
    ctx->pc = 0x206964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206960u;
            // 0x206964: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2083E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x206968u;
    // 0x206968: 0x0  nop
    ctx->pc = 0x206968u;
    // NOP
    // 0x20696c: 0x0  nop
    ctx->pc = 0x20696cu;
    // NOP
    // 0x206970: 0x808202c  j           func_2080B0
    ctx->pc = 0x206970u;
    ctx->pc = 0x206974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206970u;
            // 0x206974: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2080B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2080B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x206978u;
    // 0x206978: 0x0  nop
    ctx->pc = 0x206978u;
    // NOP
    // 0x20697c: 0x0  nop
    ctx->pc = 0x20697cu;
    // NOP
    // 0x206980: 0x8082008  j           func_208020
    ctx->pc = 0x206980u;
    ctx->pc = 0x206984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206980u;
            // 0x206984: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208020u;
    {
        auto targetFn = runtime->lookupFunction(0x208020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x206988u;
    // 0x206988: 0x0  nop
    ctx->pc = 0x206988u;
    // NOP
    // 0x20698c: 0x0  nop
    ctx->pc = 0x20698cu;
    // NOP
    // 0x206990: 0x80819f0  j           func_2067C0
    ctx->pc = 0x206990u;
    ctx->pc = 0x206994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206990u;
            // 0x206994: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2067C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2067c0;
    ctx->pc = 0x206998u;
    // 0x206998: 0x0  nop
    ctx->pc = 0x206998u;
    // NOP
    // 0x20699c: 0x0  nop
    ctx->pc = 0x20699cu;
    // NOP
    // 0x2069a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2069a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2069a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2069a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2069a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2069ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2069acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069b0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2069B0u;
    {
        const bool branch_taken_0x2069b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069B0u;
            // 0x2069b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069b0) {
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069B8u;
    // 0x2069b8: 0xc081fd0  jal         func_207F40
    ctx->pc = 0x2069B8u;
    SET_GPR_U32(ctx, 31, 0x2069C0u);
    ctx->pc = 0x207F40u;
    if (runtime->hasFunction(0x207F40u)) {
        auto targetFn = runtime->lookupFunction(0x207F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069C0u; }
        if (ctx->pc != 0x2069C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207F40_0x207f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069C0u; }
        if (ctx->pc != 0x2069C0u) { return; }
    }
    ctx->pc = 0x2069C0u;
label_2069c0:
    // 0x2069c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2069c4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2069c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2069c8: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x2069c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x2069cc: 0x2484e328  addiu       $a0, $a0, -0x1CD8
    ctx->pc = 0x2069ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959912));
    // 0x2069d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2069d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2069d4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2069d8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2069d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2069dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2069dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2069e0:
    // 0x2069e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2069e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2069e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2069e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2069e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2069E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2069ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069E8u;
            // 0x2069ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2069F0u;
label_2069f0:
    // 0x2069f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2069f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2069f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2069f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2069f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2069fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2069fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a04: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x206A04u;
    {
        const bool branch_taken_0x206a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A04u;
            // 0x206a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a04) {
            ctx->pc = 0x206B40u;
            goto label_206b40;
        }
    }
    ctx->pc = 0x206A0Cu;
    // 0x206a0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206a10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x206a14: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x206a18: 0x2463e498  addiu       $v1, $v1, -0x1B68
    ctx->pc = 0x206a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960280));
    // 0x206a1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x206a20: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x206a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x206a24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x206A24u;
    {
        const bool branch_taken_0x206a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A24u;
            // 0x206a28: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a24) {
            ctx->pc = 0x206A64u;
            goto label_206a64;
        }
    }
    ctx->pc = 0x206A2Cu;
    // 0x206a2c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x206a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x206a30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206a34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206a38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x206A38u;
    {
        const bool branch_taken_0x206a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206a38) {
            ctx->pc = 0x206A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206A38u;
            // 0x206a3c: 0x26220034  addiu       $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206A68u;
            goto label_206a68;
        }
    }
    ctx->pc = 0x206A40u;
    // 0x206a40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206a44: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x206a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x206a48: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x206a4c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x206a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x206a50: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x206a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x206a54: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x206a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x206a58: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x206a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x206a5c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206A5Cu;
    SET_GPR_U32(ctx, 31, 0x206A64u);
    ctx->pc = 0x206A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206A5Cu;
            // 0x206a60: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A64u; }
        if (ctx->pc != 0x206A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A64u; }
        if (ctx->pc != 0x206A64u) { return; }
    }
    ctx->pc = 0x206A64u;
label_206a64:
    // 0x206a64: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x206a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_206a68:
    // 0x206a68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206A68u;
    {
        const bool branch_taken_0x206a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a68) {
            ctx->pc = 0x206AB0u;
            goto label_206ab0;
        }
    }
    ctx->pc = 0x206A70u;
    // 0x206a70: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x206a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x206a74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x206a78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206a7c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x206A7Cu;
    {
        const bool branch_taken_0x206a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206a7c) {
            ctx->pc = 0x206AB0u;
            goto label_206ab0;
        }
    }
    ctx->pc = 0x206A84u;
    // 0x206a84: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x206a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206a8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x206a90: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x206a94: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x206a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x206a98: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x206a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x206a9c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x206a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x206aa0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x206aa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206aa8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206AA8u;
    SET_GPR_U32(ctx, 31, 0x206AB0u);
    ctx->pc = 0x206AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206AA8u;
            // 0x206aac: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AB0u; }
        if (ctx->pc != 0x206AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AB0u; }
        if (ctx->pc != 0x206AB0u) { return; }
    }
    ctx->pc = 0x206AB0u;
label_206ab0:
    // 0x206ab0: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x206AB0u;
    {
        const bool branch_taken_0x206ab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ab0) {
            ctx->pc = 0x206AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206AB0u;
            // 0x206ab4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206AB8u;
    // 0x206ab8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206abc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x206ac0: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x206ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
    // 0x206ac4: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x206ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
    // 0x206ac8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x206acc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x206ad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206AD0u;
    {
        const bool branch_taken_0x206ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206AD0u;
            // 0x206ad4: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ad0) {
            ctx->pc = 0x206AE4u;
            goto label_206ae4;
        }
    }
    ctx->pc = 0x206AD8u;
    // 0x206ad8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206adc: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x206adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x206ae0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x206ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_206ae4:
    // 0x206ae4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x206AE4u;
    {
        const bool branch_taken_0x206ae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ae4) {
            ctx->pc = 0x206B18u;
            goto label_206b18;
        }
    }
    ctx->pc = 0x206AECu;
    // 0x206aec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206af0: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x206af4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x206AF4u;
    {
        const bool branch_taken_0x206af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206AF4u;
            // 0x206af8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206af4) {
            ctx->pc = 0x206B18u;
            goto label_206b18;
        }
    }
    ctx->pc = 0x206AFCu;
    // 0x206afc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206b00: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x206b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x206b04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x206B04u;
    {
        const bool branch_taken_0x206b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B04u;
            // 0x206b08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b04) {
            ctx->pc = 0x206B18u;
            goto label_206b18;
        }
    }
    ctx->pc = 0x206B0Cu;
    // 0x206b0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x206b10: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x206b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x206b14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_206b18:
    // 0x206b18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x206b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_206b1c:
    // 0x206b1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x206b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x206b20: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x206B20u;
    {
        const bool branch_taken_0x206b20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x206b20) {
            ctx->pc = 0x206B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206B20u;
            // 0x206b24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206B44u;
            goto label_206b44;
        }
    }
    ctx->pc = 0x206B28u;
    // 0x206b28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x206b2c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x206b2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x206b30: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x206b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b38: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x206B38u;
    SET_GPR_U32(ctx, 31, 0x206B40u);
    ctx->pc = 0x206B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B38u;
            // 0x206b3c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B40u; }
        if (ctx->pc != 0x206B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B40u; }
        if (ctx->pc != 0x206B40u) { return; }
    }
    ctx->pc = 0x206B40u;
label_206b40:
    // 0x206b40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206b44:
    // 0x206b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206b50: 0x3e00008  jr          $ra
    ctx->pc = 0x206B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B50u;
            // 0x206b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206B58u;
    // 0x206b58: 0x0  nop
    ctx->pc = 0x206b58u;
    // NOP
    // 0x206b5c: 0x0  nop
    ctx->pc = 0x206b5cu;
    // NOP
}
