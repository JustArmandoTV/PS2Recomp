#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142AA0
// Address: 0x142aa0 - 0x142d60
void sub_00142AA0_0x142aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142AA0_0x142aa0");
#endif

    switch (ctx->pc) {
        case 0x142accu: goto label_142acc;
        case 0x142af8u: goto label_142af8;
        case 0x142b34u: goto label_142b34;
        case 0x142b64u: goto label_142b64;
        case 0x142b7cu: goto label_142b7c;
        case 0x142d04u: goto label_142d04;
        case 0x142d14u: goto label_142d14;
        case 0x142d28u: goto label_142d28;
        case 0x142d30u: goto label_142d30;
        default: break;
    }

    ctx->pc = 0x142aa0u;

    // 0x142aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x142aa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x142aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x142aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142ab0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x142ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142ab8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ac4: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x142AC4u;
    SET_GPR_U32(ctx, 31, 0x142ACCu);
    ctx->pc = 0x142AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142AC4u;
            // 0x142ac8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142ACCu; }
        if (ctx->pc != 0x142ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142ACCu; }
        if (ctx->pc != 0x142ACCu) { return; }
    }
    ctx->pc = 0x142ACCu;
label_142acc:
    // 0x142acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142ad0: 0x1663000b  bne         $s3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x142AD0u;
    {
        const bool branch_taken_0x142ad0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x142AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AD0u;
            // 0x142ad4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ad0) {
            ctx->pc = 0x142B00u;
            goto label_142b00;
        }
    }
    ctx->pc = 0x142AD8u;
    // 0x142ad8: 0xdf878048  ld          $a3, -0x7FB8($gp)
    ctx->pc = 0x142ad8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x142adc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x142ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ae4: 0xaf828298  sw          $v0, -0x7D68($gp)
    ctx->pc = 0x142ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 2));
    // 0x142ae8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x142ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142af0: 0xc057540  jal         func_15D500
    ctx->pc = 0x142AF0u;
    SET_GPR_U32(ctx, 31, 0x142AF8u);
    ctx->pc = 0x142AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142AF0u;
            // 0x142af4: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142AF8u; }
        if (ctx->pc != 0x142AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142AF8u; }
        if (ctx->pc != 0x142AF8u) { return; }
    }
    ctx->pc = 0x142AF8u;
label_142af8:
    // 0x142af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142AF8u;
    {
        const bool branch_taken_0x142af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AF8u;
            // 0x142afc: 0x8f838298  lw          $v1, -0x7D68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142af8) {
            ctx->pc = 0x142B08u;
            goto label_142b08;
        }
    }
    ctx->pc = 0x142B00u;
label_142b00:
    // 0x142b00: 0xaf808298  sw          $zero, -0x7D68($gp)
    ctx->pc = 0x142b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 0));
    // 0x142b04: 0x8f838298  lw          $v1, -0x7D68($gp)
    ctx->pc = 0x142b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
label_142b08:
    // 0x142b08: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142b0c: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x142b0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x142b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b18: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x142b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x142b1c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x142b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x142b20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142b24: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x142b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142b28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x142b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x142b2c: 0xc057540  jal         func_15D500
    ctx->pc = 0x142B2Cu;
    SET_GPR_U32(ctx, 31, 0x142B34u);
    ctx->pc = 0x142B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B2Cu;
            // 0x142b30: 0xff8282a0  sd          $v0, -0x7D60($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B34u; }
        if (ctx->pc != 0x142B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B34u; }
        if (ctx->pc != 0x142B34u) { return; }
    }
    ctx->pc = 0x142B34u;
label_142b34:
    // 0x142b34: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b3c: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x142b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b44: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x142b48: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142b4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x142b50: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x142b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b58: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x142b58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142b5c: 0xc057540  jal         func_15D500
    ctx->pc = 0x142B5Cu;
    SET_GPR_U32(ctx, 31, 0x142B64u);
    ctx->pc = 0x142B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B5Cu;
            // 0x142b60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B64u; }
        if (ctx->pc != 0x142B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B64u; }
        if (ctx->pc != 0x142B64u) { return; }
    }
    ctx->pc = 0x142B64u;
label_142b64:
    // 0x142b64: 0xdf8782a0  ld          $a3, -0x7D60($gp)
    ctx->pc = 0x142b64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935200)));
    // 0x142b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b70: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x142b74: 0xc057540  jal         func_15D500
    ctx->pc = 0x142B74u;
    SET_GPR_U32(ctx, 31, 0x142B7Cu);
    ctx->pc = 0x142B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B74u;
            // 0x142b78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B7Cu; }
        if (ctx->pc != 0x142B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B7Cu; }
        if (ctx->pc != 0x142B7Cu) { return; }
    }
    ctx->pc = 0x142B7Cu;
label_142b7c:
    // 0x142b7c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x142b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142b80: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x142b84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x142b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142b88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x142b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x142b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142b90: 0x0  nop
    ctx->pc = 0x142b90u;
    // NOP
    // 0x142b94: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x142b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x142b98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142b9c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142B9Cu;
    {
        const bool branch_taken_0x142b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142b9c) {
            ctx->pc = 0x142BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142B9Cu;
            // 0x142ba0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142BB4u;
            goto label_142bb4;
        }
    }
    ctx->pc = 0x142BA4u;
    // 0x142ba4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142ba8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142bac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142BACu;
    {
        const bool branch_taken_0x142bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142BACu;
            // 0x142bb0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bac) {
            ctx->pc = 0x142BCCu;
            goto label_142bcc;
        }
    }
    ctx->pc = 0x142BB4u;
label_142bb4:
    // 0x142bb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142bb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142bbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142bc0: 0x0  nop
    ctx->pc = 0x142bc0u;
    // NOP
    // 0x142bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142bc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_142bcc:
    // 0x142bcc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x142bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142bd0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x142bd4: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x142bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x142bd8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x142bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142bdc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x142be0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x142be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142be8: 0x0  nop
    ctx->pc = 0x142be8u;
    // NOP
    // 0x142bec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x142becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x142bf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142bf4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142BF4u;
    {
        const bool branch_taken_0x142bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142bf4) {
            ctx->pc = 0x142BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142BF4u;
            // 0x142bf8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142C0Cu;
            goto label_142c0c;
        }
    }
    ctx->pc = 0x142BFCu;
    // 0x142bfc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142c00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142c04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142C04u;
    {
        const bool branch_taken_0x142c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C04u;
            // 0x142c08: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c04) {
            ctx->pc = 0x142C24u;
            goto label_142c24;
        }
    }
    ctx->pc = 0x142C0Cu;
label_142c0c:
    // 0x142c0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142c10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142c18: 0x0  nop
    ctx->pc = 0x142c18u;
    // NOP
    // 0x142c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142c20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_142c24:
    // 0x142c24: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x142c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142c28: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x142c2c: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x142c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x142c30: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x142c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142c34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x142c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x142c38: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x142c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142c40: 0x0  nop
    ctx->pc = 0x142c40u;
    // NOP
    // 0x142c44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x142c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x142c48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142c4c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142C4Cu;
    {
        const bool branch_taken_0x142c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142c4c) {
            ctx->pc = 0x142C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142C4Cu;
            // 0x142c50: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142C64u;
            goto label_142c64;
        }
    }
    ctx->pc = 0x142C54u;
    // 0x142c54: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142c58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142c5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142C5Cu;
    {
        const bool branch_taken_0x142c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C5Cu;
            // 0x142c60: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c5c) {
            ctx->pc = 0x142C7Cu;
            goto label_142c7c;
        }
    }
    ctx->pc = 0x142C64u;
label_142c64:
    // 0x142c64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142c68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142c6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142c70: 0x0  nop
    ctx->pc = 0x142c70u;
    // NOP
    // 0x142c74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142c78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_142c7c:
    // 0x142c7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x142c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142c80: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x142c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x142c84: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x142c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x142c88: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x142c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142c8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x142c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x142c90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x142c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142c98: 0x0  nop
    ctx->pc = 0x142c98u;
    // NOP
    // 0x142c9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x142c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x142ca0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142ca4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x142CA4u;
    {
        const bool branch_taken_0x142ca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142CA4u;
            // 0x142ca8: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ca4) {
            ctx->pc = 0x142CBCu;
            goto label_142cbc;
        }
    }
    ctx->pc = 0x142CACu;
    // 0x142cac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142cb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142cb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142CB4u;
    {
        const bool branch_taken_0x142cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142CB4u;
            // 0x142cb8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cb4) {
            ctx->pc = 0x142CD8u;
            goto label_142cd8;
        }
    }
    ctx->pc = 0x142CBCu;
label_142cbc:
    // 0x142cbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x142cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x142cc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142cc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142cc8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142ccc: 0x0  nop
    ctx->pc = 0x142cccu;
    // NOP
    // 0x142cd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_142cd8:
    // 0x142cd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x142cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x142ce0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x142ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x142ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ce8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142cec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142cf0: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x142cf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142cfc: 0xc057540  jal         func_15D500
    ctx->pc = 0x142CFCu;
    SET_GPR_U32(ctx, 31, 0x142D04u);
    ctx->pc = 0x142D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142CFCu;
            // 0x142d00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D04u; }
        if (ctx->pc != 0x142D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D04u; }
        if (ctx->pc != 0x142D04u) { return; }
    }
    ctx->pc = 0x142D04u;
label_142d04:
    // 0x142d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x142d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142d0c: 0xc05750c  jal         func_15D430
    ctx->pc = 0x142D0Cu;
    SET_GPR_U32(ctx, 31, 0x142D14u);
    ctx->pc = 0x142D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D0Cu;
            // 0x142d10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D14u; }
        if (ctx->pc != 0x142D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D14u; }
        if (ctx->pc != 0x142D14u) { return; }
    }
    ctx->pc = 0x142D14u;
label_142d14:
    // 0x142d14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x142d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x142d18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x142d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x142d1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142d20: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x142D20u;
    SET_GPR_U32(ctx, 31, 0x142D28u);
    ctx->pc = 0x142D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D20u;
            // 0x142d24: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D28u; }
        if (ctx->pc != 0x142D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D28u; }
        if (ctx->pc != 0x142D28u) { return; }
    }
    ctx->pc = 0x142D28u;
label_142d28:
    // 0x142d28: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x142D28u;
    SET_GPR_U32(ctx, 31, 0x142D30u);
    ctx->pc = 0x142D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D28u;
            // 0x142d2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D30u; }
        if (ctx->pc != 0x142D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D30u; }
        if (ctx->pc != 0x142D30u) { return; }
    }
    ctx->pc = 0x142D30u;
label_142d30:
    // 0x142d30: 0xaf8282b4  sw          $v0, -0x7D4C($gp)
    ctx->pc = 0x142d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 2));
    // 0x142d34: 0xaf8082b8  sw          $zero, -0x7D48($gp)
    ctx->pc = 0x142d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935224), GPR_U32(ctx, 0));
    // 0x142d38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x142d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x142D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D4Cu;
            // 0x142d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142D54u;
    // 0x142d54: 0x0  nop
    ctx->pc = 0x142d54u;
    // NOP
    // 0x142d58: 0x0  nop
    ctx->pc = 0x142d58u;
    // NOP
    // 0x142d5c: 0x0  nop
    ctx->pc = 0x142d5cu;
    // NOP
}
