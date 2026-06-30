#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C63E0
// Address: 0x4c63e0 - 0x4c66d0
void sub_004C63E0_0x4c63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C63E0_0x4c63e0");
#endif

    switch (ctx->pc) {
        case 0x4c6698u: goto label_4c6698;
        case 0x4c66a4u: goto label_4c66a4;
        default: break;
    }

    ctx->pc = 0x4c63e0u;

label_4c63e0:
    // 0x4c63e0: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x4c63e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4c63e4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4c63e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x4c63e8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4c63e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x4c63ec: 0x24e70e84  addiu       $a3, $a3, 0xE84
    ctx->pc = 0x4c63ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3716));
    // 0x4c63f0: 0x8cc60ea4  lw          $a2, 0xEA4($a2)
    ctx->pc = 0x4c63f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3748)));
    // 0x4c63f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4c63f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4c63f8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x4c63f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c63fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4c6400: 0x8cc6012c  lw          $a2, 0x12C($a2)
    ctx->pc = 0x4c6400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x4c6404: 0x8d070da0  lw          $a3, 0xDA0($t0)
    ctx->pc = 0x4c6404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3488)));
    // 0x4c6408: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x4c6408u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4c640c: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x4c640cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x4c6410: 0x14c00086  bnez        $a2, . + 4 + (0x86 << 2)
    ctx->pc = 0x4C6410u;
    {
        const bool branch_taken_0x4c6410 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6410u;
            // 0x4c6414: 0x8c638a08  lw          $v1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6410) {
            ctx->pc = 0x4C662Cu;
            goto label_4c662c;
        }
    }
    ctx->pc = 0x4C6418u;
    // 0x4c6418: 0x30e60080  andi        $a2, $a3, 0x80
    ctx->pc = 0x4c6418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x4c641c: 0x14c00083  bnez        $a2, . + 4 + (0x83 << 2)
    ctx->pc = 0x4C641Cu;
    {
        const bool branch_taken_0x4c641c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c641c) {
            ctx->pc = 0x4C662Cu;
            goto label_4c662c;
        }
    }
    ctx->pc = 0x4C6424u;
    // 0x4c6424: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x4c6424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4c6428: 0x95070c7e  lhu         $a3, 0xC7E($t0)
    ctx->pc = 0x4c6428u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 3198)));
    // 0x4c642c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4c642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4c6430: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x4c6430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4c6434: 0x8d060d74  lw          $a2, 0xD74($t0)
    ctx->pc = 0x4c6434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3444)));
    // 0x4c6438: 0xc5010a7c  lwc1        $f1, 0xA7C($t0)
    ctx->pc = 0x4c6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c643c: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4c643cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x4c6440: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4c6440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4c6444: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x4c6444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4c6448: 0x90c502c5  lbu         $a1, 0x2C5($a2)
    ctx->pc = 0x4c6448u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
    // 0x4c644c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4c644cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4c6450: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4c6450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4c6454: 0x24a60280  addiu       $a2, $a1, 0x280
    ctx->pc = 0x4c6454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x4c6458: 0x90a50281  lbu         $a1, 0x281($a1)
    ctx->pc = 0x4c6458u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 641)));
    // 0x4c645c: 0x38a50005  xori        $a1, $a1, 0x5
    ctx->pc = 0x4c645cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
    // 0x4c6460: 0x2ca70001  sltiu       $a3, $a1, 0x1
    ctx->pc = 0x4c6460u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c6464: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x4C6464u;
    {
        const bool branch_taken_0x4c6464 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6464u;
            // 0x4c6468: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6464) {
            ctx->pc = 0x4C64A0u;
            goto label_4c64a0;
        }
    }
    ctx->pc = 0x4C646Cu;
    // 0x4c646c: 0x90c60004  lbu         $a2, 0x4($a2)
    ctx->pc = 0x4c646cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4c6470: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c6470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c6474: 0x50c5000a  beql        $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6474u;
    {
        const bool branch_taken_0x4c6474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c6474) {
            ctx->pc = 0x4C6478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6474u;
            // 0x4c6478: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C64A0u;
            goto label_4c64a0;
        }
    }
    ctx->pc = 0x4C647Cu;
    // 0x4c647c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c647cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c6480: 0x10c50006  beq         $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6480u;
    {
        const bool branch_taken_0x4c6480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c6480) {
            ctx->pc = 0x4C649Cu;
            goto label_4c649c;
        }
    }
    ctx->pc = 0x4C6488u;
    // 0x4c6488: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c6488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c648c: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C648Cu;
    {
        const bool branch_taken_0x4c648c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c648c) {
            ctx->pc = 0x4C649Cu;
            goto label_4c649c;
        }
    }
    ctx->pc = 0x4C6494u;
    // 0x4c6494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4C6494u;
    {
        const bool branch_taken_0x4c6494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6494) {
            ctx->pc = 0x4C64A0u;
            goto label_4c64a0;
        }
    }
    ctx->pc = 0x4C649Cu;
label_4c649c:
    // 0x4c649c: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x4c649cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4c64a0:
    // 0x4c64a0: 0x50e00022  beql        $a3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4C64A0u;
    {
        const bool branch_taken_0x4c64a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c64a0) {
            ctx->pc = 0x4C64A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C64A0u;
            // 0x4c64a4: 0x95060004  lhu         $a2, 0x4($t0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C652Cu;
            goto label_4c652c;
        }
    }
    ctx->pc = 0x4C64A8u;
    // 0x4c64a8: 0x1120001f  beqz        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x4C64A8u;
    {
        const bool branch_taken_0x4c64a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c64a8) {
            ctx->pc = 0x4C6528u;
            goto label_4c6528;
        }
    }
    ctx->pc = 0x4C64B0u;
    // 0x4c64b0: 0x3c0541c8  lui         $a1, 0x41C8
    ctx->pc = 0x4c64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16840 << 16));
    // 0x4c64b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4c64b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c64b8: 0x0  nop
    ctx->pc = 0x4c64b8u;
    // NOP
    // 0x4c64bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c64bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c64c0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x4C64C0u;
    {
        const bool branch_taken_0x4c64c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c64c0) {
            ctx->pc = 0x4C6528u;
            goto label_4c6528;
        }
    }
    ctx->pc = 0x4C64C8u;
    // 0x4c64c8: 0x95060004  lhu         $a2, 0x4($t0)
    ctx->pc = 0x4c64c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4c64cc: 0x30c50040  andi        $a1, $a2, 0x40
    ctx->pc = 0x4c64ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x4c64d0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C64D0u;
    {
        const bool branch_taken_0x4c64d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c64d0) {
            ctx->pc = 0x4C64D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C64D0u;
            // 0x4c64d4: 0x30c50400  andi        $a1, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C64FCu;
            goto label_4c64fc;
        }
    }
    ctx->pc = 0x4C64D8u;
    // 0x4c64d8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4c64d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c64dc: 0x2406ffc1  addiu       $a2, $zero, -0x3F
    ctx->pc = 0x4c64dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x4c64e0: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4c64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x4c64e4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c64e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4c64e8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c64ec: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x4c64ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x4c64f0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c64f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4C64F4u;
    {
        const bool branch_taken_0x4c64f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C64F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C64F4u;
            // 0x4c64f8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c64f4) {
            ctx->pc = 0x4C65A4u;
            goto label_4c65a4;
        }
    }
    ctx->pc = 0x4C64FCu;
label_4c64fc:
    // 0x4c64fc: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x4C64FCu;
    {
        const bool branch_taken_0x4c64fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c64fc) {
            ctx->pc = 0x4C6500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C64FCu;
            // 0x4c6500: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C65A8u;
            goto label_4c65a8;
        }
    }
    ctx->pc = 0x4C6504u;
    // 0x4c6504: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4c6504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6508: 0x2406ffc1  addiu       $a2, $zero, -0x3F
    ctx->pc = 0x4c6508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x4c650c: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4c650cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x4c6510: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c6510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4c6514: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c6514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c6518: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x4c6518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x4c651c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c651cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c6520: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4C6520u;
    {
        const bool branch_taken_0x4c6520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6520u;
            // 0x4c6524: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6520) {
            ctx->pc = 0x4C65A4u;
            goto label_4c65a4;
        }
    }
    ctx->pc = 0x4C6528u;
label_4c6528:
    // 0x4c6528: 0x95060004  lhu         $a2, 0x4($t0)
    ctx->pc = 0x4c6528u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_4c652c:
    // 0x4c652c: 0x30c50008  andi        $a1, $a2, 0x8
    ctx->pc = 0x4c652cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x4c6530: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C6530u;
    {
        const bool branch_taken_0x4c6530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6530) {
            ctx->pc = 0x4C6534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6530u;
            // 0x4c6534: 0x30c50010  andi        $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6550u;
            goto label_4c6550;
        }
    }
    ctx->pc = 0x4C6538u;
    // 0x4c6538: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4c6538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c653c: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x4c653cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
    // 0x4c6540: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4c6540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x4c6544: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c6544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c6548: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4C6548u;
    {
        const bool branch_taken_0x4c6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6548u;
            // 0x4c654c: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6548) {
            ctx->pc = 0x4C65A4u;
            goto label_4c65a4;
        }
    }
    ctx->pc = 0x4C6550u;
label_4c6550:
    // 0x4c6550: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6550u;
    {
        const bool branch_taken_0x4c6550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6550) {
            ctx->pc = 0x4C6554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6550u;
            // 0x4c6554: 0x30c50020  andi        $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C657Cu;
            goto label_4c657c;
        }
    }
    ctx->pc = 0x4C6558u;
    // 0x4c6558: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4c6558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c655c: 0x2406ffc1  addiu       $a2, $zero, -0x3F
    ctx->pc = 0x4c655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x4c6560: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4c6560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x4c6564: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c6564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4c6568: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c6568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c656c: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x4c656cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x4c6570: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c6570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c6574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C6574u;
    {
        const bool branch_taken_0x4c6574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6574u;
            // 0x4c6578: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6574) {
            ctx->pc = 0x4C65A4u;
            goto label_4c65a4;
        }
    }
    ctx->pc = 0x4C657Cu;
label_4c657c:
    // 0x4c657c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C657Cu;
    {
        const bool branch_taken_0x4c657c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c657c) {
            ctx->pc = 0x4C65A4u;
            goto label_4c65a4;
        }
    }
    ctx->pc = 0x4C6584u;
    // 0x4c6584: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4c6584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6588: 0x2406ffc1  addiu       $a2, $zero, -0x3F
    ctx->pc = 0x4c6588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x4c658c: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4c658cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x4c6590: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c6590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4c6594: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c6594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c6598: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x4c6598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x4c659c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c659cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c65a0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4c65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_4c65a4:
    // 0x4c65a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4c65a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c65a8:
    // 0x4c65a8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4c65a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4c65ac: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4C65ACu;
    {
        const bool branch_taken_0x4c65ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c65ac) {
            ctx->pc = 0x4C65B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C65ACu;
            // 0x4c65b0: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C65ECu;
            goto label_4c65ec;
        }
    }
    ctx->pc = 0x4C65B4u;
    // 0x4c65b4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4c65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c65b8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4c65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c65bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c65bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c65c0: 0x0  nop
    ctx->pc = 0x4c65c0u;
    // NOP
    // 0x4c65c4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4c65c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4c65c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c65c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c65cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x4C65CCu;
    {
        const bool branch_taken_0x4c65cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C65CCu;
            // 0x4c65d0: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c65cc) {
            ctx->pc = 0x4C65E8u;
            goto label_4c65e8;
        }
    }
    ctx->pc = 0x4C65D4u;
    // 0x4c65d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4c65d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4c65d8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4c65d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4c65dc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4c65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c65e0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4c65e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4c65e4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4c65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4c65e8:
    // 0x4c65e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4c65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c65ec:
    // 0x4c65ec: 0x30a5003e  andi        $a1, $a1, 0x3E
    ctx->pc = 0x4c65ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)62);
    // 0x4c65f0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4C65F0u;
    {
        const bool branch_taken_0x4c65f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c65f0) {
            ctx->pc = 0x4C662Cu;
            goto label_4c662c;
        }
    }
    ctx->pc = 0x4C65F8u;
    // 0x4c65f8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4c65f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c65fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x4c65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c6600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c6600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c6604: 0x0  nop
    ctx->pc = 0x4c6604u;
    // NOP
    // 0x4c6608: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4c6608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4c660c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c660cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c6610: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6610u;
    {
        const bool branch_taken_0x4c6610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C6614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6610u;
            // 0x4c6614: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6610) {
            ctx->pc = 0x4C662Cu;
            goto label_4c662c;
        }
    }
    ctx->pc = 0x4C6618u;
    // 0x4c6618: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x4c6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4c661c: 0x2403ffc1  addiu       $v1, $zero, -0x3F
    ctx->pc = 0x4c661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x4c6620: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4c6620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6624: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4c6624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c6628: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c662c:
    // 0x4c662c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C662Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6634u;
    // 0x4c6634: 0x0  nop
    ctx->pc = 0x4c6634u;
    // NOP
    // 0x4c6638: 0x0  nop
    ctx->pc = 0x4c6638u;
    // NOP
    // 0x4c663c: 0x0  nop
    ctx->pc = 0x4c663cu;
    // NOP
    // 0x4c6640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c6644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c6648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c664c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c6650: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x4c6650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x4c6654: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4C6654u;
    {
        const bool branch_taken_0x4c6654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6654u;
            // 0x4c6658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6654) {
            ctx->pc = 0x4C66BCu;
            goto label_4c66bc;
        }
    }
    ctx->pc = 0x4C665Cu;
    // 0x4c665c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4c6660: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x4c6660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x4c6664: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4c6664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4c6668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c6668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c666c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4c666cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6670: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4c6670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c6674: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x4c6674u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c6678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4c6678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4c667c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c667cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4c6680: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c6680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4c6684: 0x0  nop
    ctx->pc = 0x4c6684u;
    // NOP
    // 0x4c6688: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4c6688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c668c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c6690: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x4c6690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c6694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c6694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c6698:
    // 0x4c6698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c6698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c669c: 0xc1318f8  jal         func_4C63E0
    ctx->pc = 0x4C669Cu;
    SET_GPR_U32(ctx, 31, 0x4C66A4u);
    ctx->pc = 0x4C66A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C669Cu;
            // 0x4c66a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C63E0u;
    goto label_4c63e0;
    ctx->pc = 0x4C66A4u;
label_4c66a4:
    // 0x4c66a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4c66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4c66a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4c66a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4c66ac: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x4c66acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x4c66b0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x4c66b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4c66b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4C66B4u;
    {
        const bool branch_taken_0x4c66b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c66b4) {
            ctx->pc = 0x4C66B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C66B4u;
            // 0x4c66b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c6698;
        }
    }
    ctx->pc = 0x4C66BCu;
label_4c66bc:
    // 0x4c66bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c66c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c66c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c66c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c66c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c66c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C66C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C66CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C66C8u;
            // 0x4c66cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C66D0u;
}
