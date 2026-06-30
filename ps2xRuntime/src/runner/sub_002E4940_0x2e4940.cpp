#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4940
// Address: 0x2e4940 - 0x2e4eb0
void sub_002E4940_0x2e4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4940_0x2e4940");
#endif

    switch (ctx->pc) {
        case 0x2e4a14u: goto label_2e4a14;
        case 0x2e4a44u: goto label_2e4a44;
        case 0x2e4a80u: goto label_2e4a80;
        case 0x2e4a98u: goto label_2e4a98;
        case 0x2e4abcu: goto label_2e4abc;
        case 0x2e4ad8u: goto label_2e4ad8;
        case 0x2e4ae8u: goto label_2e4ae8;
        case 0x2e4afcu: goto label_2e4afc;
        case 0x2e4b24u: goto label_2e4b24;
        case 0x2e4c30u: goto label_2e4c30;
        case 0x2e4d04u: goto label_2e4d04;
        case 0x2e4d38u: goto label_2e4d38;
        case 0x2e4d5cu: goto label_2e4d5c;
        case 0x2e4d98u: goto label_2e4d98;
        case 0x2e4db0u: goto label_2e4db0;
        case 0x2e4dd0u: goto label_2e4dd0;
        case 0x2e4de0u: goto label_2e4de0;
        case 0x2e4df8u: goto label_2e4df8;
        case 0x2e4e18u: goto label_2e4e18;
        case 0x2e4e28u: goto label_2e4e28;
        case 0x2e4e4cu: goto label_2e4e4c;
        case 0x2e4e68u: goto label_2e4e68;
        case 0x2e4e84u: goto label_2e4e84;
        default: break;
    }

    ctx->pc = 0x2e4940u;

    // 0x2e4940: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2e4944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4948: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e494c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e4950: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e4950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e4954: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e4954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e495c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4964: 0x8c8400c0  lw          $a0, 0xC0($a0)
    ctx->pc = 0x2e4964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2e4968: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4968u;
    {
        const bool branch_taken_0x2e4968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4968) {
            ctx->pc = 0x2E496Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4968u;
            // 0x2e496c: 0xc68100a8  lwc1        $f1, 0xA8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4988u;
            goto label_2e4988;
        }
    }
    ctx->pc = 0x2E4970u;
    // 0x2e4970: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e4970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2e4974: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x2e4974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x2e4978: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2e4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2e497c: 0x54830142  bnel        $a0, $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x2E497Cu;
    {
        const bool branch_taken_0x2e497c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e497c) {
            ctx->pc = 0x2E4980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E497Cu;
            // 0x2e4980: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E88u;
            goto label_2e4e88;
        }
    }
    ctx->pc = 0x2E4984u;
    // 0x2e4984: 0xc68100a8  lwc1        $f1, 0xA8($s4)
    ctx->pc = 0x2e4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e4988:
    // 0x2e4988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e498c: 0x0  nop
    ctx->pc = 0x2e498cu;
    // NOP
    // 0x2e4990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4994: 0x4500013b  bc1f        . + 4 + (0x13B << 2)
    ctx->pc = 0x2E4994u;
    {
        const bool branch_taken_0x2e4994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4994) {
            ctx->pc = 0x2E4E84u;
            goto label_2e4e84;
        }
    }
    ctx->pc = 0x2E499Cu;
    // 0x2e499c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2e49a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e49a4: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x2e49a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x2e49a8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e49ac: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x2e49acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x2e49b0: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2e49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x2e49b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2e49b8: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x2e49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x2e49bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2e49c0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2e49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x2e49c4: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x2e49c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2e49c8: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2e49c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e49cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e49d0: 0x8e8500b8  lw          $a1, 0xB8($s4)
    ctx->pc = 0x2e49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x2e49d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2e49d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e49d8: 0x8c42e4f8  lw          $v0, -0x1B08($v0)
    ctx->pc = 0x2e49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960376)));
    // 0x2e49dc: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e49e0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2e49e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2e49e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e49e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2e49e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e49ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e49f0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2e49f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e49f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e49f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e49f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E49F8u;
    {
        const bool branch_taken_0x2e49f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E49FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49F8u;
            // 0x2e49fc: 0x24d10010  addiu       $s1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49f8) {
            ctx->pc = 0x2E4A1Cu;
            goto label_2e4a1c;
        }
    }
    ctx->pc = 0x2E4A00u;
    // 0x2e4a00: 0xc4cc01a4  lwc1        $f12, 0x1A4($a2)
    ctx->pc = 0x2e4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4a04: 0xc4cd01a8  lwc1        $f13, 0x1A8($a2)
    ctx->pc = 0x2e4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4a08: 0xc4ce01ac  lwc1        $f14, 0x1AC($a2)
    ctx->pc = 0x2e4a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4a0c: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x2E4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A14u);
    ctx->pc = 0x2E4A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A0Cu;
            // 0x2e4a10: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A14u; }
        if (ctx->pc != 0x2E4A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A14u; }
        if (ctx->pc != 0x2E4A14u) { return; }
    }
    ctx->pc = 0x2E4A14u;
label_2e4a14:
    // 0x2e4a14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E4A14u;
    {
        const bool branch_taken_0x2e4a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A14u;
            // 0x2e4a18: 0x8e8200b0  lw          $v0, 0xB0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a14) {
            ctx->pc = 0x2E4A84u;
            goto label_2e4a84;
        }
    }
    ctx->pc = 0x2E4A1Cu;
label_2e4a1c:
    // 0x2e4a1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4a20: 0x8c42e500  lw          $v0, -0x1B00($v0)
    ctx->pc = 0x2e4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960384)));
    // 0x2e4a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4a28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4A28u;
    {
        const bool branch_taken_0x2e4a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a28) {
            ctx->pc = 0x2E4A4Cu;
            goto label_2e4a4c;
        }
    }
    ctx->pc = 0x2E4A30u;
    // 0x2e4a30: 0xc60c02c0  lwc1        $f12, 0x2C0($s0)
    ctx->pc = 0x2e4a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4a34: 0xc60d02c4  lwc1        $f13, 0x2C4($s0)
    ctx->pc = 0x2e4a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4a38: 0xc60e02c8  lwc1        $f14, 0x2C8($s0)
    ctx->pc = 0x2e4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4a3c: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x2E4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A44u);
    ctx->pc = 0x2E4A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A3Cu;
            // 0x2e4a40: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A44u; }
        if (ctx->pc != 0x2E4A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A44u; }
        if (ctx->pc != 0x2E4A44u) { return; }
    }
    ctx->pc = 0x2E4A44u;
label_2e4a44:
    // 0x2e4a44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E4A44u;
    {
        const bool branch_taken_0x2e4a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a44) {
            ctx->pc = 0x2E4A80u;
            goto label_2e4a80;
        }
    }
    ctx->pc = 0x2E4A4Cu;
label_2e4a4c:
    // 0x2e4a4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4a50: 0x8c42e508  lw          $v0, -0x1AF8($v0)
    ctx->pc = 0x2e4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960392)));
    // 0x2e4a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4A58u;
    {
        const bool branch_taken_0x2e4a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a58) {
            ctx->pc = 0x2E4A80u;
            goto label_2e4a80;
        }
    }
    ctx->pc = 0x2E4A60u;
    // 0x2e4a60: 0x928200bc  lbu         $v0, 0xBC($s4)
    ctx->pc = 0x2e4a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x2e4a64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e4a68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4a6c: 0xc44c0ec0  lwc1        $f12, 0xEC0($v0)
    ctx->pc = 0x2e4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4a70: 0xc44d0ec4  lwc1        $f13, 0xEC4($v0)
    ctx->pc = 0x2e4a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4a74: 0xc44e0ec8  lwc1        $f14, 0xEC8($v0)
    ctx->pc = 0x2e4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4a78: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x2E4A78u;
    SET_GPR_U32(ctx, 31, 0x2E4A80u);
    ctx->pc = 0x2E4A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A78u;
            // 0x2e4a7c: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A80u; }
        if (ctx->pc != 0x2E4A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A80u; }
        if (ctx->pc != 0x2E4A80u) { return; }
    }
    ctx->pc = 0x2E4A80u;
label_2e4a80:
    // 0x2e4a80: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_2e4a84:
    // 0x2e4a84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4a8c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2e4a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2e4a90: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x2E4A90u;
    SET_GPR_U32(ctx, 31, 0x2E4A98u);
    ctx->pc = 0x2E4A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A90u;
            // 0x2e4a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A98u; }
        if (ctx->pc != 0x2E4A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A98u; }
        if (ctx->pc != 0x2E4A98u) { return; }
    }
    ctx->pc = 0x2E4A98u;
label_2e4a98:
    // 0x2e4a98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4a9c: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4aa0: 0x8c42e510  lw          $v0, -0x1AF0($v0)
    ctx->pc = 0x2e4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960400)));
    // 0x2e4aa4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4aa8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E4AA8u;
    {
        const bool branch_taken_0x2e4aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4aa8) {
            ctx->pc = 0x2E4AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AA8u;
            // 0x2e4aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4AF0u;
            goto label_2e4af0;
        }
    }
    ctx->pc = 0x2E4AB0u;
    // 0x2e4ab0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e4ab4: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x2E4AB4u;
    SET_GPR_U32(ctx, 31, 0x2E4ABCu);
    ctx->pc = 0x2E4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AB4u;
            // 0x2e4ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4ABCu; }
        if (ctx->pc != 0x2E4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4ABCu; }
        if (ctx->pc != 0x2E4ABCu) { return; }
    }
    ctx->pc = 0x2E4ABCu;
label_2e4abc:
    // 0x2e4abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4ac4: 0x26860060  addiu       $a2, $s4, 0x60
    ctx->pc = 0x2e4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x2e4ac8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2e4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x2e4acc: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x2e4accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x2e4ad0: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E4AD0u;
    SET_GPR_U32(ctx, 31, 0x2E4AD8u);
    ctx->pc = 0x2E4AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AD0u;
            // 0x2e4ad4: 0xafa00138  sw          $zero, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AD8u; }
        if (ctx->pc != 0x2E4AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AD8u; }
        if (ctx->pc != 0x2E4AD8u) { return; }
    }
    ctx->pc = 0x2E4AD8u;
label_2e4ad8:
    // 0x2e4ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4adc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2e4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4ae0: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E4AE0u;
    SET_GPR_U32(ctx, 31, 0x2E4AE8u);
    ctx->pc = 0x2E4AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AE0u;
            // 0x2e4ae4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AE8u; }
        if (ctx->pc != 0x2E4AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AE8u; }
        if (ctx->pc != 0x2E4AE8u) { return; }
    }
    ctx->pc = 0x2E4AE8u;
label_2e4ae8:
    // 0x2e4ae8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4AE8u;
    {
        const bool branch_taken_0x2e4ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ae8) {
            ctx->pc = 0x2E4AFCu;
            goto label_2e4afc;
        }
    }
    ctx->pc = 0x2E4AF0u;
label_2e4af0:
    // 0x2e4af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4af4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E4AF4u;
    SET_GPR_U32(ctx, 31, 0x2E4AFCu);
    ctx->pc = 0x2E4AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AF4u;
            // 0x2e4af8: 0x26860060  addiu       $a2, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AFCu; }
        if (ctx->pc != 0x2E4AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AFCu; }
        if (ctx->pc != 0x2E4AFCu) { return; }
    }
    ctx->pc = 0x2E4AFCu;
label_2e4afc:
    // 0x2e4afc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b00: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4b04: 0x8c42e518  lw          $v0, -0x1AE8($v0)
    ctx->pc = 0x2e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960408)));
    // 0x2e4b08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4B0Cu;
    {
        const bool branch_taken_0x2e4b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b0c) {
            ctx->pc = 0x2E4B24u;
            goto label_2e4b24;
        }
    }
    ctx->pc = 0x2E4B14u;
    // 0x2e4b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b1c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E4B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B24u);
    ctx->pc = 0x2E4B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B1Cu;
            // 0x2e4b20: 0x26060890  addiu       $a2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B24u; }
        if (ctx->pc != 0x2E4B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B24u; }
        if (ctx->pc != 0x2E4B24u) { return; }
    }
    ctx->pc = 0x2E4B24u;
label_2e4b24:
    // 0x2e4b24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b2c: 0xc446e524  lwc1        $f6, -0x1ADC($v0)
    ctx->pc = 0x2e4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e4b30: 0xc465e520  lwc1        $f5, -0x1AE0($v1)
    ctx->pc = 0x2e4b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e4b34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b3c: 0xc442e530  lwc1        $f2, -0x1AD0($v0)
    ctx->pc = 0x2e4b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4b40: 0xc467e528  lwc1        $f7, -0x1AD8($v1)
    ctx->pc = 0x2e4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2e4b44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b4c: 0xc444e538  lwc1        $f4, -0x1AC8($v0)
    ctx->pc = 0x2e4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e4b50: 0xc463e534  lwc1        $f3, -0x1ACC($v1)
    ctx->pc = 0x2e4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e4b54: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b58: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4b5c: 0x8c42e540  lw          $v0, -0x1AC0($v0)
    ctx->pc = 0x2e4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960448)));
    // 0x2e4b60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4b64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4B64u;
    {
        const bool branch_taken_0x2e4b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b64) {
            ctx->pc = 0x2E4B8Cu;
            goto label_2e4b8c;
        }
    }
    ctx->pc = 0x2E4B6Cu;
    // 0x2e4b6c: 0xc6010dc0  lwc1        $f1, 0xDC0($s0)
    ctx->pc = 0x2e4b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4b74: 0x0  nop
    ctx->pc = 0x2e4b74u;
    // NOP
    // 0x2e4b78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e4b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4b7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4B7Cu;
    {
        const bool branch_taken_0x2e4b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4b7c) {
            ctx->pc = 0x2E4B8Cu;
            goto label_2e4b8c;
        }
    }
    ctx->pc = 0x2E4B84u;
    // 0x2e4b84: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e4b88: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2e4b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2e4b8c:
    // 0x2e4b8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4b90: 0x8c42e548  lw          $v0, -0x1AB8($v0)
    ctx->pc = 0x2e4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960456)));
    // 0x2e4b94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4B98u;
    {
        const bool branch_taken_0x2e4b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b98) {
            ctx->pc = 0x2E4BA8u;
            goto label_2e4ba8;
        }
    }
    ctx->pc = 0x2E4BA0u;
    // 0x2e4ba0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e4ba4: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2e4ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2e4ba8:
    // 0x2e4ba8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4bac: 0x8c42e550  lw          $v0, -0x1AB0($v0)
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960464)));
    // 0x2e4bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4bb4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E4BB4u;
    {
        const bool branch_taken_0x2e4bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bb4) {
            ctx->pc = 0x2E4BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BB4u;
            // 0x2e4bb8: 0xc68000ac  lwc1        $f0, 0xAC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C18u;
            goto label_2e4c18;
        }
    }
    ctx->pc = 0x2E4BBCu;
    // 0x2e4bbc: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x2e4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x2e4bc0: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x2e4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2e4bc4: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x2e4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4bc8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e4bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4bd0: 0x0  nop
    ctx->pc = 0x2e4bd0u;
    // NOP
    // 0x2e4bd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e4bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e4bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4bdc: 0x0  nop
    ctx->pc = 0x2e4bdcu;
    // NOP
    // 0x2e4be0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e4be0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2e4be4: 0x0  nop
    ctx->pc = 0x2e4be4u;
    // NOP
    // 0x2e4be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4bec: 0x0  nop
    ctx->pc = 0x2e4becu;
    // NOP
    // 0x2e4bf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e4bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4bf4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4BF4u;
    {
        const bool branch_taken_0x2e4bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4bf4) {
            ctx->pc = 0x2E4BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BF4u;
            // 0x2e4bf8: 0x46022802  mul.s       $f0, $f5, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C04u;
            goto label_2e4c04;
        }
    }
    ctx->pc = 0x2E4BFCu;
    // 0x2e4bfc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e4bfcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4c00: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x2e4c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2e4c04:
    // 0x2e4c04: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x2e4c04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4c08: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2e4c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2e4c0c: 0x46000982  mul.s       $f6, $f1, $f0
    ctx->pc = 0x2e4c0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4c10: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2e4c10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2e4c14: 0xc68000ac  lwc1        $f0, 0xAC($s4)
    ctx->pc = 0x2e4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e4c18:
    // 0x2e4c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c20: 0x46050302  mul.s       $f12, $f0, $f5
    ctx->pc = 0x2e4c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2e4c24: 0x46060342  mul.s       $f13, $f0, $f6
    ctx->pc = 0x2e4c24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2e4c28: 0xc04ce50  jal         func_133940
    ctx->pc = 0x2E4C28u;
    SET_GPR_U32(ctx, 31, 0x2E4C30u);
    ctx->pc = 0x2E4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C28u;
            // 0x2e4c2c: 0x46070382  mul.s       $f14, $f0, $f7 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C30u; }
        if (ctx->pc != 0x2E4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C30u; }
        if (ctx->pc != 0x2E4C30u) { return; }
    }
    ctx->pc = 0x2E4C30u;
label_2e4c30:
    // 0x2e4c30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4c34: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4c38: 0x8c42e558  lw          $v0, -0x1AA8($v0)
    ctx->pc = 0x2e4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960472)));
    // 0x2e4c3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4c40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4C40u;
    {
        const bool branch_taken_0x2e4c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c40) {
            ctx->pc = 0x2E4C80u;
            goto label_2e4c80;
        }
    }
    ctx->pc = 0x2E4C48u;
    // 0x2e4c48: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e4c4c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x2e4c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e4c50: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2e4c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4c54: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e4c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4c5c: 0x0  nop
    ctx->pc = 0x2e4c5cu;
    // NOP
    // 0x2e4c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4c64: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2e4c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2e4c68: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2e4c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4c70: 0x0  nop
    ctx->pc = 0x2e4c70u;
    // NOP
    // 0x2e4c74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4c78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E4C78u;
    {
        const bool branch_taken_0x2e4c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C78u;
            // 0x2e4c7c: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c78) {
            ctx->pc = 0x2E4CC8u;
            goto label_2e4cc8;
        }
    }
    ctx->pc = 0x2E4C80u;
label_2e4c80:
    // 0x2e4c80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4c84: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x2e4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x2e4c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4c8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4C8Cu;
    {
        const bool branch_taken_0x2e4c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c8c) {
            ctx->pc = 0x2E4CC8u;
            goto label_2e4cc8;
        }
    }
    ctx->pc = 0x2E4C94u;
    // 0x2e4c94: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2e4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2e4c98: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e4c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4c9c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2e4c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ca0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e4ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ca8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e4ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4cb0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2e4cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2e4cb4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2e4cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cbc: 0x0  nop
    ctx->pc = 0x2e4cbcu;
    // NOP
    // 0x2e4cc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4cc4: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2e4cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_2e4cc8:
    // 0x2e4cc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4ccc: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4cd0: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x2e4cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4cd8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4CD8u;
    {
        const bool branch_taken_0x2e4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4cd8) {
            ctx->pc = 0x2E4CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CD8u;
            // 0x2e4cdc: 0x8e8200b0  lw          $v0, 0xB0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4CFCu;
            goto label_2e4cfc;
        }
    }
    ctx->pc = 0x2E4CE0u;
    // 0x2e4ce0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2e4ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ce4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e4ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cec: 0x0  nop
    ctx->pc = 0x2e4cecu;
    // NOP
    // 0x2e4cf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e4cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e4cf4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2e4cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2e4cf8: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_2e4cfc:
    // 0x2e4cfc: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x2E4CFCu;
    SET_GPR_U32(ctx, 31, 0x2E4D04u);
    ctx->pc = 0x2E4D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4CFCu;
            // 0x2e4d00: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D04u; }
        if (ctx->pc != 0x2E4D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D04u; }
        if (ctx->pc != 0x2E4D04u) { return; }
    }
    ctx->pc = 0x2E4D04u;
label_2e4d04:
    // 0x2e4d04: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4d08: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4d0c: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4D0Cu;
    {
        const bool branch_taken_0x2e4d0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d0c) {
            ctx->pc = 0x2E4D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D0Cu;
            // 0x2e4d10: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4D40u;
            goto label_2e4d40;
        }
    }
    ctx->pc = 0x2E4D14u;
    // 0x2e4d14: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e4d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d18: 0xc68c00a0  lwc1        $f12, 0xA0($s4)
    ctx->pc = 0x2e4d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4d1c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2e4d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x2e4d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e4d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d2c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x2e4d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x2e4d30: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x2E4D30u;
    SET_GPR_U32(ctx, 31, 0x2E4D38u);
    ctx->pc = 0x2E4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D30u;
            // 0x2e4d34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D38u; }
        if (ctx->pc != 0x2E4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D38u; }
        if (ctx->pc != 0x2E4D38u) { return; }
    }
    ctx->pc = 0x2E4D38u;
label_2e4d38:
    // 0x2e4d38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4D38u;
    {
        const bool branch_taken_0x2e4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d38) {
            ctx->pc = 0x2E4D5Cu;
            goto label_2e4d5c;
        }
    }
    ctx->pc = 0x2E4D40u;
label_2e4d40:
    // 0x2e4d40: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2e4d40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x2e4d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e4d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d50: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x2e4d54: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x2E4D54u;
    SET_GPR_U32(ctx, 31, 0x2E4D5Cu);
    ctx->pc = 0x2E4D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D54u;
            // 0x2e4d58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D5Cu; }
        if (ctx->pc != 0x2E4D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D5Cu; }
        if (ctx->pc != 0x2E4D5Cu) { return; }
    }
    ctx->pc = 0x2E4D5Cu;
label_2e4d5c:
    // 0x2e4d5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e4d60: 0x8e8300b4  lw          $v1, 0xB4($s4)
    ctx->pc = 0x2e4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2e4d64: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x2e4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x2e4d68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4d6c: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E4D6Cu;
    {
        const bool branch_taken_0x2e4d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d6c) {
            ctx->pc = 0x2E4D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D6Cu;
            // 0x2e4d70: 0x8e8200b0  lw          $v0, 0xB0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E30u;
            goto label_2e4e30;
        }
    }
    ctx->pc = 0x2E4D74u;
    // 0x2e4d74: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x2e4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4d78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e4d7c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E4D7Cu;
    {
        const bool branch_taken_0x2e4d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d7c) {
            ctx->pc = 0x2E4D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D7Cu;
            // 0x2e4d80: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4DE8u;
            goto label_2e4de8;
        }
    }
    ctx->pc = 0x2E4D84u;
    // 0x2e4d84: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e4d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e4d88: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4d90: 0xc074840  jal         func_1D2100
    ctx->pc = 0x2E4D90u;
    SET_GPR_U32(ctx, 31, 0x2E4D98u);
    ctx->pc = 0x2E4D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D90u;
            // 0x2e4d94: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D98u; }
        if (ctx->pc != 0x2E4D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D98u; }
        if (ctx->pc != 0x2E4D98u) { return; }
    }
    ctx->pc = 0x2E4D98u;
label_2e4d98:
    // 0x2e4d98: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4d9c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e4da0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e4da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4da4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2e4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e4da8: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x2E4DA8u;
    SET_GPR_U32(ctx, 31, 0x2E4DB0u);
    ctx->pc = 0x2E4DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DA8u;
            // 0x2e4dac: 0xc68c00a4  lwc1        $f12, 0xA4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DB0u; }
        if (ctx->pc != 0x2E4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DB0u; }
        if (ctx->pc != 0x2E4DB0u) { return; }
    }
    ctx->pc = 0x2E4DB0u;
label_2e4db0:
    // 0x2e4db0: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4db4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2e4db8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e4dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4dc0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2e4dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4dc4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e4dc8: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x2E4DC8u;
    SET_GPR_U32(ctx, 31, 0x2E4DD0u);
    ctx->pc = 0x2E4DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DC8u;
            // 0x2e4dcc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DD0u; }
        if (ctx->pc != 0x2E4DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DD0u; }
        if (ctx->pc != 0x2E4DD0u) { return; }
    }
    ctx->pc = 0x2E4DD0u;
label_2e4dd0:
    // 0x2e4dd0: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4dd4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e4dd8: 0xc0747e8  jal         func_1D1FA0
    ctx->pc = 0x2E4DD8u;
    SET_GPR_U32(ctx, 31, 0x2E4DE0u);
    ctx->pc = 0x2E4DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DD8u;
            // 0x2e4ddc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DE0u; }
        if (ctx->pc != 0x2E4DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DE0u; }
        if (ctx->pc != 0x2E4DE0u) { return; }
    }
    ctx->pc = 0x2E4DE0u;
label_2e4de0:
    // 0x2e4de0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E4DE0u;
    {
        const bool branch_taken_0x2e4de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4de0) {
            ctx->pc = 0x2E4E84u;
            goto label_2e4e84;
        }
    }
    ctx->pc = 0x2E4DE8u;
label_2e4de8:
    // 0x2e4de8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4df0: 0xc074840  jal         func_1D2100
    ctx->pc = 0x2E4DF0u;
    SET_GPR_U32(ctx, 31, 0x2E4DF8u);
    ctx->pc = 0x2E4DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DF0u;
            // 0x2e4df4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DF8u; }
        if (ctx->pc != 0x2E4DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DF8u; }
        if (ctx->pc != 0x2E4DF8u) { return; }
    }
    ctx->pc = 0x2E4DF8u;
label_2e4df8:
    // 0x2e4df8: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x2e4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4dfc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2e4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2e4e00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e4e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e08: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2e4e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4e0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4e10: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x2E4E10u;
    SET_GPR_U32(ctx, 31, 0x2E4E18u);
    ctx->pc = 0x2E4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E10u;
            // 0x2e4e14: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E18u; }
        if (ctx->pc != 0x2E4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E18u; }
        if (ctx->pc != 0x2E4E18u) { return; }
    }
    ctx->pc = 0x2E4E18u;
label_2e4e18:
    // 0x2e4e18: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4e1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4e20: 0xc0747e8  jal         func_1D1FA0
    ctx->pc = 0x2E4E20u;
    SET_GPR_U32(ctx, 31, 0x2E4E28u);
    ctx->pc = 0x2E4E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E20u;
            // 0x2e4e24: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E28u; }
        if (ctx->pc != 0x2E4E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E28u; }
        if (ctx->pc != 0x2E4E28u) { return; }
    }
    ctx->pc = 0x2E4E28u;
label_2e4e28:
    // 0x2e4e28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E4E28u;
    {
        const bool branch_taken_0x2e4e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e28) {
            ctx->pc = 0x2E4E84u;
            goto label_2e4e84;
        }
    }
    ctx->pc = 0x2E4E30u;
label_2e4e30:
    // 0x2e4e30: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2e4e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e4e34: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4E34u;
    {
        const bool branch_taken_0x2e4e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e34) {
            ctx->pc = 0x2E4E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E34u;
            // 0x2e4e38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E70u;
            goto label_2e4e70;
        }
    }
    ctx->pc = 0x2E4E3Cu;
    // 0x2e4e3c: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x2e4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4e40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4e44: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x2E4E44u;
    SET_GPR_U32(ctx, 31, 0x2E4E4Cu);
    ctx->pc = 0x2E4E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E44u;
            // 0x2e4e48: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E4Cu; }
        if (ctx->pc != 0x2E4E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E4Cu; }
        if (ctx->pc != 0x2E4E4Cu) { return; }
    }
    ctx->pc = 0x2E4E4Cu;
label_2e4e4c:
    // 0x2e4e4c: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2e4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2e4e50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e4e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2e4e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4e5c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e4e60: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x2E4E60u;
    SET_GPR_U32(ctx, 31, 0x2E4E68u);
    ctx->pc = 0x2E4E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E60u;
            // 0x2e4e64: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E68u; }
        if (ctx->pc != 0x2E4E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E68u; }
        if (ctx->pc != 0x2E4E68u) { return; }
    }
    ctx->pc = 0x2E4E68u;
label_2e4e68:
    // 0x2e4e68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4E68u;
    {
        const bool branch_taken_0x2e4e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e68) {
            ctx->pc = 0x2E4E84u;
            goto label_2e4e84;
        }
    }
    ctx->pc = 0x2E4E70u;
label_2e4e70:
    // 0x2e4e70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e4e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e78: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2e4e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4e7c: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x2E4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E84u);
    ctx->pc = 0x2E4E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E7Cu;
            // 0x2e4e80: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E84u; }
        if (ctx->pc != 0x2E4E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E84u; }
        if (ctx->pc != 0x2E4E84u) { return; }
    }
    ctx->pc = 0x2E4E84u;
label_2e4e84:
    // 0x2e4e84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e4e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4e88:
    // 0x2e4e88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e4e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E9Cu;
            // 0x2e4ea0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4EA4u;
    // 0x2e4ea4: 0x0  nop
    ctx->pc = 0x2e4ea4u;
    // NOP
    // 0x2e4ea8: 0x0  nop
    ctx->pc = 0x2e4ea8u;
    // NOP
    // 0x2e4eac: 0x0  nop
    ctx->pc = 0x2e4eacu;
    // NOP
}
