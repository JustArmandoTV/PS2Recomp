#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00529B60
// Address: 0x529b60 - 0x529d50
void sub_00529B60_0x529b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00529B60_0x529b60");
#endif

    switch (ctx->pc) {
        case 0x529b84u: goto label_529b84;
        case 0x529ba4u: goto label_529ba4;
        case 0x529bf4u: goto label_529bf4;
        case 0x529c10u: goto label_529c10;
        case 0x529c38u: goto label_529c38;
        case 0x529c5cu: goto label_529c5c;
        case 0x529c80u: goto label_529c80;
        case 0x529ce0u: goto label_529ce0;
        case 0x529cecu: goto label_529cec;
        case 0x529cf8u: goto label_529cf8;
        case 0x529d04u: goto label_529d04;
        case 0x529d10u: goto label_529d10;
        case 0x529d1cu: goto label_529d1c;
        case 0x529d34u: goto label_529d34;
        default: break;
    }

    ctx->pc = 0x529b60u;

    // 0x529b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x529b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x529b64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x529b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x529b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x529b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x529b6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x529b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x529b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x529b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x529b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x529b78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x529b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529b7c: 0xc14a78c  jal         func_529E30
    ctx->pc = 0x529B7Cu;
    SET_GPR_U32(ctx, 31, 0x529B84u);
    ctx->pc = 0x529B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529B7Cu;
            // 0x529b80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529E30u;
    if (runtime->hasFunction(0x529E30u)) {
        auto targetFn = runtime->lookupFunction(0x529E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529B84u; }
        if (ctx->pc != 0x529B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00529E30_0x529e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529B84u; }
        if (ctx->pc != 0x529B84u) { return; }
    }
    ctx->pc = 0x529B84u;
label_529b84:
    // 0x529b84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x529b88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529b8c: 0x246367c0  addiu       $v1, $v1, 0x67C0
    ctx->pc = 0x529b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26560));
    // 0x529b90: 0x244267f8  addiu       $v0, $v0, 0x67F8
    ctx->pc = 0x529b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26616));
    // 0x529b94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x529b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x529b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x529b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529b9c: 0xc14a788  jal         func_529E20
    ctx->pc = 0x529B9Cu;
    SET_GPR_U32(ctx, 31, 0x529BA4u);
    ctx->pc = 0x529BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529B9Cu;
            // 0x529ba0: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529E20u;
    if (runtime->hasFunction(0x529E20u)) {
        auto targetFn = runtime->lookupFunction(0x529E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529BA4u; }
        if (ctx->pc != 0x529BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00529E20_0x529e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529BA4u; }
        if (ctx->pc != 0x529BA4u) { return; }
    }
    ctx->pc = 0x529BA4u;
label_529ba4:
    // 0x529ba4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x529ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x529ba8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x529ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x529bac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529bb0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x529bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x529bb4: 0x24426710  addiu       $v0, $v0, 0x6710
    ctx->pc = 0x529bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x529bb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x529bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x529bbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529bc0: 0x24426748  addiu       $v0, $v0, 0x6748
    ctx->pc = 0x529bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26440));
    // 0x529bc4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x529bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x529bc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x529bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x529bcc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x529bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x529bd0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x529bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x529bd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x529bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x529bd8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x529bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x529bdc: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x529bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x529be0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x529be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x529be4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x529be8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x529be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x529bec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x529BECu;
    SET_GPR_U32(ctx, 31, 0x529BF4u);
    ctx->pc = 0x529BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529BECu;
            // 0x529bf0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529BF4u; }
        if (ctx->pc != 0x529BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529BF4u; }
        if (ctx->pc != 0x529BF4u) { return; }
    }
    ctx->pc = 0x529BF4u;
label_529bf4:
    // 0x529bf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x529bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x529bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x529bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529bfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x529BFCu;
    {
        const bool branch_taken_0x529bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x529C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529BFCu;
            // 0x529c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529bfc) {
            ctx->pc = 0x529C14u;
            goto label_529c14;
        }
    }
    ctx->pc = 0x529C04u;
    // 0x529c04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x529c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x529c08: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x529C08u;
    SET_GPR_U32(ctx, 31, 0x529C10u);
    ctx->pc = 0x529C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529C08u;
            // 0x529c0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C10u; }
        if (ctx->pc != 0x529C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C10u; }
        if (ctx->pc != 0x529C10u) { return; }
    }
    ctx->pc = 0x529C10u;
label_529c10:
    // 0x529c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x529c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_529c14:
    // 0x529c14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x529c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x529c18: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x529c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x529c1c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x529c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x529c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x529c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x529c24: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x529c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x529c28: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x529c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x529c2c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x529c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x529c30: 0xc040140  jal         func_100500
    ctx->pc = 0x529C30u;
    SET_GPR_U32(ctx, 31, 0x529C38u);
    ctx->pc = 0x529C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529C30u;
            // 0x529c34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C38u; }
        if (ctx->pc != 0x529C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C38u; }
        if (ctx->pc != 0x529C38u) { return; }
    }
    ctx->pc = 0x529C38u;
label_529c38:
    // 0x529c38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x529C38u;
    {
        const bool branch_taken_0x529c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529c38) {
            ctx->pc = 0x529C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529C38u;
            // 0x529c3c: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529C60u;
            goto label_529c60;
        }
    }
    ctx->pc = 0x529C40u;
    // 0x529c40: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x529c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x529c44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x529c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529c48: 0x8c63b600  lw          $v1, -0x4A00($v1)
    ctx->pc = 0x529c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948352)));
    // 0x529c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x529c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529c50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x529c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x529c54: 0xc139ce8  jal         func_4E73A0
    ctx->pc = 0x529C54u;
    SET_GPR_U32(ctx, 31, 0x529C5Cu);
    ctx->pc = 0x529C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529C54u;
            // 0x529c58: 0x24650084  addiu       $a1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E73A0u;
    if (runtime->hasFunction(0x4E73A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C5Cu; }
        if (ctx->pc != 0x529C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E73A0_0x4e73a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529C5Cu; }
        if (ctx->pc != 0x529C5Cu) { return; }
    }
    ctx->pc = 0x529C5Cu;
label_529c5c:
    // 0x529c5c: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x529c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
label_529c60:
    // 0x529c60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x529c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x529c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x529c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x529c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x529c70: 0x3e00008  jr          $ra
    ctx->pc = 0x529C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529C70u;
            // 0x529c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529C78u;
    // 0x529c78: 0x0  nop
    ctx->pc = 0x529c78u;
    // NOP
    // 0x529c7c: 0x0  nop
    ctx->pc = 0x529c7cu;
    // NOP
label_529c80:
    // 0x529c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x529c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x529c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x529c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x529c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x529c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x529c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x529c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x529c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529c94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x529C94u;
    {
        const bool branch_taken_0x529c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529C94u;
            // 0x529c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529c94) {
            ctx->pc = 0x529D34u;
            goto label_529d34;
        }
    }
    ctx->pc = 0x529C9Cu;
    // 0x529c9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x529ca0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529ca4: 0x246367c0  addiu       $v1, $v1, 0x67C0
    ctx->pc = 0x529ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26560));
    // 0x529ca8: 0x244267f8  addiu       $v0, $v0, 0x67F8
    ctx->pc = 0x529ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26616));
    // 0x529cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x529cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x529cb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x529CB0u;
    {
        const bool branch_taken_0x529cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529CB0u;
            // 0x529cb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529cb0) {
            ctx->pc = 0x529D1Cu;
            goto label_529d1c;
        }
    }
    ctx->pc = 0x529CB8u;
    // 0x529cb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x529cbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x529cc0: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x529cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x529cc4: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x529cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x529cc8: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x529cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
    // 0x529ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x529cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x529cd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x529cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x529cd4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x529cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x529cd8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x529CD8u;
    SET_GPR_U32(ctx, 31, 0x529CE0u);
    ctx->pc = 0x529CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529CD8u;
            // 0x529cdc: 0x24a59330  addiu       $a1, $a1, -0x6CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CE0u; }
        if (ctx->pc != 0x529CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CE0u; }
        if (ctx->pc != 0x529CE0u) { return; }
    }
    ctx->pc = 0x529CE0u;
label_529ce0:
    // 0x529ce0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x529ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x529ce4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x529CE4u;
    SET_GPR_U32(ctx, 31, 0x529CECu);
    ctx->pc = 0x529CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529CE4u;
            // 0x529ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CECu; }
        if (ctx->pc != 0x529CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CECu; }
        if (ctx->pc != 0x529CECu) { return; }
    }
    ctx->pc = 0x529CECu;
label_529cec:
    // 0x529cec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x529cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x529cf0: 0xc14a76c  jal         func_529DB0
    ctx->pc = 0x529CF0u;
    SET_GPR_U32(ctx, 31, 0x529CF8u);
    ctx->pc = 0x529CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529CF0u;
            // 0x529cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529DB0u;
    if (runtime->hasFunction(0x529DB0u)) {
        auto targetFn = runtime->lookupFunction(0x529DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CF8u; }
        if (ctx->pc != 0x529CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00529DB0_0x529db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529CF8u; }
        if (ctx->pc != 0x529CF8u) { return; }
    }
    ctx->pc = 0x529CF8u;
label_529cf8:
    // 0x529cf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x529cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x529cfc: 0xc14a76c  jal         func_529DB0
    ctx->pc = 0x529CFCu;
    SET_GPR_U32(ctx, 31, 0x529D04u);
    ctx->pc = 0x529D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529CFCu;
            // 0x529d00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529DB0u;
    if (runtime->hasFunction(0x529DB0u)) {
        auto targetFn = runtime->lookupFunction(0x529DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D04u; }
        if (ctx->pc != 0x529D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00529DB0_0x529db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D04u; }
        if (ctx->pc != 0x529D04u) { return; }
    }
    ctx->pc = 0x529D04u;
label_529d04:
    // 0x529d04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x529d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x529d08: 0xc14a754  jal         func_529D50
    ctx->pc = 0x529D08u;
    SET_GPR_U32(ctx, 31, 0x529D10u);
    ctx->pc = 0x529D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529D08u;
            // 0x529d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529D50u;
    if (runtime->hasFunction(0x529D50u)) {
        auto targetFn = runtime->lookupFunction(0x529D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D10u; }
        if (ctx->pc != 0x529D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00529D50_0x529d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D10u; }
        if (ctx->pc != 0x529D10u) { return; }
    }
    ctx->pc = 0x529D10u;
label_529d10:
    // 0x529d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x529d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x529d14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x529D14u;
    SET_GPR_U32(ctx, 31, 0x529D1Cu);
    ctx->pc = 0x529D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529D14u;
            // 0x529d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D1Cu; }
        if (ctx->pc != 0x529D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D1Cu; }
        if (ctx->pc != 0x529D1Cu) { return; }
    }
    ctx->pc = 0x529D1Cu;
label_529d1c:
    // 0x529d1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x529d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x529d20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x529d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x529d24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x529D24u;
    {
        const bool branch_taken_0x529d24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x529d24) {
            ctx->pc = 0x529D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529D24u;
            // 0x529d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529D38u;
            goto label_529d38;
        }
    }
    ctx->pc = 0x529D2Cu;
    // 0x529d2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x529D2Cu;
    SET_GPR_U32(ctx, 31, 0x529D34u);
    ctx->pc = 0x529D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529D2Cu;
            // 0x529d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D34u; }
        if (ctx->pc != 0x529D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529D34u; }
        if (ctx->pc != 0x529D34u) { return; }
    }
    ctx->pc = 0x529D34u;
label_529d34:
    // 0x529d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x529d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_529d38:
    // 0x529d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x529d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x529d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x529d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x529d44: 0x3e00008  jr          $ra
    ctx->pc = 0x529D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529D44u;
            // 0x529d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529D4Cu;
    // 0x529d4c: 0x0  nop
    ctx->pc = 0x529d4cu;
    // NOP
}
