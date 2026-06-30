#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004472B0
// Address: 0x4472b0 - 0x4475e0
void sub_004472B0_0x4472b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004472B0_0x4472b0");
#endif

    switch (ctx->pc) {
        case 0x4472fcu: goto label_4472fc;
        case 0x44733cu: goto label_44733c;
        case 0x447390u: goto label_447390;
        case 0x447418u: goto label_447418;
        case 0x447424u: goto label_447424;
        case 0x447470u: goto label_447470;
        case 0x4474a8u: goto label_4474a8;
        case 0x4474c0u: goto label_4474c0;
        case 0x4474ccu: goto label_4474cc;
        case 0x4474e0u: goto label_4474e0;
        case 0x4474f0u: goto label_4474f0;
        case 0x4474fcu: goto label_4474fc;
        case 0x447504u: goto label_447504;
        case 0x447510u: goto label_447510;
        case 0x447518u: goto label_447518;
        case 0x447524u: goto label_447524;
        case 0x44752cu: goto label_44752c;
        case 0x447548u: goto label_447548;
        case 0x447554u: goto label_447554;
        case 0x447568u: goto label_447568;
        case 0x447578u: goto label_447578;
        case 0x447580u: goto label_447580;
        case 0x44759cu: goto label_44759c;
        default: break;
    }

    ctx->pc = 0x4472b0u;

    // 0x4472b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4472b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4472b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4472b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4472b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4472b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4472bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4472bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4472c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4472c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4472c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4472c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4472c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4472c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4472cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4472ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4472d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4472d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4472d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4472d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4472d8: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x4472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x4472dc: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x4472DCu;
    {
        const bool branch_taken_0x4472dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4472E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4472DCu;
            // 0x4472e0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4472dc) {
            ctx->pc = 0x4475B0u;
            goto label_4475b0;
        }
    }
    ctx->pc = 0x4472E4u;
    // 0x4472e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4472e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4472e8: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x4472e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
    // 0x4472ec: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4472f0: 0x26730e84  addiu       $s3, $s3, 0xE84
    ctx->pc = 0x4472f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
    // 0x4472f4: 0x26920090  addiu       $s2, $s4, 0x90
    ctx->pc = 0x4472f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x4472f8: 0x8c71077c  lw          $s1, 0x77C($v1)
    ctx->pc = 0x4472f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_4472fc:
    // 0x4472fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4472fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x447300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x447300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x447304: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x447304u;
    {
        const bool branch_taken_0x447304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x447304) {
            ctx->pc = 0x447378u;
            goto label_447378;
        }
    }
    ctx->pc = 0x44730Cu;
    // 0x44730c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447310: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x447310u;
    {
        const bool branch_taken_0x447310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x447310) {
            ctx->pc = 0x447328u;
            goto label_447328;
        }
    }
    ctx->pc = 0x447318u;
    // 0x447318: 0x108000a1  beqz        $a0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x447318u;
    {
        const bool branch_taken_0x447318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x447318) {
            ctx->pc = 0x4475A0u;
            goto label_4475a0;
        }
    }
    ctx->pc = 0x447320u;
    // 0x447320: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x447320u;
    {
        const bool branch_taken_0x447320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x447320) {
            ctx->pc = 0x4475A0u;
            goto label_4475a0;
        }
    }
    ctx->pc = 0x447328u;
label_447328:
    // 0x447328: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x447328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44732c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x44732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x447330: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x447330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x447334: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x447334u;
    SET_GPR_U32(ctx, 31, 0x44733Cu);
    ctx->pc = 0x447338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447334u;
            // 0x447338: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44733Cu; }
        if (ctx->pc != 0x44733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44733Cu; }
        if (ctx->pc != 0x44733Cu) { return; }
    }
    ctx->pc = 0x44733Cu;
label_44733c:
    // 0x44733c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x44733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x447340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x447340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x447344: 0x0  nop
    ctx->pc = 0x447344u;
    // NOP
    // 0x447348: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x447348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x44734c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x44734Cu;
    {
        const bool branch_taken_0x44734c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44734c) {
            ctx->pc = 0x447368u;
            goto label_447368;
        }
    }
    ctx->pc = 0x447354u;
    // 0x447354: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x447354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
    // 0x447358: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x447358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44735c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x44735Cu;
    {
        const bool branch_taken_0x44735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44735Cu;
            // 0x447360: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44735c) {
            ctx->pc = 0x4475A0u;
            goto label_4475a0;
        }
    }
    ctx->pc = 0x447364u;
    // 0x447364: 0x0  nop
    ctx->pc = 0x447364u;
    // NOP
label_447368:
    // 0x447368: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x447368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
    // 0x44736c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x44736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x447370: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x447370u;
    {
        const bool branch_taken_0x447370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447370u;
            // 0x447374: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447370) {
            ctx->pc = 0x4475A0u;
            goto label_4475a0;
        }
    }
    ctx->pc = 0x447378u;
label_447378:
    // 0x447378: 0x8e860074  lw          $a2, 0x74($s4)
    ctx->pc = 0x447378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x44737c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x44737Cu;
    {
        const bool branch_taken_0x44737c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x44737c) {
            ctx->pc = 0x4473C0u;
            goto label_4473c0;
        }
    }
    ctx->pc = 0x447384u;
    // 0x447384: 0x8e850084  lw          $a1, 0x84($s4)
    ctx->pc = 0x447384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x447388: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x447388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44738c: 0x0  nop
    ctx->pc = 0x44738cu;
    // NOP
label_447390:
    // 0x447390: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x447390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x447394: 0x8d0401c4  lw          $a0, 0x1C4($t0)
    ctx->pc = 0x447394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 452)));
    // 0x447398: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x447398u;
    {
        const bool branch_taken_0x447398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x447398) {
            ctx->pc = 0x4473A8u;
            goto label_4473a8;
        }
    }
    ctx->pc = 0x4473A0u;
    // 0x4473a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4473A0u;
    {
        const bool branch_taken_0x4473a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4473a0) {
            ctx->pc = 0x4473C8u;
            goto label_4473c8;
        }
    }
    ctx->pc = 0x4473A8u;
label_4473a8:
    // 0x4473a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4473a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4473ac: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4473ACu;
    {
        const bool branch_taken_0x4473ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4473B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4473ACu;
            // 0x4473b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4473ac) {
            ctx->pc = 0x447390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_447390;
        }
    }
    ctx->pc = 0x4473B4u;
    // 0x4473b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4473B4u;
    {
        const bool branch_taken_0x4473b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4473B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4473B4u;
            // 0x4473b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4473b4) {
            ctx->pc = 0x4473C8u;
            goto label_4473c8;
        }
    }
    ctx->pc = 0x4473BCu;
    // 0x4473bc: 0x0  nop
    ctx->pc = 0x4473bcu;
    // NOP
label_4473c0:
    // 0x4473c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4473c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4473c4: 0x0  nop
    ctx->pc = 0x4473c4u;
    // NOP
label_4473c8:
    // 0x4473c8: 0x11000075  beqz        $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x4473C8u;
    {
        const bool branch_taken_0x4473c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4473c8) {
            ctx->pc = 0x4475A0u;
            goto label_4475a0;
        }
    }
    ctx->pc = 0x4473D0u;
    // 0x4473d0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4473d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4473d4: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x4473d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x4473d8: 0x344338e4  ori         $v1, $v0, 0x38E4
    ctx->pc = 0x4473d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
    // 0x4473dc: 0x26960070  addiu       $s6, $s4, 0x70
    ctx->pc = 0x4473dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x4473e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4473e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4473e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4473e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4473e8: 0xace30de4  sw          $v1, 0xDE4($a3)
    ctx->pc = 0x4473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3556), GPR_U32(ctx, 3));
    // 0x4473ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4473ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4473f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4473f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4473f4: 0x8ce60d98  lw          $a2, 0xD98($a3)
    ctx->pc = 0x4473f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3480)));
    // 0x4473f8: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x4473f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x4473fc: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x4473fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x447400: 0xa02827  not         $a1, $a1
    ctx->pc = 0x447400u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x447404: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x447404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x447408: 0xae83006c  sw          $v1, 0x6C($s4)
    ctx->pc = 0x447408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
    // 0x44740c: 0xad0201c4  sw          $v0, 0x1C4($t0)
    ctx->pc = 0x44740cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 452), GPR_U32(ctx, 2));
    // 0x447410: 0xc1120f4  jal         func_4483D0
    ctx->pc = 0x447410u;
    SET_GPR_U32(ctx, 31, 0x447418u);
    ctx->pc = 0x447414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447410u;
            // 0x447414: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4483D0u;
    if (runtime->hasFunction(0x4483D0u)) {
        auto targetFn = runtime->lookupFunction(0x4483D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447418u; }
        if (ctx->pc != 0x447418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004483D0_0x4483d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447418u; }
        if (ctx->pc != 0x447418u) { return; }
    }
    ctx->pc = 0x447418u;
label_447418:
    // 0x447418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x447418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44741c: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x44741Cu;
    SET_GPR_U32(ctx, 31, 0x447424u);
    ctx->pc = 0x447420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44741Cu;
            // 0x447420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447424u; }
        if (ctx->pc != 0x447424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447424u; }
        if (ctx->pc != 0x447424u) { return; }
    }
    ctx->pc = 0x447424u;
label_447424:
    // 0x447424: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x447424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x447428: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x447428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x44742c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44742cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x447430: 0x0  nop
    ctx->pc = 0x447430u;
    // NOP
    // 0x447434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x447434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x447438: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x447438u;
    {
        const bool branch_taken_0x447438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x447438) {
            ctx->pc = 0x44743Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447438u;
            // 0x44743c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x447450u;
            goto label_447450;
        }
    }
    ctx->pc = 0x447440u;
    // 0x447440: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x447440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x447444: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x447444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x447448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x447448u;
    {
        const bool branch_taken_0x447448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447448u;
            // 0x44744c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447448) {
            ctx->pc = 0x447468u;
            goto label_447468;
        }
    }
    ctx->pc = 0x447450u;
label_447450:
    // 0x447450: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x447450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x447454: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x447454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x447458: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x447458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x44745c: 0x0  nop
    ctx->pc = 0x44745cu;
    // NOP
    // 0x447460: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x447460u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x447464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x447464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_447468:
    // 0x447468: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x447468u;
    SET_GPR_U32(ctx, 31, 0x447470u);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447470u; }
        if (ctx->pc != 0x447470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447470u; }
        if (ctx->pc != 0x447470u) { return; }
    }
    ctx->pc = 0x447470u;
label_447470:
    // 0x447470: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x447470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x447474: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x447474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x447478: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x447478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x44747c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x44747cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x447480: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x447480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x447484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x447484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447488: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x447488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x44748c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x44748cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x447490: 0x0  nop
    ctx->pc = 0x447490u;
    // NOP
    // 0x447494: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x447494u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x447498: 0x0  nop
    ctx->pc = 0x447498u;
    // NOP
    // 0x44749c: 0x0  nop
    ctx->pc = 0x44749cu;
    // NOP
    // 0x4474a0: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x4474A0u;
    SET_GPR_U32(ctx, 31, 0x4474A8u);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474A8u; }
        if (ctx->pc != 0x4474A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474A8u; }
        if (ctx->pc != 0x4474A8u) { return; }
    }
    ctx->pc = 0x4474A8u;
label_4474a8:
    // 0x4474a8: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x4474a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4474ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4474acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4474b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4474b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4474b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4474b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4474b8: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x4474B8u;
    SET_GPR_U32(ctx, 31, 0x4474C0u);
    ctx->pc = 0x4474BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474B8u;
            // 0x4474bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474C0u; }
        if (ctx->pc != 0x4474C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474C0u; }
        if (ctx->pc != 0x4474C0u) { return; }
    }
    ctx->pc = 0x4474C0u;
label_4474c0:
    // 0x4474c0: 0x26150030  addiu       $s5, $s0, 0x30
    ctx->pc = 0x4474c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4474c4: 0xc0e1130  jal         func_3844C0
    ctx->pc = 0x4474C4u;
    SET_GPR_U32(ctx, 31, 0x4474CCu);
    ctx->pc = 0x4474C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474C4u;
            // 0x4474c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474CCu; }
        if (ctx->pc != 0x4474CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474CCu; }
        if (ctx->pc != 0x4474CCu) { return; }
    }
    ctx->pc = 0x4474CCu;
label_4474cc:
    // 0x4474cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4474ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4474d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4474d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4474d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4474d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4474d8: 0xc0e11cc  jal         func_384730
    ctx->pc = 0x4474D8u;
    SET_GPR_U32(ctx, 31, 0x4474E0u);
    ctx->pc = 0x4474DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474D8u;
            // 0x4474dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474E0u; }
        if (ctx->pc != 0x4474E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474E0u; }
        if (ctx->pc != 0x4474E0u) { return; }
    }
    ctx->pc = 0x4474E0u;
label_4474e0:
    // 0x4474e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4474e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4474e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4474e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4474e8: 0xc0d87e0  jal         func_361F80
    ctx->pc = 0x4474E8u;
    SET_GPR_U32(ctx, 31, 0x4474F0u);
    ctx->pc = 0x4474ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474E8u;
            // 0x4474ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474F0u; }
        if (ctx->pc != 0x4474F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474F0u; }
        if (ctx->pc != 0x4474F0u) { return; }
    }
    ctx->pc = 0x4474F0u;
label_4474f0:
    // 0x4474f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4474f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4474f4: 0xc0e11cc  jal         func_384730
    ctx->pc = 0x4474F4u;
    SET_GPR_U32(ctx, 31, 0x4474FCu);
    ctx->pc = 0x4474F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474F4u;
            // 0x4474f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474FCu; }
        if (ctx->pc != 0x4474FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4474FCu; }
        if (ctx->pc != 0x4474FCu) { return; }
    }
    ctx->pc = 0x4474FCu;
label_4474fc:
    // 0x4474fc: 0xc0e1224  jal         func_384890
    ctx->pc = 0x4474FCu;
    SET_GPR_U32(ctx, 31, 0x447504u);
    ctx->pc = 0x447500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4474FCu;
            // 0x447500: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447504u; }
        if (ctx->pc != 0x447504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447504u; }
        if (ctx->pc != 0x447504u) { return; }
    }
    ctx->pc = 0x447504u;
label_447504:
    // 0x447504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x447504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447508: 0xc04cc04  jal         func_133010
    ctx->pc = 0x447508u;
    SET_GPR_U32(ctx, 31, 0x447510u);
    ctx->pc = 0x44750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447508u;
            // 0x44750c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447510u; }
        if (ctx->pc != 0x447510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447510u; }
        if (ctx->pc != 0x447510u) { return; }
    }
    ctx->pc = 0x447510u;
label_447510:
    // 0x447510: 0xc0e1220  jal         func_384880
    ctx->pc = 0x447510u;
    SET_GPR_U32(ctx, 31, 0x447518u);
    ctx->pc = 0x447514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447510u;
            // 0x447514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447518u; }
        if (ctx->pc != 0x447518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447518u; }
        if (ctx->pc != 0x447518u) { return; }
    }
    ctx->pc = 0x447518u;
label_447518:
    // 0x447518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x447518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44751c: 0xc04c720  jal         func_131C80
    ctx->pc = 0x44751Cu;
    SET_GPR_U32(ctx, 31, 0x447524u);
    ctx->pc = 0x447520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44751Cu;
            // 0x447520: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447524u; }
        if (ctx->pc != 0x447524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447524u; }
        if (ctx->pc != 0x447524u) { return; }
    }
    ctx->pc = 0x447524u;
label_447524:
    // 0x447524: 0xc040180  jal         func_100600
    ctx->pc = 0x447524u;
    SET_GPR_U32(ctx, 31, 0x44752Cu);
    ctx->pc = 0x447528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447524u;
            // 0x447528: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44752Cu; }
        if (ctx->pc != 0x44752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44752Cu; }
        if (ctx->pc != 0x44752Cu) { return; }
    }
    ctx->pc = 0x44752Cu;
label_44752c:
    // 0x44752c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44752Cu;
    {
        const bool branch_taken_0x44752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44752c) {
            ctx->pc = 0x447548u;
            goto label_447548;
        }
    }
    ctx->pc = 0x447534u;
    // 0x447534: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x447534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x447538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x447538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44753c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x447540: 0xc0e1468  jal         func_3851A0
    ctx->pc = 0x447540u;
    SET_GPR_U32(ctx, 31, 0x447548u);
    ctx->pc = 0x447544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447540u;
            // 0x447544: 0x24c6d670  addiu       $a2, $a2, -0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3851A0u;
    if (runtime->hasFunction(0x3851A0u)) {
        auto targetFn = runtime->lookupFunction(0x3851A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447548u; }
        if (ctx->pc != 0x447548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003851A0_0x3851a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447548u; }
        if (ctx->pc != 0x447548u) { return; }
    }
    ctx->pc = 0x447548u;
label_447548:
    // 0x447548: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x447548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x44754c: 0xc0e1154  jal         func_384550
    ctx->pc = 0x44754Cu;
    SET_GPR_U32(ctx, 31, 0x447554u);
    ctx->pc = 0x447550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44754Cu;
            // 0x447550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447554u; }
        if (ctx->pc != 0x447554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447554u; }
        if (ctx->pc != 0x447554u) { return; }
    }
    ctx->pc = 0x447554u;
label_447554:
    // 0x447554: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x447554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447558: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x447558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x44755c: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x44755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
    // 0x447560: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x447560u;
    SET_GPR_U32(ctx, 31, 0x447568u);
    ctx->pc = 0x447564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447560u;
            // 0x447564: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447568u; }
        if (ctx->pc != 0x447568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447568u; }
        if (ctx->pc != 0x447568u) { return; }
    }
    ctx->pc = 0x447568u;
label_447568:
    // 0x447568: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x447568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x44756c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x44756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447570: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x447570u;
    SET_GPR_U32(ctx, 31, 0x447578u);
    ctx->pc = 0x447574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447570u;
            // 0x447574: 0x24a5d650  addiu       $a1, $a1, -0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447578u; }
        if (ctx->pc != 0x447578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447578u; }
        if (ctx->pc != 0x447578u) { return; }
    }
    ctx->pc = 0x447578u;
label_447578:
    // 0x447578: 0xc0f64e8  jal         func_3D93A0
    ctx->pc = 0x447578u;
    SET_GPR_U32(ctx, 31, 0x447580u);
    ctx->pc = 0x44757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447578u;
            // 0x44757c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D93A0u;
    if (runtime->hasFunction(0x3D93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447580u; }
        if (ctx->pc != 0x447580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D93A0_0x3d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447580u; }
        if (ctx->pc != 0x447580u) { return; }
    }
    ctx->pc = 0x447580u;
label_447580:
    // 0x447580: 0xae1401c8  sw          $s4, 0x1C8($s0)
    ctx->pc = 0x447580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 20));
    // 0x447584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447588: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x447588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x44758c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x44758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x447590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447594: 0xc112100  jal         func_448400
    ctx->pc = 0x447594u;
    SET_GPR_U32(ctx, 31, 0x44759Cu);
    ctx->pc = 0x447598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447594u;
            // 0x447598: 0xae0001c4  sw          $zero, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448400u;
    if (runtime->hasFunction(0x448400u)) {
        auto targetFn = runtime->lookupFunction(0x448400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44759Cu; }
        if (ctx->pc != 0x44759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448400_0x448400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44759Cu; }
        if (ctx->pc != 0x44759Cu) { return; }
    }
    ctx->pc = 0x44759Cu;
label_44759c:
    // 0x44759c: 0x0  nop
    ctx->pc = 0x44759cu;
    // NOP
label_4475a0:
    // 0x4475a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4475a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4475a4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4475a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4475a8: 0x1620ff54  bnez        $s1, . + 4 + (-0xAC << 2)
    ctx->pc = 0x4475A8u;
    {
        const bool branch_taken_0x4475a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4475ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4475A8u;
            // 0x4475ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475a8) {
            ctx->pc = 0x4472FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4472fc;
        }
    }
    ctx->pc = 0x4475B0u;
label_4475b0:
    // 0x4475b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4475b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4475b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4475b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4475b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4475b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4475bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4475bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4475c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4475c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4475c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4475c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4475c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4475c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4475cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4475ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4475d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4475d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4475d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4475D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4475D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4475D4u;
            // 0x4475d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4475DCu;
    // 0x4475dc: 0x0  nop
    ctx->pc = 0x4475dcu;
    // NOP
}
