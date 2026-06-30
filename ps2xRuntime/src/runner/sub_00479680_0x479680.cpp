#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479680
// Address: 0x479680 - 0x479de0
void sub_00479680_0x479680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479680_0x479680");
#endif

    switch (ctx->pc) {
        case 0x4798c0u: goto label_4798c0;
        case 0x47990cu: goto label_47990c;
        case 0x4799a0u: goto label_4799a0;
        case 0x479a14u: goto label_479a14;
        case 0x479a9cu: goto label_479a9c;
        case 0x479af8u: goto label_479af8;
        case 0x479b28u: goto label_479b28;
        case 0x479b68u: goto label_479b68;
        case 0x479b88u: goto label_479b88;
        case 0x479bb8u: goto label_479bb8;
        case 0x479d90u: goto label_479d90;
        default: break;
    }

    ctx->pc = 0x479680u;

    // 0x479680: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x479680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479684: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x479684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x479688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x479688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47968c: 0x0  nop
    ctx->pc = 0x47968cu;
    // NOP
    // 0x479690: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x479694: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x479694u;
    {
        const bool branch_taken_0x479694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479694u;
            // 0x479698: 0x8c428a08  lw          $v0, -0x75F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479694) {
            ctx->pc = 0x4796A4u;
            goto label_4796a4;
        }
    }
    ctx->pc = 0x47969Cu;
    // 0x47969c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x47969Cu;
    {
        const bool branch_taken_0x47969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4796A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47969Cu;
            // 0x4796a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47969c) {
            ctx->pc = 0x4796B4u;
            goto label_4796b4;
        }
    }
    ctx->pc = 0x4796A4u;
label_4796a4:
    // 0x4796a4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4796a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4796a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4796a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4796ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4796acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4796b0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x4796b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_4796b4:
    // 0x4796b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4796B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4796BCu;
    // 0x4796bc: 0x0  nop
    ctx->pc = 0x4796bcu;
    // NOP
    // 0x4796c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4796c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4796c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4796c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4796c8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4796c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4796cc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4796ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4796d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4796d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4796d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4796d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4796d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4796dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4796dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4796e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4796e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4796e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4796e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4796e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4796e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4796ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4796ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4796f0: 0x8c870054  lw          $a3, 0x54($a0)
    ctx->pc = 0x4796f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4796f4: 0x30e30080  andi        $v1, $a3, 0x80
    ctx->pc = 0x4796f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x4796f8: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x4796F8u;
    {
        const bool branch_taken_0x4796f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4796FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4796F8u;
            // 0x4796fc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4796f8) {
            ctx->pc = 0x479DA0u;
            goto label_479da0;
        }
    }
    ctx->pc = 0x479700u;
    // 0x479700: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x479700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x479704: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x479704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x479708: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x479708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47970c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x47970cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x479710: 0x8c650eac  lw          $a1, 0xEAC($v1)
    ctx->pc = 0x479710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
    // 0x479714: 0x30e60004  andi        $a2, $a3, 0x4
    ctx->pc = 0x479714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x479718: 0x2631f300  addiu       $s1, $s1, -0xD00
    ctx->pc = 0x479718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963968));
    // 0x47971c: 0x245e0040  addiu       $fp, $v0, 0x40
    ctx->pc = 0x47971cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x479720: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x479720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x479724: 0x8ca4007c  lw          $a0, 0x7C($a1)
    ctx->pc = 0x479724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x479728: 0x8cab0080  lw          $t3, 0x80($a1)
    ctx->pc = 0x479728u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x47972c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x47972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x479730: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x479730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x479734: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x479734u;
    {
        const bool branch_taken_0x479734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x479738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479734u;
            // 0x479738: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479734) {
            ctx->pc = 0x479754u;
            goto label_479754;
        }
    }
    ctx->pc = 0x47973Cu;
    // 0x47973c: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x47973cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x479740: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x479740u;
    {
        const bool branch_taken_0x479740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x479740) {
            ctx->pc = 0x479744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479740u;
            // 0x479744: 0x96270004  lhu         $a3, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479760u;
            goto label_479760;
        }
    }
    ctx->pc = 0x479748u;
    // 0x479748: 0x34e60001  ori         $a2, $a3, 0x1
    ctx->pc = 0x479748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x47974c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47974Cu;
    {
        const bool branch_taken_0x47974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47974Cu;
            // 0x479750: 0xaea60054  sw          $a2, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47974c) {
            ctx->pc = 0x47975Cu;
            goto label_47975c;
        }
    }
    ctx->pc = 0x479754u;
label_479754:
    // 0x479754: 0x34e60001  ori         $a2, $a3, 0x1
    ctx->pc = 0x479754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x479758: 0xaea60054  sw          $a2, 0x54($s5)
    ctx->pc = 0x479758u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 6));
label_47975c:
    // 0x47975c: 0x96270004  lhu         $a3, 0x4($s1)
    ctx->pc = 0x47975cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_479760:
    // 0x479760: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x479760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x479764: 0x96280006  lhu         $t0, 0x6($s1)
    ctx->pc = 0x479764u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x479768: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x479768u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x47976c: 0x75043  sra         $t2, $a3, 1
    ctx->pc = 0x47976cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 1));
    // 0x479770: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x479770u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x479774: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x479774u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x479778: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x479778u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x47977c: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x47977cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x479780: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x479780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x479784: 0xaea9005c  sw          $t1, 0x5C($s5)
    ctx->pc = 0x479784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 9));
    // 0x479788: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x479788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x47978c: 0xaea70060  sw          $a3, 0x60($s5)
    ctx->pc = 0x47978cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 7));
    // 0x479790: 0x8ca70110  lw          $a3, 0x110($a1)
    ctx->pc = 0x479790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x479794: 0x50e60011  beql        $a3, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x479794u;
    {
        const bool branch_taken_0x479794 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x479794) {
            ctx->pc = 0x479798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479794u;
            // 0x479798: 0x3c0543be  lui         $a1, 0x43BE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17342 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4797DCu;
            goto label_4797dc;
        }
    }
    ctx->pc = 0x47979Cu;
    // 0x47979c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4797a0: 0x10e5000d  beq         $a3, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4797A0u;
    {
        const bool branch_taken_0x4797a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x4797a0) {
            ctx->pc = 0x4797D8u;
            goto label_4797d8;
        }
    }
    ctx->pc = 0x4797A8u;
    // 0x4797a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4797a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4797ac: 0x50e50008  beql        $a3, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4797ACu;
    {
        const bool branch_taken_0x4797ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x4797ac) {
            ctx->pc = 0x4797B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4797ACu;
            // 0x4797b0: 0x3c0543be  lui         $a1, 0x43BE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17342 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4797D0u;
            goto label_4797d0;
        }
    }
    ctx->pc = 0x4797B4u;
    // 0x4797b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4797b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4797b8: 0x50e50003  beql        $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4797B8u;
    {
        const bool branch_taken_0x4797b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x4797b8) {
            ctx->pc = 0x4797BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4797B8u;
            // 0x4797bc: 0x3c0543b4  lui         $a1, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4797C8u;
            goto label_4797c8;
        }
    }
    ctx->pc = 0x4797C0u;
    // 0x4797c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4797C0u;
    {
        const bool branch_taken_0x4797c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4797C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4797C0u;
            // 0x4797c4: 0x8ea50054  lw          $a1, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4797c0) {
            ctx->pc = 0x4797E4u;
            goto label_4797e4;
        }
    }
    ctx->pc = 0x4797C8u;
label_4797c8:
    // 0x4797c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4797C8u;
    {
        const bool branch_taken_0x4797c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4797CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4797C8u;
            // 0x4797cc: 0xaea50058  sw          $a1, 0x58($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4797c8) {
            ctx->pc = 0x4797E0u;
            goto label_4797e0;
        }
    }
    ctx->pc = 0x4797D0u;
label_4797d0:
    // 0x4797d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4797D0u;
    {
        const bool branch_taken_0x4797d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4797D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4797D0u;
            // 0x4797d4: 0xaea50058  sw          $a1, 0x58($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4797d0) {
            ctx->pc = 0x4797E0u;
            goto label_4797e0;
        }
    }
    ctx->pc = 0x4797D8u;
label_4797d8:
    // 0x4797d8: 0x3c0543be  lui         $a1, 0x43BE
    ctx->pc = 0x4797d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17342 << 16));
label_4797dc:
    // 0x4797dc: 0xaea50058  sw          $a1, 0x58($s5)
    ctx->pc = 0x4797dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 5));
label_4797e0:
    // 0x4797e0: 0x8ea50054  lw          $a1, 0x54($s5)
    ctx->pc = 0x4797e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4797e4:
    // 0x4797e4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x4797e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x4797e8: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x4797e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4797ec: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x4797ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x4797f0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4797F0u;
    {
        const bool branch_taken_0x4797f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4797f0) {
            ctx->pc = 0x4797F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4797F0u;
            // 0x4797f4: 0xc6210068  lwc1        $f1, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x479808u;
            goto label_479808;
        }
    }
    ctx->pc = 0x4797F8u;
    // 0x4797f8: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x4797f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x4797fc: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x4797fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x479800: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x479800u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x479804: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x479804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_479808:
    // 0x479808: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x479808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x47980c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x47980cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479810: 0x96270008  lhu         $a3, 0x8($s1)
    ctx->pc = 0x479810u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x479814: 0x862d0062  lh          $t5, 0x62($s1)
    ctx->pc = 0x479814u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
    // 0x479818: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x479818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x47981c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47981cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x479820: 0x92250066  lbu         $a1, 0x66($s1)
    ctx->pc = 0x479820u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 102)));
    // 0x479824: 0x86290064  lh          $t1, 0x64($s1)
    ctx->pc = 0x479824u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x479828: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x479828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x47982c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x47982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x479830: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x479830u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479834: 0x1a56023  subu        $t4, $t5, $a1
    ctx->pc = 0x479834u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x479838: 0x862b005c  lh          $t3, 0x5C($s1)
    ctx->pc = 0x479838u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x47983c: 0x1254023  subu        $t0, $t1, $a1
    ctx->pc = 0x47983cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x479840: 0x862a005e  lh          $t2, 0x5E($s1)
    ctx->pc = 0x479840u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x479844: 0xe6a00064  swc1        $f0, 0x64($s5)
    ctx->pc = 0x479844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x479848: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x479848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x47984c: 0xaea00274  sw          $zero, 0x274($s5)
    ctx->pc = 0x47984cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 628), GPR_U32(ctx, 0));
    // 0x479850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x479850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479854: 0xa6a2027c  sh          $v0, 0x27C($s5)
    ctx->pc = 0x479854u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 636), (uint16_t)GPR_U32(ctx, 2));
    // 0x479858: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x479858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47985c: 0xa6a20278  sh          $v0, 0x278($s5)
    ctx->pc = 0x47985cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 632), (uint16_t)GPR_U32(ctx, 2));
    // 0x479860: 0xa6ac027a  sh          $t4, 0x27A($s5)
    ctx->pc = 0x479860u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 634), (uint16_t)GPR_U32(ctx, 12));
    // 0x479864: 0xa6ad027e  sh          $t5, 0x27E($s5)
    ctx->pc = 0x479864u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 638), (uint16_t)GPR_U32(ctx, 13));
    // 0x479868: 0xe6a10280  swc1        $f1, 0x280($s5)
    ctx->pc = 0x479868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 640), bits); }
    // 0x47986c: 0xa6ab0288  sh          $t3, 0x288($s5)
    ctx->pc = 0x47986cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 648), (uint16_t)GPR_U32(ctx, 11));
    // 0x479870: 0xa6ab0284  sh          $t3, 0x284($s5)
    ctx->pc = 0x479870u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 644), (uint16_t)GPR_U32(ctx, 11));
    // 0x479874: 0xa6ac0286  sh          $t4, 0x286($s5)
    ctx->pc = 0x479874u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 646), (uint16_t)GPR_U32(ctx, 12));
    // 0x479878: 0xa6ad028a  sh          $t5, 0x28A($s5)
    ctx->pc = 0x479878u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 650), (uint16_t)GPR_U32(ctx, 13));
    // 0x47987c: 0xe6a1028c  swc1        $f1, 0x28C($s5)
    ctx->pc = 0x47987cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 652), bits); }
    // 0x479880: 0xa6aa0294  sh          $t2, 0x294($s5)
    ctx->pc = 0x479880u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 660), (uint16_t)GPR_U32(ctx, 10));
    // 0x479884: 0xa6aa0290  sh          $t2, 0x290($s5)
    ctx->pc = 0x479884u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 656), (uint16_t)GPR_U32(ctx, 10));
    // 0x479888: 0xa6a80292  sh          $t0, 0x292($s5)
    ctx->pc = 0x479888u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 658), (uint16_t)GPR_U32(ctx, 8));
    // 0x47988c: 0xa6a90296  sh          $t1, 0x296($s5)
    ctx->pc = 0x47988cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 662), (uint16_t)GPR_U32(ctx, 9));
    // 0x479890: 0xe6a10298  swc1        $f1, 0x298($s5)
    ctx->pc = 0x479890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 664), bits); }
    // 0x479894: 0xa6a302a0  sh          $v1, 0x2A0($s5)
    ctx->pc = 0x479894u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 672), (uint16_t)GPR_U32(ctx, 3));
    // 0x479898: 0xa6a3029c  sh          $v1, 0x29C($s5)
    ctx->pc = 0x479898u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 668), (uint16_t)GPR_U32(ctx, 3));
    // 0x47989c: 0xa6a8029e  sh          $t0, 0x29E($s5)
    ctx->pc = 0x47989cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 670), (uint16_t)GPR_U32(ctx, 8));
    // 0x4798a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4798a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4798a4: 0xa6a902a2  sh          $t1, 0x2A2($s5)
    ctx->pc = 0x4798a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 674), (uint16_t)GPR_U32(ctx, 9));
    // 0x4798a8: 0x8cc20ec8  lw          $v0, 0xEC8($a2)
    ctx->pc = 0x4798a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3784)));
    // 0x4798ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4798acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4798b0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x4798b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x4798b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4798b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4798b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4798b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4798bc: 0xaea2006c  sw          $v0, 0x6C($s5)
    ctx->pc = 0x4798bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
label_4798c0:
    // 0x4798c0: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x4798c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x4798c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4798c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4798c8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x4798c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x4798cc: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x4798ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4798d0: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x4798d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x4798d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4798D4u;
    {
        const bool branch_taken_0x4798d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4798D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4798D4u;
            // 0x4798d8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4798d4) {
            ctx->pc = 0x4798C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4798c0;
        }
    }
    ctx->pc = 0x4798DCu;
    // 0x4798dc: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x4798dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x4798e0: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x4798e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x4798e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4798E4u;
    {
        const bool branch_taken_0x4798e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4798e4) {
            ctx->pc = 0x4798E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4798E4u;
            // 0x4798e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479908u;
            goto label_479908;
        }
    }
    ctx->pc = 0x4798ECu;
    // 0x4798ec: 0x83c30027  lb          $v1, 0x27($fp)
    ctx->pc = 0x4798ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 39)));
    // 0x4798f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4798f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4798f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4798F4u;
    {
        const bool branch_taken_0x4798f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4798f4) {
            ctx->pc = 0x479904u;
            goto label_479904;
        }
    }
    ctx->pc = 0x4798FCu;
    // 0x4798fc: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x4798fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x479900: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x479900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_479904:
    // 0x479904: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x479904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479908:
    // 0x479908: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x479908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47990c:
    // 0x47990c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x47990cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479910: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x479910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x479914: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x479914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x479918: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x479918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x47991c: 0x9624000c  lhu         $a0, 0xC($s1)
    ctx->pc = 0x47991cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x479920: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x479920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x479924: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x479924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x479928: 0x26700074  addiu       $s0, $s3, 0x74
    ctx->pc = 0x479928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x47992c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47992cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479930: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x479930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
    // 0x479934: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x479934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x479938: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x479938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47993c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x47993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x479940: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x479940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479944: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x479944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x479948: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x479948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47994c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x47994cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x479950: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x479950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x479954: 0xe6620078  swc1        $f2, 0x78($s3)
    ctx->pc = 0x479954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x479958: 0xe661007c  swc1        $f1, 0x7C($s3)
    ctx->pc = 0x479958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
    // 0x47995c: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x47995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x479960: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x479960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x479964: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x479964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479968: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x479968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47996c: 0xe6620084  swc1        $f2, 0x84($s3)
    ctx->pc = 0x47996cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x479970: 0xe6610088  swc1        $f1, 0x88($s3)
    ctx->pc = 0x479970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x479974: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x479974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
    // 0x479978: 0xa6630090  sh          $v1, 0x90($s3)
    ctx->pc = 0x479978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x47997c: 0xa6660092  sh          $a2, 0x92($s3)
    ctx->pc = 0x47997cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 6));
    // 0x479980: 0xae650094  sw          $a1, 0x94($s3)
    ctx->pc = 0x479980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 5));
    // 0x479984: 0x8c830e80  lw          $v1, 0xE80($a0)
    ctx->pc = 0x479984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
    // 0x479988: 0x8ea50054  lw          $a1, 0x54($s5)
    ctx->pc = 0x479988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x47998c: 0x2464077c  addiu       $a0, $v1, 0x77C
    ctx->pc = 0x47998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1916));
    // 0x479990: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x479990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x479994: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x479994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x479998: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x479998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x47999c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x47999cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4799a0:
    // 0x4799a0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4799A0u;
    {
        const bool branch_taken_0x4799a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4799A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4799A0u;
            // 0x4799a4: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4799a0) {
            ctx->pc = 0x4799D8u;
            goto label_4799d8;
        }
    }
    ctx->pc = 0x4799A8u;
    // 0x4799a8: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x4799a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x4799ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4799acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4799b0: 0x9056001d  lbu         $s6, 0x1D($v0)
    ctx->pc = 0x4799b0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29)));
    // 0x4799b4: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x4799b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
    // 0x4799b8: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x4799b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4799bc: 0x3d61021  addu        $v0, $fp, $s6
    ctx->pc = 0x4799bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x4799c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4799c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4799c4: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x4799c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x4799c8: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x4799c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4799cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4799ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4799d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4799D0u;
    {
        const bool branch_taken_0x4799d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4799D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4799D0u;
            // 0x4799d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4799d0) {
            ctx->pc = 0x4799E8u;
            goto label_4799e8;
        }
    }
    ctx->pc = 0x4799D8u;
label_4799d8:
    // 0x4799d8: 0x82830e3f  lb          $v1, 0xE3F($s4)
    ctx->pc = 0x4799d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3647)));
    // 0x4799dc: 0x1643003c  bne         $s2, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x4799DCu;
    {
        const bool branch_taken_0x4799dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x4799dc) {
            ctx->pc = 0x479AD0u;
            goto label_479ad0;
        }
    }
    ctx->pc = 0x4799E4u;
    // 0x4799e4: 0x0  nop
    ctx->pc = 0x4799e4u;
    // NOP
label_4799e8:
    // 0x4799e8: 0x8e830d6c  lw          $v1, 0xD6C($s4)
    ctx->pc = 0x4799e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
    // 0x4799ec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4799ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4799f0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4799f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4799f4: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x4799f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x4799f8: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x4799f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4799fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4799FCu;
    {
        const bool branch_taken_0x4799fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4799fc) {
            ctx->pc = 0x479A08u;
            goto label_479a08;
        }
    }
    ctx->pc = 0x479A04u;
    // 0x479a04: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x479a04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_479a08:
    // 0x479a08: 0x8e840d78  lw          $a0, 0xD78($s4)
    ctx->pc = 0x479a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3448)));
    // 0x479a0c: 0xc0ca680  jal         func_329A00
    ctx->pc = 0x479A0Cu;
    SET_GPR_U32(ctx, 31, 0x479A14u);
    ctx->pc = 0x479A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479A0Cu;
            // 0x479a10: 0x27a500fc  addiu       $a1, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479A14u; }
        if (ctx->pc != 0x479A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479A14u; }
        if (ctx->pc != 0x479A14u) { return; }
    }
    ctx->pc = 0x479A14u;
label_479a14:
    // 0x479a14: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x479a14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x479a18: 0xa2020026  sb          $v0, 0x26($s0)
    ctx->pc = 0x479a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x479a1c: 0x93a200fd  lbu         $v0, 0xFD($sp)
    ctx->pc = 0x479a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 253)));
    // 0x479a20: 0xa2020027  sb          $v0, 0x27($s0)
    ctx->pc = 0x479a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x479a24: 0x97a200fe  lhu         $v0, 0xFE($sp)
    ctx->pc = 0x479a24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x479a28: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x479a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x479a2c: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x479a2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x479a30: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x479a30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x479a34: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x479A34u;
    {
        const bool branch_taken_0x479a34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x479a34) {
            ctx->pc = 0x479A58u;
            goto label_479a58;
        }
    }
    ctx->pc = 0x479A3Cu;
    // 0x479a3c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x479a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x479a40: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x479a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x479a44: 0xa2020026  sb          $v0, 0x26($s0)
    ctx->pc = 0x479a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x479a48: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x479a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x479a4c: 0xa2030027  sb          $v1, 0x27($s0)
    ctx->pc = 0x479a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x479a50: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x479a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x479a54: 0x0  nop
    ctx->pc = 0x479a54u;
    // NOP
label_479a58:
    // 0x479a58: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x479a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x479a5c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x479a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x479a60: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x479A60u;
    {
        const bool branch_taken_0x479a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479a60) {
            ctx->pc = 0x479AC0u;
            goto label_479ac0;
        }
    }
    ctx->pc = 0x479A68u;
    // 0x479a68: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x479a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x479a6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x479A6Cu;
    {
        const bool branch_taken_0x479a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479a6c) {
            ctx->pc = 0x479A90u;
            goto label_479a90;
        }
    }
    ctx->pc = 0x479A74u;
    // 0x479a74: 0x3d61821  addu        $v1, $fp, $s6
    ctx->pc = 0x479a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x479a78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x479a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x479a7c: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x479a7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x479a80: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x479a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x479a84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x479A84u;
    {
        const bool branch_taken_0x479a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479A84u;
            // 0x479a88: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479a84) {
            ctx->pc = 0x479AE8u;
            goto label_479ae8;
        }
    }
    ctx->pc = 0x479A8Cu;
    // 0x479a8c: 0x0  nop
    ctx->pc = 0x479a8cu;
    // NOP
label_479a90:
    // 0x479a90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x479a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479a94: 0xc13d7a4  jal         func_4F5E90
    ctx->pc = 0x479A94u;
    SET_GPR_U32(ctx, 31, 0x479A9Cu);
    ctx->pc = 0x479A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479A94u;
            // 0x479a98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E90u;
    if (runtime->hasFunction(0x4F5E90u)) {
        auto targetFn = runtime->lookupFunction(0x4F5E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479A9Cu; }
        if (ctx->pc != 0x479A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5E90_0x4f5e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479A9Cu; }
        if (ctx->pc != 0x479A9Cu) { return; }
    }
    ctx->pc = 0x479A9Cu;
label_479a9c:
    // 0x479a9c: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x479a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x479aa0: 0x3d61821  addu        $v1, $fp, $s6
    ctx->pc = 0x479aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x479aa4: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x479aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x479aa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x479aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x479aac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x479aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x479ab0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x479ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x479ab4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x479AB4u;
    {
        const bool branch_taken_0x479ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479AB4u;
            // 0x479ab8: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ab4) {
            ctx->pc = 0x479AE8u;
            goto label_479ae8;
        }
    }
    ctx->pc = 0x479ABCu;
    // 0x479abc: 0x0  nop
    ctx->pc = 0x479abcu;
    // NOP
label_479ac0:
    // 0x479ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x479ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x479ac4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x479ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x479ac8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x479AC8u;
    {
        const bool branch_taken_0x479ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479AC8u;
            // 0x479acc: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ac8) {
            ctx->pc = 0x479AE8u;
            goto label_479ae8;
        }
    }
    ctx->pc = 0x479AD0u;
label_479ad0:
    // 0x479ad0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x479ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x479ad4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x479ad4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x479ad8: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x479ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x479adc: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x479ADCu;
    {
        const bool branch_taken_0x479adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479ADCu;
            // 0x479ae0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479adc) {
            ctx->pc = 0x4799A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4799a0;
        }
    }
    ctx->pc = 0x479AE4u;
    // 0x479ae4: 0x0  nop
    ctx->pc = 0x479ae4u;
    // NOP
label_479ae8:
    // 0x479ae8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x479ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x479aec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x479aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x479af0: 0xc040180  jal         func_100600
    ctx->pc = 0x479AF0u;
    SET_GPR_U32(ctx, 31, 0x479AF8u);
    ctx->pc = 0x479AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479AF0u;
            // 0x479af4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479AF8u; }
        if (ctx->pc != 0x479AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479AF8u; }
        if (ctx->pc != 0x479AF8u) { return; }
    }
    ctx->pc = 0x479AF8u;
label_479af8:
    // 0x479af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x479af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479afc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x479AFCu;
    {
        const bool branch_taken_0x479afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x479afc) {
            ctx->pc = 0x479B30u;
            goto label_479b30;
        }
    }
    ctx->pc = 0x479B04u;
    // 0x479b04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x479b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x479b08: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x479b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x479b0c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x479b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x479b10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x479b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x479b14: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x479b14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x479b18: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x479b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x479b1c: 0x26a80274  addiu       $t0, $s5, 0x274
    ctx->pc = 0x479b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 628));
    // 0x479b20: 0xc1109e0  jal         func_442780
    ctx->pc = 0x479B20u;
    SET_GPR_U32(ctx, 31, 0x479B28u);
    ctx->pc = 0x479B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479B20u;
            // 0x479b24: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B28u; }
        if (ctx->pc != 0x479B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B28u; }
        if (ctx->pc != 0x479B28u) { return; }
    }
    ctx->pc = 0x479B28u;
label_479b28:
    // 0x479b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x479b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b2c: 0x0  nop
    ctx->pc = 0x479b2cu;
    // NOP
label_479b30:
    // 0x479b30: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x479b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x479b34: 0x8e830e38  lw          $v1, 0xE38($s4)
    ctx->pc = 0x479b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
    // 0x479b38: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x479b38u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x479b3c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x479B3Cu;
    {
        const bool branch_taken_0x479b3c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x479B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479B3Cu;
            // 0x479b40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479b3c) {
            ctx->pc = 0x479B58u;
            goto label_479b58;
        }
    }
    ctx->pc = 0x479B44u;
    // 0x479b44: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x479b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x479b48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x479B48u;
    {
        const bool branch_taken_0x479b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479b48) {
            ctx->pc = 0x479B58u;
            goto label_479b58;
        }
    }
    ctx->pc = 0x479B50u;
    // 0x479b50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x479b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b54: 0x0  nop
    ctx->pc = 0x479b54u;
    // NOP
label_479b58:
    // 0x479b58: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x479B58u;
    {
        const bool branch_taken_0x479b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x479b58) {
            ctx->pc = 0x479B78u;
            goto label_479b78;
        }
    }
    ctx->pc = 0x479B60u;
    // 0x479b60: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x479B60u;
    SET_GPR_U32(ctx, 31, 0x479B68u);
    ctx->pc = 0x479B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479B60u;
            // 0x479b64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B68u; }
        if (ctx->pc != 0x479B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B68u; }
        if (ctx->pc != 0x479B68u) { return; }
    }
    ctx->pc = 0x479B68u;
label_479b68:
    // 0x479b68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x479B68u;
    {
        const bool branch_taken_0x479b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479b68) {
            ctx->pc = 0x479B78u;
            goto label_479b78;
        }
    }
    ctx->pc = 0x479B70u;
    // 0x479b70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x479b70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b74: 0x0  nop
    ctx->pc = 0x479b74u;
    // NOP
label_479b78:
    // 0x479b78: 0x12c0006b  beqz        $s6, . + 4 + (0x6B << 2)
    ctx->pc = 0x479B78u;
    {
        const bool branch_taken_0x479b78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x479b78) {
            ctx->pc = 0x479D28u;
            goto label_479d28;
        }
    }
    ctx->pc = 0x479B80u;
    // 0x479b80: 0xc040180  jal         func_100600
    ctx->pc = 0x479B80u;
    SET_GPR_U32(ctx, 31, 0x479B88u);
    ctx->pc = 0x479B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479B80u;
            // 0x479b84: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B88u; }
        if (ctx->pc != 0x479B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479B88u; }
        if (ctx->pc != 0x479B88u) { return; }
    }
    ctx->pc = 0x479B88u;
label_479b88:
    // 0x479b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x479b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479b8c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x479B8Cu;
    {
        const bool branch_taken_0x479b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x479b8c) {
            ctx->pc = 0x479BC0u;
            goto label_479bc0;
        }
    }
    ctx->pc = 0x479B94u;
    // 0x479b94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x479b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x479b98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x479b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x479b9c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x479b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x479ba0: 0xc62c006c  lwc1        $f12, 0x6C($s1)
    ctx->pc = 0x479ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x479ba4: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x479ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x479ba8: 0x26070034  addiu       $a3, $s0, 0x34
    ctx->pc = 0x479ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x479bac: 0x26a80274  addiu       $t0, $s5, 0x274
    ctx->pc = 0x479bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 628));
    // 0x479bb0: 0xc1109e0  jal         func_442780
    ctx->pc = 0x479BB0u;
    SET_GPR_U32(ctx, 31, 0x479BB8u);
    ctx->pc = 0x479BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479BB0u;
            // 0x479bb4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479BB8u; }
        if (ctx->pc != 0x479BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479BB8u; }
        if (ctx->pc != 0x479BB8u) { return; }
    }
    ctx->pc = 0x479BB8u;
label_479bb8:
    // 0x479bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x479bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479bbc: 0x0  nop
    ctx->pc = 0x479bbcu;
    // NOP
label_479bc0:
    // 0x479bc0: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x479bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x479bc4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x479bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x479bc8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x479bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x479bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x479bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479bd0: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x479bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x479bd4: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x479bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x479bd8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x479bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x479bdc: 0x8c63095c  lw          $v1, 0x95C($v1)
    ctx->pc = 0x479bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2396)));
    // 0x479be0: 0x10650021  beq         $v1, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x479BE0u;
    {
        const bool branch_taken_0x479be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x479be0) {
            ctx->pc = 0x479C68u;
            goto label_479c68;
        }
    }
    ctx->pc = 0x479BE8u;
    // 0x479be8: 0xc6800e04  lwc1        $f0, 0xE04($s4)
    ctx->pc = 0x479be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479bec: 0xc6820e08  lwc1        $f2, 0xE08($s4)
    ctx->pc = 0x479becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x479bf0: 0x6e00004  bltz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x479BF0u;
    {
        const bool branch_taken_0x479bf0 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x479BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479BF0u;
            // 0x479bf4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x479bf0) {
            ctx->pc = 0x479C04u;
            goto label_479c04;
        }
    }
    ctx->pc = 0x479BF8u;
    // 0x479bf8: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x479bf8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479bfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x479BFCu;
    {
        const bool branch_taken_0x479bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479BFCu;
            // 0x479c00: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x479bfc) {
            ctx->pc = 0x479C20u;
            goto label_479c20;
        }
    }
    ctx->pc = 0x479C04u;
label_479c04:
    // 0x479c04: 0x172042  srl         $a0, $s7, 1
    ctx->pc = 0x479c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x479c08: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x479c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x479c0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x479c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x479c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x479c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479c14: 0x0  nop
    ctx->pc = 0x479c14u;
    // NOP
    // 0x479c18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x479c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x479c1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x479c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_479c20:
    // 0x479c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x479c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479c24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x479c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x479c28: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x479c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x479c2c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x479c2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x479c30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x479c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x479c34: 0x0  nop
    ctx->pc = 0x479c34u;
    // NOP
    // 0x479c38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x479c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x479c3c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x479C3Cu;
    {
        const bool branch_taken_0x479c3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x479c3c) {
            ctx->pc = 0x479C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479C3Cu;
            // 0x479c40: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x479C54u;
            goto label_479c54;
        }
    }
    ctx->pc = 0x479C44u;
    // 0x479c44: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x479c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x479c48: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x479c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x479c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x479C4Cu;
    {
        const bool branch_taken_0x479c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479c4c) {
            ctx->pc = 0x479C68u;
            goto label_479c68;
        }
    }
    ctx->pc = 0x479C54u;
label_479c54:
    // 0x479c54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x479c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x479c58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x479c58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x479c5c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x479c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x479c60: 0x0  nop
    ctx->pc = 0x479c60u;
    // NOP
    // 0x479c64: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x479c64u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_479c68:
    // 0x479c68: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x479c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x479c6c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x479c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x479c70: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x479C70u;
    {
        const bool branch_taken_0x479c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479c70) {
            ctx->pc = 0x479D28u;
            goto label_479d28;
        }
    }
    ctx->pc = 0x479C78u;
    // 0x479c78: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x479c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x479c7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x479c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x479c80: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x479C80u;
    {
        const bool branch_taken_0x479c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479c80) {
            ctx->pc = 0x479CF8u;
            goto label_479cf8;
        }
    }
    ctx->pc = 0x479C88u;
    // 0x479c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x479c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x479c8c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x479C8Cu;
    {
        const bool branch_taken_0x479c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479c8c) {
            ctx->pc = 0x479CD0u;
            goto label_479cd0;
        }
    }
    ctx->pc = 0x479C94u;
    // 0x479c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x479c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479c98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x479C98u;
    {
        const bool branch_taken_0x479c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479c98) {
            ctx->pc = 0x479CA8u;
            goto label_479ca8;
        }
    }
    ctx->pc = 0x479CA0u;
    // 0x479ca0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x479CA0u;
    {
        const bool branch_taken_0x479ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479ca0) {
            ctx->pc = 0x479D18u;
            goto label_479d18;
        }
    }
    ctx->pc = 0x479CA8u;
label_479ca8:
    // 0x479ca8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x479ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x479cac: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x479cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x479cb0: 0x642804  sllv        $a1, $a0, $v1
    ctx->pc = 0x479cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x479cb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479cb8: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x479cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x479cbc: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x479cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x479cc0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x479cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x479cc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x479CC4u;
    {
        const bool branch_taken_0x479cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479CC4u;
            // 0x479cc8: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cc4) {
            ctx->pc = 0x479D18u;
            goto label_479d18;
        }
    }
    ctx->pc = 0x479CCCu;
    // 0x479ccc: 0x0  nop
    ctx->pc = 0x479cccu;
    // NOP
label_479cd0:
    // 0x479cd0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x479cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x479cd4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x479cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x479cd8: 0x642804  sllv        $a1, $a0, $v1
    ctx->pc = 0x479cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x479cdc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479ce0: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x479ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x479ce4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x479ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x479ce8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x479ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x479cec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x479CECu;
    {
        const bool branch_taken_0x479cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479CECu;
            // 0x479cf0: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cec) {
            ctx->pc = 0x479D18u;
            goto label_479d18;
        }
    }
    ctx->pc = 0x479CF4u;
    // 0x479cf4: 0x0  nop
    ctx->pc = 0x479cf4u;
    // NOP
label_479cf8:
    // 0x479cf8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x479cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x479cfc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x479cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x479d00: 0x642804  sllv        $a1, $a0, $v1
    ctx->pc = 0x479d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x479d04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479d08: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x479d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x479d0c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x479d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x479d10: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x479d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x479d14: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x479d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_479d18:
    // 0x479d18: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x479d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x479d1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x479d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x479d20: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x479d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x479d24: 0x0  nop
    ctx->pc = 0x479d24u;
    // NOP
label_479d28:
    // 0x479d28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x479d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x479d2c: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x479d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x479d30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x479d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x479d34: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x479d34u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x479d38: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x479d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x479d3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x479d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x479d40: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x479d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x479d44: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x479d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
    // 0x479d48: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x479d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x479d4c: 0x1460feef  bnez        $v1, . + 4 + (-0x111 << 2)
    ctx->pc = 0x479D4Cu;
    {
        const bool branch_taken_0x479d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479D4Cu;
            // 0x479d50: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d4c) {
            ctx->pc = 0x47990Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47990c;
        }
    }
    ctx->pc = 0x479D54u;
    // 0x479d54: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x479d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x479d58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x479d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x479d5c: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x479D5Cu;
    {
        const bool branch_taken_0x479d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d5c) {
            ctx->pc = 0x479D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479D5Cu;
            // 0x479d60: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479DA4u;
            goto label_479da4;
        }
    }
    ctx->pc = 0x479D64u;
    // 0x479d64: 0x8c84095c  lw          $a0, 0x95C($a0)
    ctx->pc = 0x479d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2396)));
    // 0x479d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x479d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479d6c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x479D6Cu;
    {
        const bool branch_taken_0x479d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479d6c) {
            ctx->pc = 0x479D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479D6Cu;
            // 0x479d70: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479D94u;
            goto label_479d94;
        }
    }
    ctx->pc = 0x479D74u;
    // 0x479d74: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x479d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x479d78: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x479d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x479d7c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x479d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x479d80: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x479d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x479d84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x479d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479d88: 0xc120640  jal         func_481900
    ctx->pc = 0x479D88u;
    SET_GPR_U32(ctx, 31, 0x479D90u);
    ctx->pc = 0x479D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479D88u;
            // 0x479d8c: 0xaea50070  sw          $a1, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479D90u; }
        if (ctx->pc != 0x479D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479D90u; }
        if (ctx->pc != 0x479D90u) { return; }
    }
    ctx->pc = 0x479D90u;
label_479d90:
    // 0x479d90: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x479d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_479d94:
    // 0x479d94: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x479d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x479d98: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x479d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x479d9c: 0xaea30070  sw          $v1, 0x70($s5)
    ctx->pc = 0x479d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
label_479da0:
    // 0x479da0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x479da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_479da4:
    // 0x479da4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x479da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x479da8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x479da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x479dac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x479dacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x479db0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x479db0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x479db4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x479db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x479db8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x479db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479dbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x479dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479dc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x479dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479dc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x479dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479dc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x479dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x479DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x479DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479DCCu;
            // 0x479dd0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x479DD4u;
    // 0x479dd4: 0x0  nop
    ctx->pc = 0x479dd4u;
    // NOP
    // 0x479dd8: 0x0  nop
    ctx->pc = 0x479dd8u;
    // NOP
    // 0x479ddc: 0x0  nop
    ctx->pc = 0x479ddcu;
    // NOP
}
