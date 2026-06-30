#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A60
// Address: 0x3c3a60 - 0x3c3e10
void sub_003C3A60_0x3c3a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A60_0x3c3a60");
#endif

    switch (ctx->pc) {
        case 0x3c3a9cu: goto label_3c3a9c;
        case 0x3c3ab4u: goto label_3c3ab4;
        case 0x3c3b38u: goto label_3c3b38;
        case 0x3c3b94u: goto label_3c3b94;
        case 0x3c3c3cu: goto label_3c3c3c;
        case 0x3c3c54u: goto label_3c3c54;
        case 0x3c3c70u: goto label_3c3c70;
        case 0x3c3c8cu: goto label_3c3c8c;
        case 0x3c3c9cu: goto label_3c3c9c;
        case 0x3c3ca4u: goto label_3c3ca4;
        case 0x3c3cb0u: goto label_3c3cb0;
        case 0x3c3d54u: goto label_3c3d54;
        case 0x3c3d84u: goto label_3c3d84;
        case 0x3c3d94u: goto label_3c3d94;
        case 0x3c3dc4u: goto label_3c3dc4;
        default: break;
    }

    ctx->pc = 0x3c3a60u;

    // 0x3c3a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c3a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3a68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c3a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c3a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c3a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3a78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c3a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3a80: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3c3a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3a84: 0xae400dd8  sw          $zero, 0xDD8($s2)
    ctx->pc = 0x3c3a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3544), GPR_U32(ctx, 0));
    // 0x3c3a88: 0x26510580  addiu       $s1, $s2, 0x580
    ctx->pc = 0x3c3a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3c3a8c: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x3c3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3a90: 0xe6400de0  swc1        $f0, 0xDE0($s2)
    ctx->pc = 0x3c3a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3552), bits); }
    // 0x3c3a94: 0xc077fb0  jal         func_1DFEC0
    ctx->pc = 0x3C3A94u;
    SET_GPR_U32(ctx, 31, 0x3C3A9Cu);
    ctx->pc = 0x3C3A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A94u;
            // 0x3c3a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3A9Cu; }
        if (ctx->pc != 0x3C3A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3A9Cu; }
        if (ctx->pc != 0x3C3A9Cu) { return; }
    }
    ctx->pc = 0x3C3A9Cu;
label_3c3a9c:
    // 0x3c3a9c: 0x8e420d74  lw          $v0, 0xD74($s2)
    ctx->pc = 0x3c3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
    // 0x3c3aa0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3c3aa4: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x3c3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x3c3aa8: 0x24a58470  addiu       $a1, $a1, -0x7B90
    ctx->pc = 0x3c3aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
    // 0x3c3aac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C3AACu;
    SET_GPR_U32(ctx, 31, 0x3C3AB4u);
    ctx->pc = 0x3C3AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3AACu;
            // 0x3c3ab0: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3AB4u; }
        if (ctx->pc != 0x3C3AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3AB4u; }
        if (ctx->pc != 0x3C3AB4u) { return; }
    }
    ctx->pc = 0x3C3AB4u;
label_3c3ab4:
    // 0x3c3ab4: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x3c3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x3c3ab8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3abc: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x3c3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x3c3ac0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3c3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c3ac4: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x3c3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x3c3ac8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3c3acc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3c3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3c3ad0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3AD0u;
    {
        const bool branch_taken_0x3c3ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c3ad0) {
            ctx->pc = 0x3C3AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3AD0u;
            // 0x3c3ad4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3AE8u;
            goto label_3c3ae8;
        }
    }
    ctx->pc = 0x3C3AD8u;
    // 0x3c3ad8: 0xa60000c0  sh          $zero, 0xC0($s0)
    ctx->pc = 0x3c3ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c3adc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c3adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3ae0: 0xa60300c4  sh          $v1, 0xC4($s0)
    ctx->pc = 0x3c3ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3ae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c3ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3ae8:
    // 0x3c3ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c3ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c3aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c3af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3af4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3AF4u;
            // 0x3c3af8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3AFCu;
    // 0x3c3afc: 0x0  nop
    ctx->pc = 0x3c3afcu;
    // NOP
    // 0x3c3b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c3b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c3b0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3b14: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3c3b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c3b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3c3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c3b20: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x3c3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x3c3b24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c3b28: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x3c3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x3c3b2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3c3b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b30: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x3C3B30u;
    SET_GPR_U32(ctx, 31, 0x3C3B38u);
    ctx->pc = 0x3C3B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3B30u;
            // 0x3c3b34: 0xac600dc4  sw          $zero, 0xDC4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3B38u; }
        if (ctx->pc != 0x3C3B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3B38u; }
        if (ctx->pc != 0x3C3B38u) { return; }
    }
    ctx->pc = 0x3C3B38u;
label_3c3b38:
    // 0x3c3b38: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x3c3b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x3c3b3c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3b40: 0xa20001bc  sb          $zero, 0x1BC($s0)
    ctx->pc = 0x3c3b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3b44: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3c3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c3b48: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3c3b4c: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3c3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3c3b50: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3B50u;
    {
        const bool branch_taken_0x3c3b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c3b50) {
            ctx->pc = 0x3C3B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3B50u;
            // 0x3c3b54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3B68u;
            goto label_3c3b68;
        }
    }
    ctx->pc = 0x3C3B58u;
    // 0x3c3b58: 0xa60000c0  sh          $zero, 0xC0($s0)
    ctx->pc = 0x3c3b58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c3b5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3b60: 0xa60300c4  sh          $v1, 0xC4($s0)
    ctx->pc = 0x3c3b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3b68:
    // 0x3c3b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c3b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3B6Cu;
            // 0x3c3b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3B74u;
    // 0x3c3b74: 0x0  nop
    ctx->pc = 0x3c3b74u;
    // NOP
    // 0x3c3b78: 0x0  nop
    ctx->pc = 0x3c3b78u;
    // NOP
    // 0x3c3b7c: 0x0  nop
    ctx->pc = 0x3c3b7cu;
    // NOP
    // 0x3c3b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c3b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c3b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3b8c: 0xc0eea1c  jal         func_3BA870
    ctx->pc = 0x3C3B8Cu;
    SET_GPR_U32(ctx, 31, 0x3C3B94u);
    ctx->pc = 0x3C3B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3B8Cu;
            // 0x3c3b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA870u;
    if (runtime->hasFunction(0x3BA870u)) {
        auto targetFn = runtime->lookupFunction(0x3BA870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3B94u; }
        if (ctx->pc != 0x3C3B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA870_0x3ba870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3B94u; }
        if (ctx->pc != 0x3C3B94u) { return; }
    }
    ctx->pc = 0x3C3B94u;
label_3c3b94:
    // 0x3c3b94: 0xa60000c0  sh          $zero, 0xC0($s0)
    ctx->pc = 0x3c3b94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c3b98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3b9c: 0xa60300c4  sh          $v1, 0xC4($s0)
    ctx->pc = 0x3c3b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3ba0: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x3c3ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x3c3ba4: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x3c3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x3c3ba8: 0x3c033f94  lui         $v1, 0x3F94
    ctx->pc = 0x3c3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
    // 0x3c3bac: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x3c3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x3c3bb0: 0x346625ed  ori         $a2, $v1, 0x25ED
    ctx->pc = 0x3c3bb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9709);
    // 0x3c3bb4: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x3c3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x3c3bb8: 0x3c033e88  lui         $v1, 0x3E88
    ctx->pc = 0x3c3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16008 << 16));
    // 0x3c3bbc: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x3c3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x3c3bc0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3c3bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c3bc4: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x3c3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x3c3bc8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3c3bcc: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x3c3bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x3c3bd0: 0xc4608400  lwc1        $f0, -0x7C00($v1)
    ctx->pc = 0x3c3bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3bd4: 0xa20001bc  sb          $zero, 0x1BC($s0)
    ctx->pc = 0x3c3bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3bd8: 0xae0601c0  sw          $a2, 0x1C0($s0)
    ctx->pc = 0x3c3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 6));
    // 0x3c3bdc: 0xae0501c4  sw          $a1, 0x1C4($s0)
    ctx->pc = 0x3c3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 5));
    // 0x3c3be0: 0xae0401c8  sw          $a0, 0x1C8($s0)
    ctx->pc = 0x3c3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 4));
    // 0x3c3be4: 0xe60001cc  swc1        $f0, 0x1CC($s0)
    ctx->pc = 0x3c3be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
    // 0x3c3be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c3be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c3becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3BF0u;
            // 0x3c3bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3BF8u;
    // 0x3c3bf8: 0x0  nop
    ctx->pc = 0x3c3bf8u;
    // NOP
    // 0x3c3bfc: 0x0  nop
    ctx->pc = 0x3c3bfcu;
    // NOP
    // 0x3c3c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c3c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c3c04: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x3c3c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c3c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c3c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c3c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c3c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c3c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c3c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c3c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3c20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c3c24: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3c3c24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3c28: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x3c3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
    // 0x3c3c2c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3c3c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3c3c30: 0xae220db8  sw          $v0, 0xDB8($s1)
    ctx->pc = 0x3c3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
    // 0x3c3c34: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x3c3c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
    // 0x3c3c38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3c3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3c3c3c:
    // 0x3c3c3c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3c3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x3c3c40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c3c44: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3c3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x3c3c48: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3c3c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c3c4c: 0xc0a545c  jal         func_295170
    ctx->pc = 0x3C3C4Cu;
    SET_GPR_U32(ctx, 31, 0x3C3C54u);
    ctx->pc = 0x3C3C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3C4Cu;
            // 0x3c3c50: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C54u; }
        if (ctx->pc != 0x3C3C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C54u; }
        if (ctx->pc != 0x3C3C54u) { return; }
    }
    ctx->pc = 0x3C3C54u;
label_3c3c54:
    // 0x3c3c54: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x3c3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
    // 0x3c3c58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3c3c5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3c3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c3c60: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3c3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3c3c64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3c3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3c3c68: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x3C3C68u;
    SET_GPR_U32(ctx, 31, 0x3C3C70u);
    ctx->pc = 0x3C3C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3C68u;
            // 0x3c3c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C70u; }
        if (ctx->pc != 0x3C3C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C70u; }
        if (ctx->pc != 0x3C3C70u) { return; }
    }
    ctx->pc = 0x3C3C70u;
label_3c3c70:
    // 0x3c3c70: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3c3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3c3c74: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3c3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3c3c78: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3c3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3c7c: 0xae230db8  sw          $v1, 0xDB8($s1)
    ctx->pc = 0x3c3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 3));
    // 0x3c3c80: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x3c3c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
    // 0x3c3c84: 0xc0bdf08  jal         func_2F7C20
    ctx->pc = 0x3C3C84u;
    SET_GPR_U32(ctx, 31, 0x3C3C8Cu);
    ctx->pc = 0x3C3C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3C84u;
            // 0x3c3c88: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C20u;
    if (runtime->hasFunction(0x2F7C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F7C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C8Cu; }
        if (ctx->pc != 0x3C3C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7C20_0x2f7c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C8Cu; }
        if (ctx->pc != 0x3C3C8Cu) { return; }
    }
    ctx->pc = 0x3C3C8Cu;
label_3c3c8c:
    // 0x3c3c8c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c3c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3c3c90: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x3c3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x3c3c94: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C3C94u;
    SET_GPR_U32(ctx, 31, 0x3C3C9Cu);
    ctx->pc = 0x3C3C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3C94u;
            // 0x3c3c98: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C9Cu; }
        if (ctx->pc != 0x3C3C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3C9Cu; }
        if (ctx->pc != 0x3C3C9Cu) { return; }
    }
    ctx->pc = 0x3C3C9Cu;
label_3c3c9c:
    // 0x3c3c9c: 0xc0eeb1c  jal         func_3BAC70
    ctx->pc = 0x3C3C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C3CA4u);
    ctx->pc = 0x3C3CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3C9Cu;
            // 0x3c3ca0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3CA4u; }
        if (ctx->pc != 0x3C3CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3CA4u; }
        if (ctx->pc != 0x3C3CA4u) { return; }
    }
    ctx->pc = 0x3C3CA4u;
label_3c3ca4:
    // 0x3c3ca4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3c3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c3ca8: 0xc0eec24  jal         func_3BB090
    ctx->pc = 0x3C3CA8u;
    SET_GPR_U32(ctx, 31, 0x3C3CB0u);
    ctx->pc = 0x3C3CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3CA8u;
            // 0x3c3cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3CB0u; }
        if (ctx->pc != 0x3C3CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3CB0u; }
        if (ctx->pc != 0x3C3CB0u) { return; }
    }
    ctx->pc = 0x3C3CB0u;
label_3c3cb0:
    // 0x3c3cb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c3cb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c3cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3cbc: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x3c3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x3c3cc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c3cc4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x3c3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x3c3cc8: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x3c3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x3c3ccc: 0xa24001bc  sb          $zero, 0x1BC($s2)
    ctx->pc = 0x3c3cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 444), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3cd0: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x3c3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
    // 0x3c3cd4: 0xc6210af0  lwc1        $f1, 0xAF0($s1)
    ctx->pc = 0x3c3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c3cd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c3cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c3cdc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c3cdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3ce0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3CE0u;
    {
        const bool branch_taken_0x3c3ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3ce0) {
            ctx->pc = 0x3C3CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3CE0u;
            // 0x3c3ce4: 0xc6210af8  lwc1        $f1, 0xAF8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D00u;
            goto label_3c3d00;
        }
    }
    ctx->pc = 0x3C3CE8u;
    // 0x3c3ce8: 0x8e240afc  lw          $a0, 0xAFC($s1)
    ctx->pc = 0x3c3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2812)));
    // 0x3c3cec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3c3cf0: 0x2484038e  addiu       $a0, $a0, 0x38E
    ctx->pc = 0x3c3cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 910));
    // 0x3c3cf4: 0xae240afc  sw          $a0, 0xAFC($s1)
    ctx->pc = 0x3c3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2812), GPR_U32(ctx, 4));
    // 0x3c3cf8: 0xae230b14  sw          $v1, 0xB14($s1)
    ctx->pc = 0x3c3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2836), GPR_U32(ctx, 3));
    // 0x3c3cfc: 0xc6210af8  lwc1        $f1, 0xAF8($s1)
    ctx->pc = 0x3c3cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c3d00:
    // 0x3c3d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3d04: 0x0  nop
    ctx->pc = 0x3c3d04u;
    // NOP
    // 0x3c3d08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c3d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c3d0c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c3d0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3d10: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3D10u;
    {
        const bool branch_taken_0x3c3d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3d10) {
            ctx->pc = 0x3C3D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D10u;
            // 0x3c3d14: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D28u;
            goto label_3c3d28;
        }
    }
    ctx->pc = 0x3C3D18u;
    // 0x3c3d18: 0x8e230b04  lw          $v1, 0xB04($s1)
    ctx->pc = 0x3c3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2820)));
    // 0x3c3d1c: 0x2463038e  addiu       $v1, $v1, 0x38E
    ctx->pc = 0x3c3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 910));
    // 0x3c3d20: 0xae230b04  sw          $v1, 0xB04($s1)
    ctx->pc = 0x3c3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2820), GPR_U32(ctx, 3));
    // 0x3c3d24: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x3c3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3c3d28:
    // 0x3c3d28: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3c3d28u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3c3d2c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3D2Cu;
    {
        const bool branch_taken_0x3c3d2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C3D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D2Cu;
            // 0x3c3d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d2c) {
            ctx->pc = 0x3C3D44u;
            goto label_3c3d44;
        }
    }
    ctx->pc = 0x3C3D34u;
    // 0x3c3d34: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3c3d34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c3d38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3D38u;
    {
        const bool branch_taken_0x3c3d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d38) {
            ctx->pc = 0x3C3D44u;
            goto label_3c3d44;
        }
    }
    ctx->pc = 0x3C3D40u;
    // 0x3c3d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3d44:
    // 0x3c3d44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3D44u;
    {
        const bool branch_taken_0x3c3d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d44) {
            ctx->pc = 0x3C3D60u;
            goto label_3c3d60;
        }
    }
    ctx->pc = 0x3C3D4Cu;
    // 0x3c3d4c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3C3D4Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D54u);
    ctx->pc = 0x3C3D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D4Cu;
            // 0x3c3d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D54u; }
        if (ctx->pc != 0x3C3D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D54u; }
        if (ctx->pc != 0x3C3D54u) { return; }
    }
    ctx->pc = 0x3C3D54u;
label_3c3d54:
    // 0x3c3d54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3D54u;
    {
        const bool branch_taken_0x3c3d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d54) {
            ctx->pc = 0x3C3D60u;
            goto label_3c3d60;
        }
    }
    ctx->pc = 0x3C3D5Cu;
    // 0x3c3d5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c3d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3d60:
    // 0x3c3d60: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3D60u;
    {
        const bool branch_taken_0x3c3d60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d60) {
            ctx->pc = 0x3C3D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D60u;
            // 0x3c3d64: 0x9224006c  lbu         $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D7Cu;
            goto label_3c3d7c;
        }
    }
    ctx->pc = 0x3C3D68u;
    // 0x3c3d68: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3c3d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x3c3d6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c3d70: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3D70u;
    {
        const bool branch_taken_0x3c3d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3d70) {
            ctx->pc = 0x3C3D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D70u;
            // 0x3c3d74: 0x8e230e38  lw          $v1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D98u;
            goto label_3c3d98;
        }
    }
    ctx->pc = 0x3C3D78u;
    // 0x3c3d78: 0x9224006c  lbu         $a0, 0x6C($s1)
    ctx->pc = 0x3c3d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_3c3d7c:
    // 0x3c3d7c: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x3C3D7Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D84u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D84u; }
        if (ctx->pc != 0x3C3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D84u; }
        if (ctx->pc != 0x3C3D84u) { return; }
    }
    ctx->pc = 0x3C3D84u;
label_3c3d84:
    // 0x3c3d84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3D84u;
    {
        const bool branch_taken_0x3c3d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d84) {
            ctx->pc = 0x3C3D94u;
            goto label_3c3d94;
        }
    }
    ctx->pc = 0x3C3D8Cu;
    // 0x3c3d8c: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x3C3D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D94u);
    ctx->pc = 0x3C3D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D8Cu;
            // 0x3c3d90: 0x9224006c  lbu         $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D94u; }
        if (ctx->pc != 0x3C3D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3D94u; }
        if (ctx->pc != 0x3C3D94u) { return; }
    }
    ctx->pc = 0x3C3D94u;
label_3c3d94:
    // 0x3c3d94: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x3c3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_3c3d98:
    // 0x3c3d98: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3c3d98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3c3d9c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3D9Cu;
    {
        const bool branch_taken_0x3c3d9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3D9Cu;
            // 0x3c3da0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d9c) {
            ctx->pc = 0x3C3DB4u;
            goto label_3c3db4;
        }
    }
    ctx->pc = 0x3C3DA4u;
    // 0x3c3da4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3c3da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c3da8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3DA8u;
    {
        const bool branch_taken_0x3c3da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3da8) {
            ctx->pc = 0x3C3DB4u;
            goto label_3c3db4;
        }
    }
    ctx->pc = 0x3C3DB0u;
    // 0x3c3db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3db4:
    // 0x3c3db4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3DB4u;
    {
        const bool branch_taken_0x3c3db4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3db4) {
            ctx->pc = 0x3C3DD0u;
            goto label_3c3dd0;
        }
    }
    ctx->pc = 0x3C3DBCu;
    // 0x3c3dbc: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3C3DBCu;
    SET_GPR_U32(ctx, 31, 0x3C3DC4u);
    ctx->pc = 0x3C3DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3DBCu;
            // 0x3c3dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3DC4u; }
        if (ctx->pc != 0x3C3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3DC4u; }
        if (ctx->pc != 0x3C3DC4u) { return; }
    }
    ctx->pc = 0x3C3DC4u;
label_3c3dc4:
    // 0x3c3dc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3DC4u;
    {
        const bool branch_taken_0x3c3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3dc4) {
            ctx->pc = 0x3C3DD0u;
            goto label_3c3dd0;
        }
    }
    ctx->pc = 0x3C3DCCu;
    // 0x3c3dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c3dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3dd0:
    // 0x3c3dd0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3DD0u;
    {
        const bool branch_taken_0x3c3dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3dd0) {
            ctx->pc = 0x3C3DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3DD0u;
            // 0x3c3dd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3DF0u;
            goto label_3c3df0;
        }
    }
    ctx->pc = 0x3C3DD8u;
    // 0x3c3dd8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3ddc: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x3c3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
    // 0x3c3de0: 0x8c633e58  lw          $v1, 0x3E58($v1)
    ctx->pc = 0x3c3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15960)));
    // 0x3c3de4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c3de8: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x3c3de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c3decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c3df0:
    // 0x3c3df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c3df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c3df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c3df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c3dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3e00: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3E00u;
            // 0x3c3e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3E08u;
    // 0x3c3e08: 0x0  nop
    ctx->pc = 0x3c3e08u;
    // NOP
    // 0x3c3e0c: 0x0  nop
    ctx->pc = 0x3c3e0cu;
    // NOP
}
