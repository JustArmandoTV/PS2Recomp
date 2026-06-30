#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D4990
// Address: 0x3d4990 - 0x3d4d60
void sub_003D4990_0x3d4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4990_0x3d4990");
#endif

    switch (ctx->pc) {
        case 0x3d4a68u: goto label_3d4a68;
        case 0x3d4a84u: goto label_3d4a84;
        case 0x3d4a94u: goto label_3d4a94;
        case 0x3d4ab0u: goto label_3d4ab0;
        case 0x3d4abcu: goto label_3d4abc;
        case 0x3d4ad8u: goto label_3d4ad8;
        case 0x3d4b04u: goto label_3d4b04;
        case 0x3d4b18u: goto label_3d4b18;
        case 0x3d4b24u: goto label_3d4b24;
        case 0x3d4b38u: goto label_3d4b38;
        case 0x3d4b90u: goto label_3d4b90;
        case 0x3d4ba0u: goto label_3d4ba0;
        case 0x3d4be0u: goto label_3d4be0;
        case 0x3d4bf0u: goto label_3d4bf0;
        case 0x3d4c00u: goto label_3d4c00;
        case 0x3d4c1cu: goto label_3d4c1c;
        case 0x3d4c34u: goto label_3d4c34;
        case 0x3d4c4cu: goto label_3d4c4c;
        case 0x3d4c60u: goto label_3d4c60;
        case 0x3d4c70u: goto label_3d4c70;
        case 0x3d4c80u: goto label_3d4c80;
        case 0x3d4c90u: goto label_3d4c90;
        case 0x3d4ca0u: goto label_3d4ca0;
        case 0x3d4cb0u: goto label_3d4cb0;
        case 0x3d4cf4u: goto label_3d4cf4;
        case 0x3d4d1cu: goto label_3d4d1c;
        case 0x3d4d34u: goto label_3d4d34;
        default: break;
    }

    ctx->pc = 0x3d4990u;

    // 0x3d4990: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x3d4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x3d4994: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d4998: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3d499c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d49a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d49a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d49a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d49ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d49b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d49b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d49b8: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3d49b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d49bc: 0x14c500dd  bne         $a2, $a1, . + 4 + (0xDD << 2)
    ctx->pc = 0x3D49BCu;
    {
        const bool branch_taken_0x3d49bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x3D49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D49BCu;
            // 0x3d49c0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49bc) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D49C4u;
    // 0x3d49c4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3d49c8: 0x8ea400c4  lw          $a0, 0xC4($s5)
    ctx->pc = 0x3d49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x3d49cc: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3d49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x3d49d0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3d49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3d49d4: 0x548300d8  bnel        $a0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3D49D4u;
    {
        const bool branch_taken_0x3d49d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d49d4) {
            ctx->pc = 0x3D49D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D49D4u;
            // 0x3d49d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4D38u;
            goto label_3d4d38;
        }
    }
    ctx->pc = 0x3D49DCu;
    // 0x3d49dc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3d49e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d49e4: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3d49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x3d49e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d49e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49ec: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3d49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d49f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d49f4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3d49f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d49f8: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D49F8u;
    {
        const bool branch_taken_0x3d49f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D49FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D49F8u;
            // 0x3d49fc: 0x26160010  addiu       $s6, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49f8) {
            ctx->pc = 0x3D4A08u;
            goto label_3d4a08;
        }
    }
    ctx->pc = 0x3D4A00u;
    // 0x3d4a00: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x3D4A00u;
    {
        const bool branch_taken_0x3d4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a00) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D4A08u;
label_3d4a08:
    // 0x3d4a08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3d4a0c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3d4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
    // 0x3d4a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d4a14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d4a18: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3d4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x3d4a1c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3d4a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3d4a20: 0x186000c4  blez        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x3D4A20u;
    {
        const bool branch_taken_0x3d4a20 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d4a20) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D4A28u;
    // 0x3d4a28: 0x92a300c0  lbu         $v1, 0xC0($s5)
    ctx->pc = 0x3d4a28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x3d4a2c: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3D4A2Cu;
    {
        const bool branch_taken_0x3d4a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a2c) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D4A34u;
    // 0x3d4a34: 0x92a20080  lbu         $v0, 0x80($s5)
    ctx->pc = 0x3d4a34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x3d4a38: 0x248502c0  addiu       $a1, $a0, 0x2C0
    ctx->pc = 0x3d4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x3d4a3c: 0x92a60081  lbu         $a2, 0x81($s5)
    ctx->pc = 0x3d4a3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 129)));
    // 0x3d4a40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3d4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3d4a44: 0x92a30082  lbu         $v1, 0x82($s5)
    ctx->pc = 0x3d4a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 130)));
    // 0x3d4a48: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x3d4a48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3d4a4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3d4a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3d4a50: 0x92a20083  lbu         $v0, 0x83($s5)
    ctx->pc = 0x3d4a50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 131)));
    // 0x3d4a54: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3d4a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3d4a58: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3d4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3d4a5c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3d4a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3d4a60: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3D4A60u;
    SET_GPR_U32(ctx, 31, 0x3D4A68u);
    ctx->pc = 0x3D4A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4A60u;
            // 0x3d4a64: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A68u; }
        if (ctx->pc != 0x3D4A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A68u; }
        if (ctx->pc != 0x3D4A68u) { return; }
    }
    ctx->pc = 0x3D4A68u;
label_3d4a68:
    // 0x3d4a68: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3d4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x3d4a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d4a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d4a70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4A70u;
    {
        const bool branch_taken_0x3d4a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a70) {
            ctx->pc = 0x3D4A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4A70u;
            // 0x3d4a74: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4A88u;
            goto label_3d4a88;
        }
    }
    ctx->pc = 0x3D4A78u;
    // 0x3d4a78: 0x26050200  addiu       $a1, $s0, 0x200
    ctx->pc = 0x3d4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3d4a7c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3D4A7Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A84u);
    ctx->pc = 0x3D4A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4A7Cu;
            // 0x3d4a80: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A84u; }
        if (ctx->pc != 0x3D4A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A84u; }
        if (ctx->pc != 0x3D4A84u) { return; }
    }
    ctx->pc = 0x3D4A84u;
label_3d4a84:
    // 0x3d4a84: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3d4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3d4a88:
    // 0x3d4a88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d4a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4a8c: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3D4A8Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A94u);
    ctx->pc = 0x3D4A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4A8Cu;
            // 0x3d4a90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A94u; }
        if (ctx->pc != 0x3D4A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4A94u; }
        if (ctx->pc != 0x3D4A94u) { return; }
    }
    ctx->pc = 0x3D4A94u;
label_3d4a94:
    // 0x3d4a94: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d4a98: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3d4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4a9c: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x3d4a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    // 0x3d4aa0: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x3d4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x3d4aa4: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x3d4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x3d4aa8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3D4AA8u;
    SET_GPR_U32(ctx, 31, 0x3D4AB0u);
    ctx->pc = 0x3D4AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4AA8u;
            // 0x3d4aac: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4AB0u; }
        if (ctx->pc != 0x3D4AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4AB0u; }
        if (ctx->pc != 0x3D4AB0u) { return; }
    }
    ctx->pc = 0x3D4AB0u;
label_3d4ab0:
    // 0x3d4ab0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3d4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3d4ab4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3D4AB4u;
    SET_GPR_U32(ctx, 31, 0x3D4ABCu);
    ctx->pc = 0x3D4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4AB4u;
            // 0x3d4ab8: 0x26a500e0  addiu       $a1, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4ABCu; }
        if (ctx->pc != 0x3D4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4ABCu; }
        if (ctx->pc != 0x3D4ABCu) { return; }
    }
    ctx->pc = 0x3D4ABCu;
label_3d4abc:
    // 0x3d4abc: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x3d4abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d4ac0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3d4ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4ac4: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x3d4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4ac8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x3d4ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4acc: 0xe7a20170  swc1        $f2, 0x170($sp)
    ctx->pc = 0x3d4accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x3d4ad0: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x3d4ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x3d4ad4: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x3d4ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_3d4ad8:
    // 0x3d4ad8: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x3d4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3d4adc: 0x18600086  blez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x3D4ADCu;
    {
        const bool branch_taken_0x3d4adc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4ADCu;
            // 0x3d4ae0: 0x26500120  addiu       $s0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4adc) {
            ctx->pc = 0x3D4CF8u;
            goto label_3d4cf8;
        }
    }
    ctx->pc = 0x3D4AE4u;
    // 0x3d4ae4: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D4AE4u;
    {
        const bool branch_taken_0x3d4ae4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4ae4) {
            ctx->pc = 0x3D4B40u;
            goto label_3d4b40;
        }
    }
    ctx->pc = 0x3D4AECu;
    // 0x3d4aec: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3d4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x3d4af0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d4af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d4af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4AF4u;
    {
        const bool branch_taken_0x3d4af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4af4) {
            ctx->pc = 0x3D4B08u;
            goto label_3d4b08;
        }
    }
    ctx->pc = 0x3D4AFCu;
    // 0x3d4afc: 0xc05068c  jal         func_141A30
    ctx->pc = 0x3D4AFCu;
    SET_GPR_U32(ctx, 31, 0x3D4B04u);
    ctx->pc = 0x3D4B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4AFCu;
            // 0x3d4b00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B04u; }
        if (ctx->pc != 0x3D4B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B04u; }
        if (ctx->pc != 0x3D4B04u) { return; }
    }
    ctx->pc = 0x3D4B04u;
label_3d4b04:
    // 0x3d4b04: 0x0  nop
    ctx->pc = 0x3d4b04u;
    // NOP
label_3d4b08:
    // 0x3d4b08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d4b0c: 0x8ea5007c  lw          $a1, 0x7C($s5)
    ctx->pc = 0x3d4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x3d4b10: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x3D4B10u;
    SET_GPR_U32(ctx, 31, 0x3D4B18u);
    ctx->pc = 0x3D4B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4B10u;
            // 0x3d4b14: 0x8c4414d8  lw          $a0, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B18u; }
        if (ctx->pc != 0x3D4B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B18u; }
        if (ctx->pc != 0x3D4B18u) { return; }
    }
    ctx->pc = 0x3D4B18u;
label_3d4b18:
    // 0x3d4b18: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3d4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3d4b1c: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x3D4B1Cu;
    SET_GPR_U32(ctx, 31, 0x3D4B24u);
    ctx->pc = 0x3D4B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4B1Cu;
            // 0x3d4b20: 0x248498f0  addiu       $a0, $a0, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B24u; }
        if (ctx->pc != 0x3D4B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B24u; }
        if (ctx->pc != 0x3D4B24u) { return; }
    }
    ctx->pc = 0x3D4B24u;
label_3d4b24:
    // 0x3d4b24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d4b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b30: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x3D4B30u;
    SET_GPR_U32(ctx, 31, 0x3D4B38u);
    ctx->pc = 0x3D4B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4B30u;
            // 0x3d4b34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B38u; }
        if (ctx->pc != 0x3D4B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B38u; }
        if (ctx->pc != 0x3D4B38u) { return; }
    }
    ctx->pc = 0x3D4B38u;
label_3d4b38:
    // 0x3d4b38: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x3d4b38u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3d4b3c: 0x0  nop
    ctx->pc = 0x3d4b3cu;
    // NOP
label_3d4b40:
    // 0x3d4b40: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3d4b44: 0xac51f7a4  sw          $s1, -0x85C($v0)
    ctx->pc = 0x3d4b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965156), GPR_U32(ctx, 17));
    // 0x3d4b48: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3d4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3d4b4c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3d4b50: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3d4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3d4b54: 0xac51f78c  sw          $s1, -0x874($v0)
    ctx->pc = 0x3d4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965132), GPR_U32(ctx, 17));
    // 0x3d4b58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d4b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b5c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3d4b60: 0xac51f774  sw          $s1, -0x88C($v0)
    ctx->pc = 0x3d4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965108), GPR_U32(ctx, 17));
    // 0x3d4b64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3d4b68: 0xac51f75c  sw          $s1, -0x8A4($v0)
    ctx->pc = 0x3d4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965084), GPR_U32(ctx, 17));
    // 0x3d4b6c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3d4b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4b74: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x3d4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x3d4b78: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3d4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b7c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x3d4b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x3d4b80: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3d4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b84: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x3d4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x3d4b88: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3D4B88u;
    SET_GPR_U32(ctx, 31, 0x3D4B90u);
    ctx->pc = 0x3D4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4B88u;
            // 0x3d4b8c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B90u; }
        if (ctx->pc != 0x3D4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4B90u; }
        if (ctx->pc != 0x3D4B90u) { return; }
    }
    ctx->pc = 0x3D4B90u;
label_3d4b90:
    // 0x3d4b90: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d4b94: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3d4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4b98: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3D4B98u;
    SET_GPR_U32(ctx, 31, 0x3D4BA0u);
    ctx->pc = 0x3D4B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4B98u;
            // 0x3d4b9c: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BA0u; }
        if (ctx->pc != 0x3D4BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BA0u; }
        if (ctx->pc != 0x3D4BA0u) { return; }
    }
    ctx->pc = 0x3D4BA0u;
label_3d4ba0:
    // 0x3d4ba0: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x3d4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4ba4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3d4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4ba8: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x3d4ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4bac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bb0: 0xc7a301c4  lwc1        $f3, 0x1C4($sp)
    ctx->pc = 0x3d4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d4bb4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d4bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bb8: 0xc7a20184  lwc1        $f2, 0x184($sp)
    ctx->pc = 0x3d4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d4bbc: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x3d4bbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d4bc0: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x3d4bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4bc4: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x3d4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4bc8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x3d4bc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3d4bcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d4bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d4bd0: 0xe7a401c0  swc1        $f4, 0x1C0($sp)
    ctx->pc = 0x3d4bd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x3d4bd4: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x3d4bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x3d4bd8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3D4BD8u;
    SET_GPR_U32(ctx, 31, 0x3D4BE0u);
    ctx->pc = 0x3D4BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4BD8u;
            // 0x3d4bdc: 0xe7a001c8  swc1        $f0, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BE0u; }
        if (ctx->pc != 0x3D4BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BE0u; }
        if (ctx->pc != 0x3D4BE0u) { return; }
    }
    ctx->pc = 0x3D4BE0u;
label_3d4be0:
    // 0x3d4be0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3d4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4be4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3d4be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3d4be8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3D4BE8u;
    SET_GPR_U32(ctx, 31, 0x3D4BF0u);
    ctx->pc = 0x3D4BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4BE8u;
            // 0x3d4bec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BF0u; }
        if (ctx->pc != 0x3D4BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4BF0u; }
        if (ctx->pc != 0x3D4BF0u) { return; }
    }
    ctx->pc = 0x3D4BF0u;
label_3d4bf0:
    // 0x3d4bf0: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x3d4bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d4bf4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3d4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4bf8: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x3D4BF8u;
    SET_GPR_U32(ctx, 31, 0x3D4C00u);
    ctx->pc = 0x3D4BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4BF8u;
            // 0x3d4bfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C00u; }
        if (ctx->pc != 0x3D4C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C00u; }
        if (ctx->pc != 0x3D4C00u) { return; }
    }
    ctx->pc = 0x3D4C00u;
label_3d4c00:
    // 0x3d4c00: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3d4c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4c04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3d4c08: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4c0c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4c10: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x3d4c10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x3d4c14: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3D4C14u;
    SET_GPR_U32(ctx, 31, 0x3D4C1Cu);
    ctx->pc = 0x3D4C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C14u;
            // 0x3d4c18: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C1Cu; }
        if (ctx->pc != 0x3D4C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C1Cu; }
        if (ctx->pc != 0x3D4C1Cu) { return; }
    }
    ctx->pc = 0x3D4C1Cu;
label_3d4c1c:
    // 0x3d4c1c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4c20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3d4c24: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x3d4c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d4c28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4c2c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3D4C2Cu;
    SET_GPR_U32(ctx, 31, 0x3D4C34u);
    ctx->pc = 0x3D4C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C2Cu;
            // 0x3d4c30: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C34u; }
        if (ctx->pc != 0x3D4C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C34u; }
        if (ctx->pc != 0x3D4C34u) { return; }
    }
    ctx->pc = 0x3D4C34u;
label_3d4c34:
    // 0x3d4c34: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3d4c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4c38: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3d4c3c: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x3d4c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d4c40: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4c44: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3D4C44u;
    SET_GPR_U32(ctx, 31, 0x3D4C4Cu);
    ctx->pc = 0x3D4C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C44u;
            // 0x3d4c48: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C4Cu; }
        if (ctx->pc != 0x3D4C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C4Cu; }
        if (ctx->pc != 0x3D4C4Cu) { return; }
    }
    ctx->pc = 0x3D4C4Cu;
label_3d4c4c:
    // 0x3d4c4c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x3d4c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d4c50: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x3d4c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d4c54: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3d4c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4c58: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3D4C58u;
    SET_GPR_U32(ctx, 31, 0x3D4C60u);
    ctx->pc = 0x3D4C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C58u;
            // 0x3d4c5c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C60u; }
        if (ctx->pc != 0x3D4C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C60u; }
        if (ctx->pc != 0x3D4C60u) { return; }
    }
    ctx->pc = 0x3D4C60u;
label_3d4c60:
    // 0x3d4c60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d4c64: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3d4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4c68: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3D4C68u;
    SET_GPR_U32(ctx, 31, 0x3D4C70u);
    ctx->pc = 0x3D4C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C68u;
            // 0x3d4c6c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C70u; }
        if (ctx->pc != 0x3D4C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C70u; }
        if (ctx->pc != 0x3D4C70u) { return; }
    }
    ctx->pc = 0x3D4C70u;
label_3d4c70:
    // 0x3d4c70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3d4c74: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3d4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4c78: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3D4C78u;
    SET_GPR_U32(ctx, 31, 0x3D4C80u);
    ctx->pc = 0x3D4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C78u;
            // 0x3d4c7c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C80u; }
        if (ctx->pc != 0x3D4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C80u; }
        if (ctx->pc != 0x3D4C80u) { return; }
    }
    ctx->pc = 0x3D4C80u;
label_3d4c80:
    // 0x3d4c80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d4c84: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3d4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4c88: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3D4C88u;
    SET_GPR_U32(ctx, 31, 0x3D4C90u);
    ctx->pc = 0x3D4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C88u;
            // 0x3d4c8c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C90u; }
        if (ctx->pc != 0x3D4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4C90u; }
        if (ctx->pc != 0x3D4C90u) { return; }
    }
    ctx->pc = 0x3D4C90u;
label_3d4c90:
    // 0x3d4c90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3d4c94: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3d4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3d4c98: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3D4C98u;
    SET_GPR_U32(ctx, 31, 0x3D4CA0u);
    ctx->pc = 0x3D4C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4C98u;
            // 0x3d4c9c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4CA0u; }
        if (ctx->pc != 0x3D4CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4CA0u; }
        if (ctx->pc != 0x3D4CA0u) { return; }
    }
    ctx->pc = 0x3D4CA0u;
label_3d4ca0:
    // 0x3d4ca0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3d4ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d4ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4ca8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d4ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d4cac: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x3d4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
label_3d4cb0:
    // 0x3d4cb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d4cb4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3d4cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d4cb8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3d4cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3d4cbc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3d4cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4cc0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3d4cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4cc4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3d4cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3d4cc8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3d4cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3d4ccc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3d4cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3d4cd0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3d4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3d4cd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D4CD4u;
    {
        const bool branch_taken_0x3d4cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4CD4u;
            // 0x3d4cd8: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4cd4) {
            ctx->pc = 0x3D4CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d4cb0;
        }
    }
    ctx->pc = 0x3D4CDCu;
    // 0x3d4cdc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3d4ce0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3d4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3d4ce4: 0x8c46f7b0  lw          $a2, -0x850($v0)
    ctx->pc = 0x3d4ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965168)));
    // 0x3d4ce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d4ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4cec: 0xc050a08  jal         func_142820
    ctx->pc = 0x3D4CECu;
    SET_GPR_U32(ctx, 31, 0x3D4CF4u);
    ctx->pc = 0x3D4CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4CECu;
            // 0x3d4cf0: 0x24a5f750  addiu       $a1, $a1, -0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4CF4u; }
        if (ctx->pc != 0x3D4CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4CF4u; }
        if (ctx->pc != 0x3D4CF4u) { return; }
    }
    ctx->pc = 0x3D4CF4u;
label_3d4cf4:
    // 0x3d4cf4: 0x0  nop
    ctx->pc = 0x3d4cf4u;
    // NOP
label_3d4cf8:
    // 0x3d4cf8: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x3d4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x3d4cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d4cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3d4d00: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3d4d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d4d04: 0x1460ff74  bnez        $v1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x3D4D04u;
    {
        const bool branch_taken_0x3d4d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4D04u;
            // 0x3d4d08: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4d04) {
            ctx->pc = 0x3D4AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d4ad8;
        }
    }
    ctx->pc = 0x3D4D0Cu;
    // 0x3d4d0c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D4D0Cu;
    {
        const bool branch_taken_0x3d4d0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4d0c) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D4D14u;
    // 0x3d4d14: 0xc050a88  jal         func_142A20
    ctx->pc = 0x3D4D14u;
    SET_GPR_U32(ctx, 31, 0x3D4D1Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4D1Cu; }
        if (ctx->pc != 0x3D4D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4D1Cu; }
        if (ctx->pc != 0x3D4D1Cu) { return; }
    }
    ctx->pc = 0x3D4D1Cu;
label_3d4d1c:
    // 0x3d4d1c: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3d4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x3d4d20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d4d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d4d24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4D24u;
    {
        const bool branch_taken_0x3d4d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4d24) {
            ctx->pc = 0x3D4D34u;
            goto label_3d4d34;
        }
    }
    ctx->pc = 0x3D4D2Cu;
    // 0x3d4d2c: 0xc05068c  jal         func_141A30
    ctx->pc = 0x3D4D2Cu;
    SET_GPR_U32(ctx, 31, 0x3D4D34u);
    ctx->pc = 0x3D4D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4D2Cu;
            // 0x3d4d30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4D34u; }
        if (ctx->pc != 0x3D4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4D34u; }
        if (ctx->pc != 0x3D4D34u) { return; }
    }
    ctx->pc = 0x3D4D34u;
label_3d4d34:
    // 0x3d4d34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d4d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d4d38:
    // 0x3d4d38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d4d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d4d3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d4d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4d40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d4d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4d44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d4d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d4d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d4d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d4d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4d54: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4D54u;
            // 0x3d4d58: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D4D5Cu;
    // 0x3d4d5c: 0x0  nop
    ctx->pc = 0x3d4d5cu;
    // NOP
}
