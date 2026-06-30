#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143DE0
// Address: 0x143de0 - 0x1440b0
void sub_00143DE0_0x143de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143DE0_0x143de0");
#endif

    switch (ctx->pc) {
        case 0x143e14u: goto label_143e14;
        case 0x143e40u: goto label_143e40;
        case 0x143e68u: goto label_143e68;
        case 0x143e98u: goto label_143e98;
        case 0x143eb0u: goto label_143eb0;
        case 0x144050u: goto label_144050;
        case 0x144060u: goto label_144060;
        case 0x144074u: goto label_144074;
        case 0x144080u: goto label_144080;
        default: break;
    }

    ctx->pc = 0x143de0u;

    // 0x143de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x143de4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x143de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x143de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143df0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143df4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143df8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x143df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143e00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e0c: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x143E0Cu;
    SET_GPR_U32(ctx, 31, 0x143E14u);
    ctx->pc = 0x143E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E0Cu;
            // 0x143e10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E14u; }
        if (ctx->pc != 0x143E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E14u; }
        if (ctx->pc != 0x143E14u) { return; }
    }
    ctx->pc = 0x143E14u;
label_143e14:
    // 0x143e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143e18: 0x1643000b  bne         $s2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E18u;
            // 0x143e1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E48u;
            goto label_143e48;
        }
    }
    ctx->pc = 0x143E20u;
    // 0x143e20: 0xdf878048  ld          $a3, -0x7FB8($gp)
    ctx->pc = 0x143e20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x143e24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x143e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e2c: 0xaf8282bc  sw          $v0, -0x7D44($gp)
    ctx->pc = 0x143e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 2));
    // 0x143e30: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x143e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e38: 0xc057540  jal         func_15D500
    ctx->pc = 0x143E38u;
    SET_GPR_U32(ctx, 31, 0x143E40u);
    ctx->pc = 0x143E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E38u;
            // 0x143e3c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E40u; }
        if (ctx->pc != 0x143E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E40u; }
        if (ctx->pc != 0x143E40u) { return; }
    }
    ctx->pc = 0x143E40u;
label_143e40:
    // 0x143e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143E40u;
    {
        const bool branch_taken_0x143e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e40) {
            ctx->pc = 0x143E4Cu;
            goto label_143e4c;
        }
    }
    ctx->pc = 0x143E48u;
label_143e48:
    // 0x143e48: 0xaf8082bc  sw          $zero, -0x7D44($gp)
    ctx->pc = 0x143e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 0));
label_143e4c:
    // 0x143e4c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x143e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e54: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x143e54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x143e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e5c: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x143e60: 0xc057540  jal         func_15D500
    ctx->pc = 0x143E60u;
    SET_GPR_U32(ctx, 31, 0x143E68u);
    ctx->pc = 0x143E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E60u;
            // 0x143e64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E68u; }
        if (ctx->pc != 0x143E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E68u; }
        if (ctx->pc != 0x143E68u) { return; }
    }
    ctx->pc = 0x143E68u;
label_143e68:
    // 0x143e68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x143e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e70: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x143e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e78: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x143e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x143e7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x143e80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x143e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x143e84: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x143e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x143e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143e8c: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x143e8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x143e90: 0xc057540  jal         func_15D500
    ctx->pc = 0x143E90u;
    SET_GPR_U32(ctx, 31, 0x143E98u);
    ctx->pc = 0x143E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E90u;
            // 0x143e94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E98u; }
        if (ctx->pc != 0x143E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E98u; }
        if (ctx->pc != 0x143E98u) { return; }
    }
    ctx->pc = 0x143E98u;
label_143e98:
    // 0x143e98: 0x9f8782bc  lwu         $a3, -0x7D44($gp)
    ctx->pc = 0x143e98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x143e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ea4: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x143ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x143ea8: 0xc057540  jal         func_15D500
    ctx->pc = 0x143EA8u;
    SET_GPR_U32(ctx, 31, 0x143EB0u);
    ctx->pc = 0x143EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EA8u;
            // 0x143eac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EB0u; }
        if (ctx->pc != 0x143EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EB0u; }
        if (ctx->pc != 0x143EB0u) { return; }
    }
    ctx->pc = 0x143EB0u;
label_143eb0:
    // 0x143eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143eb4: 0x52820067  beql        $s4, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x143EB4u;
    {
        const bool branch_taken_0x143eb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x143eb4) {
            ctx->pc = 0x143EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143EB4u;
            // 0x143eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144054u;
            goto label_144054;
        }
    }
    ctx->pc = 0x143EBCu;
    // 0x143ebc: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143EBCu;
            // 0x143ec0: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x143ECCu;
            goto label_143ecc;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x143EC4u;
    {
        const bool branch_taken_0x143ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ec4) {
            ctx->pc = 0x144050u;
            goto label_144050;
        }
    }
    ctx->pc = 0x143ECCu;
label_143ecc:
    // 0x143ecc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x143ed0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143ed4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x143ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143edc: 0x0  nop
    ctx->pc = 0x143edcu;
    // NOP
    // 0x143ee0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143ee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143ee8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143EE8u;
    {
        const bool branch_taken_0x143ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143ee8) {
            ctx->pc = 0x143EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143EE8u;
            // 0x143eec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143F00u;
            goto label_143f00;
        }
    }
    ctx->pc = 0x143EF0u;
    // 0x143ef0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143ef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143ef4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143ef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143ef8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143EF8u;
    {
        const bool branch_taken_0x143ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EF8u;
            // 0x143efc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ef8) {
            ctx->pc = 0x143F18u;
            goto label_143f18;
        }
    }
    ctx->pc = 0x143F00u;
label_143f00:
    // 0x143f00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143f04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143f08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143f0c: 0x0  nop
    ctx->pc = 0x143f0cu;
    // NOP
    // 0x143f10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143f14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_143f18:
    // 0x143f18: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x143f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143f1c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x143f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x143f20: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x143f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x143f24: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x143f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x143f2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f34: 0x0  nop
    ctx->pc = 0x143f34u;
    // NOP
    // 0x143f38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143f3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f40: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143F40u;
    {
        const bool branch_taken_0x143f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143f40) {
            ctx->pc = 0x143F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143F40u;
            // 0x143f44: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143F58u;
            goto label_143f58;
        }
    }
    ctx->pc = 0x143F48u;
    // 0x143f48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143f4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143F50u;
    {
        const bool branch_taken_0x143f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F50u;
            // 0x143f54: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f50) {
            ctx->pc = 0x143F70u;
            goto label_143f70;
        }
    }
    ctx->pc = 0x143F58u;
label_143f58:
    // 0x143f58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143f5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143f60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143f64: 0x0  nop
    ctx->pc = 0x143f64u;
    // NOP
    // 0x143f68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143f6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_143f70:
    // 0x143f70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x143f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143f74: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x143f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x143f78: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x143f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x143f7c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x143f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x143f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x143f84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f8c: 0x0  nop
    ctx->pc = 0x143f8cu;
    // NOP
    // 0x143f90: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143f94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143F98u;
    {
        const bool branch_taken_0x143f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143f98) {
            ctx->pc = 0x143F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143F98u;
            // 0x143f9c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143FB0u;
            goto label_143fb0;
        }
    }
    ctx->pc = 0x143FA0u;
    // 0x143fa0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143fa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143fa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143FA8u;
    {
        const bool branch_taken_0x143fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FA8u;
            // 0x143fac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fa8) {
            ctx->pc = 0x143FC8u;
            goto label_143fc8;
        }
    }
    ctx->pc = 0x143FB0u;
label_143fb0:
    // 0x143fb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143fb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143fb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143fbc: 0x0  nop
    ctx->pc = 0x143fbcu;
    // NOP
    // 0x143fc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143fc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_143fc8:
    // 0x143fc8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x143fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143fcc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x143fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x143fd0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x143fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x143fd4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x143fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143fd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x143fdc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fe4: 0x0  nop
    ctx->pc = 0x143fe4u;
    // NOP
    // 0x143fe8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x143fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x143fec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x143fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143ff0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x143FF0u;
    {
        const bool branch_taken_0x143ff0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FF0u;
            // 0x143ff4: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff0) {
            ctx->pc = 0x144008u;
            goto label_144008;
        }
    }
    ctx->pc = 0x143FF8u;
    // 0x143ff8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143ff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143ffc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143ffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144000u;
    {
        const bool branch_taken_0x144000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144000u;
            // 0x144004: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144000) {
            ctx->pc = 0x144024u;
            goto label_144024;
        }
    }
    ctx->pc = 0x144008u;
label_144008:
    // 0x144008: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x144008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14400c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144010: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144014: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144018: 0x0  nop
    ctx->pc = 0x144018u;
    // NOP
    // 0x14401c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144020: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x144020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_144024:
    // 0x144024: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x144024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x144028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14402c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14402cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x144030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144034: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14403c: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x14403cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x144044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144048: 0xc057540  jal         func_15D500
    ctx->pc = 0x144048u;
    SET_GPR_U32(ctx, 31, 0x144050u);
    ctx->pc = 0x14404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144048u;
            // 0x14404c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144050u; }
        if (ctx->pc != 0x144050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144050u; }
        if (ctx->pc != 0x144050u) { return; }
    }
    ctx->pc = 0x144050u;
label_144050:
    // 0x144050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144054:
    // 0x144054: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144058: 0xc05750c  jal         func_15D430
    ctx->pc = 0x144058u;
    SET_GPR_U32(ctx, 31, 0x144060u);
    ctx->pc = 0x14405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144058u;
            // 0x14405c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144060u; }
        if (ctx->pc != 0x144060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144060u; }
        if (ctx->pc != 0x144060u) { return; }
    }
    ctx->pc = 0x144060u;
label_144060:
    // 0x144060: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x144064: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x144064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x144068: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14406c: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x14406Cu;
    SET_GPR_U32(ctx, 31, 0x144074u);
    ctx->pc = 0x144070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14406Cu;
            // 0x144070: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144074u; }
        if (ctx->pc != 0x144074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144074u; }
        if (ctx->pc != 0x144074u) { return; }
    }
    ctx->pc = 0x144074u;
label_144074:
    // 0x144074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144078: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x144078u;
    SET_GPR_U32(ctx, 31, 0x144080u);
    ctx->pc = 0x14407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144078u;
            // 0x14407c: 0xaf9482c0  sw          $s4, -0x7D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935232), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144080u; }
        if (ctx->pc != 0x144080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144080u; }
        if (ctx->pc != 0x144080u) { return; }
    }
    ctx->pc = 0x144080u;
label_144080:
    // 0x144080: 0xaf8282c4  sw          $v0, -0x7D3C($gp)
    ctx->pc = 0x144080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 2));
    // 0x144084: 0xaf8082c8  sw          $zero, -0x7D38($gp)
    ctx->pc = 0x144084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935240), GPR_U32(ctx, 0));
    // 0x144088: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x144088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14408c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14408cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14409c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14409cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1440a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1440A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1440A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440A0u;
            // 0x1440a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1440A8u;
    // 0x1440a8: 0x0  nop
    ctx->pc = 0x1440a8u;
    // NOP
    // 0x1440ac: 0x0  nop
    ctx->pc = 0x1440acu;
    // NOP
}
