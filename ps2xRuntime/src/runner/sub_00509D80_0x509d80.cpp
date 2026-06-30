#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509D80
// Address: 0x509d80 - 0x509eb0
void sub_00509D80_0x509d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509D80_0x509d80");
#endif

    switch (ctx->pc) {
        case 0x509ddcu: goto label_509ddc;
        case 0x509df8u: goto label_509df8;
        case 0x509e70u: goto label_509e70;
        case 0x509e8cu: goto label_509e8c;
        default: break;
    }

    ctx->pc = 0x509d80u;

    // 0x509d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x509d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x509d84: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x509d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x509d88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x509d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x509d8c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x509d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x509d90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x509d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x509d94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x509d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x509d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x509d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x509d9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x509d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x509da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x509da4: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x509da4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x509da8: 0xae200dc0  sw          $zero, 0xDC0($s1)
    ctx->pc = 0x509da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3520), GPR_U32(ctx, 0));
    // 0x509dac: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x509dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
    // 0x509db0: 0xae200dcc  sw          $zero, 0xDCC($s1)
    ctx->pc = 0x509db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
    // 0x509db4: 0xae200dd0  sw          $zero, 0xDD0($s1)
    ctx->pc = 0x509db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3536), GPR_U32(ctx, 0));
    // 0x509db8: 0xae200dd4  sw          $zero, 0xDD4($s1)
    ctx->pc = 0x509db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 0));
    // 0x509dbc: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x509dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
    // 0x509dc0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x509dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x509dc4: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x509dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x509dc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x509dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x509dcc: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x509dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x509dd0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x509dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x509dd4: 0xc0a545c  jal         func_295170
    ctx->pc = 0x509DD4u;
    SET_GPR_U32(ctx, 31, 0x509DDCu);
    ctx->pc = 0x509DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509DD4u;
            // 0x509dd8: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509DDCu; }
        if (ctx->pc != 0x509DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509DDCu; }
        if (ctx->pc != 0x509DDCu) { return; }
    }
    ctx->pc = 0x509DDCu;
label_509ddc:
    // 0x509ddc: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x509ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
    // 0x509de0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x509de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x509de4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x509de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x509de8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x509de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x509dec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x509decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x509df0: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x509DF0u;
    SET_GPR_U32(ctx, 31, 0x509DF8u);
    ctx->pc = 0x509DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509DF0u;
            // 0x509df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509DF8u; }
        if (ctx->pc != 0x509DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509DF8u; }
        if (ctx->pc != 0x509DF8u) { return; }
    }
    ctx->pc = 0x509DF8u;
label_509df8:
    // 0x509df8: 0x8e470064  lw          $a3, 0x64($s2)
    ctx->pc = 0x509df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x509dfc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x509dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x509e00: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x509e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x509e04: 0x24a52960  addiu       $a1, $a1, 0x2960
    ctx->pc = 0x509e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
    // 0x509e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x509e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x509e0c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x509e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x509e10: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x509e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x509e14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x509e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x509e18: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x509e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x509e1c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x509e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x509e20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x509e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x509e24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x509e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x509e28: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x509e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x509e2c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x509e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x509e30: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x509e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x509e34: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x509e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x509e38: 0xa2400074  sb          $zero, 0x74($s2)
    ctx->pc = 0x509e38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x509e3c: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x509e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x509e40: 0x2490005c  addiu       $s0, $a0, 0x5C
    ctx->pc = 0x509e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x509e44: 0x808400c6  lb          $a0, 0xC6($a0)
    ctx->pc = 0x509e44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x509e48: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x509E48u;
    {
        const bool branch_taken_0x509e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x509e48) {
            ctx->pc = 0x509E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509E48u;
            // 0x509e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509E68u;
            goto label_509e68;
        }
    }
    ctx->pc = 0x509E50u;
    // 0x509e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x509e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x509e54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x509E54u;
    {
        const bool branch_taken_0x509e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x509e54) {
            ctx->pc = 0x509E64u;
            goto label_509e64;
        }
    }
    ctx->pc = 0x509E5Cu;
    // 0x509e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x509E5Cu;
    {
        const bool branch_taken_0x509e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509E5Cu;
            // 0x509e60: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509e5c) {
            ctx->pc = 0x509E90u;
            goto label_509e90;
        }
    }
    ctx->pc = 0x509E64u;
label_509e64:
    // 0x509e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509e68:
    // 0x509e68: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x509E68u;
    SET_GPR_U32(ctx, 31, 0x509E70u);
    ctx->pc = 0x509E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509E68u;
            // 0x509e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509E70u; }
        if (ctx->pc != 0x509E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509E70u; }
        if (ctx->pc != 0x509E70u) { return; }
    }
    ctx->pc = 0x509E70u;
label_509e70:
    // 0x509e70: 0x8202006a  lb          $v0, 0x6A($s0)
    ctx->pc = 0x509e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x509e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x509e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x509e78: 0x822611aa  lb          $a2, 0x11AA($s1)
    ctx->pc = 0x509e78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x509e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509e80: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x509e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509e84: 0xc0762b4  jal         func_1D8AD0
    ctx->pc = 0x509E84u;
    SET_GPR_U32(ctx, 31, 0x509E8Cu);
    ctx->pc = 0x509E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509E84u;
            // 0x509e88: 0x24470026  addiu       $a3, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509E8Cu; }
        if (ctx->pc != 0x509E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509E8Cu; }
        if (ctx->pc != 0x509E8Cu) { return; }
    }
    ctx->pc = 0x509E8Cu;
label_509e8c:
    // 0x509e8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x509e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_509e90:
    // 0x509e90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x509e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x509e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x509e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x509e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x509e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x509e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x509EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509EA0u;
            // 0x509ea4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509EA8u;
    // 0x509ea8: 0x0  nop
    ctx->pc = 0x509ea8u;
    // NOP
    // 0x509eac: 0x0  nop
    ctx->pc = 0x509eacu;
    // NOP
}
