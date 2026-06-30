#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E65F0
// Address: 0x4e65f0 - 0x4e67e0
void sub_004E65F0_0x4e65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E65F0_0x4e65f0");
#endif

    switch (ctx->pc) {
        case 0x4e6614u: goto label_4e6614;
        case 0x4e6634u: goto label_4e6634;
        case 0x4e6680u: goto label_4e6680;
        case 0x4e669cu: goto label_4e669c;
        case 0x4e66c4u: goto label_4e66c4;
        case 0x4e66e8u: goto label_4e66e8;
        case 0x4e6710u: goto label_4e6710;
        case 0x4e6770u: goto label_4e6770;
        case 0x4e677cu: goto label_4e677c;
        case 0x4e6788u: goto label_4e6788;
        case 0x4e6794u: goto label_4e6794;
        case 0x4e67a0u: goto label_4e67a0;
        case 0x4e67acu: goto label_4e67ac;
        case 0x4e67c4u: goto label_4e67c4;
        default: break;
    }

    ctx->pc = 0x4e65f0u;

    // 0x4e65f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e65f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4e65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4e65f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e65f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e65fc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4e65fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4e6600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e6604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e6608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e6608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e660c: 0xc139a30  jal         func_4E68C0
    ctx->pc = 0x4E660Cu;
    SET_GPR_U32(ctx, 31, 0x4E6614u);
    ctx->pc = 0x4E6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E660Cu;
            // 0x4e6610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E68C0u;
    if (runtime->hasFunction(0x4E68C0u)) {
        auto targetFn = runtime->lookupFunction(0x4E68C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6614u; }
        if (ctx->pc != 0x4E6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E68C0_0x4e68c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6614u; }
        if (ctx->pc != 0x4E6614u) { return; }
    }
    ctx->pc = 0x4E6614u;
label_4e6614:
    // 0x4e6614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e6614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e6618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e661c: 0x24633ac0  addiu       $v1, $v1, 0x3AC0
    ctx->pc = 0x4e661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15040));
    // 0x4e6620: 0x24423af8  addiu       $v0, $v0, 0x3AF8
    ctx->pc = 0x4e6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15096));
    // 0x4e6624: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e6624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e6628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e6628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e662c: 0xc139a2c  jal         func_4E68B0
    ctx->pc = 0x4E662Cu;
    SET_GPR_U32(ctx, 31, 0x4E6634u);
    ctx->pc = 0x4E6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E662Cu;
            // 0x4e6630: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E68B0u;
    if (runtime->hasFunction(0x4E68B0u)) {
        auto targetFn = runtime->lookupFunction(0x4E68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6634u; }
        if (ctx->pc != 0x4E6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E68B0_0x4e68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6634u; }
        if (ctx->pc != 0x4E6634u) { return; }
    }
    ctx->pc = 0x4E6634u;
label_4e6634:
    // 0x4e6634: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e6634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4e6638: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e6638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e663c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e6640: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e6640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4e6644: 0x24423a10  addiu       $v0, $v0, 0x3A10
    ctx->pc = 0x4e6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x4e6648: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e6648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e664c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e6650: 0x24423a48  addiu       $v0, $v0, 0x3A48
    ctx->pc = 0x4e6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14920));
    // 0x4e6654: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e6654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x4e6658: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4e6658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4e665c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4e665cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x4e6660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e6660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4e6664: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4e6664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4e6668: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x4e6668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x4e666c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4e666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4e6670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4e6674: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e6674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4e6678: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4E6678u;
    SET_GPR_U32(ctx, 31, 0x4E6680u);
    ctx->pc = 0x4E667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6678u;
            // 0x4e667c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6680u; }
        if (ctx->pc != 0x4E6680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6680u; }
        if (ctx->pc != 0x4E6680u) { return; }
    }
    ctx->pc = 0x4E6680u;
label_4e6680:
    // 0x4e6680: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e6680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e6684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6688: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E6688u;
    {
        const bool branch_taken_0x4e6688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6688u;
            // 0x4e668c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6688) {
            ctx->pc = 0x4E66A0u;
            goto label_4e66a0;
        }
    }
    ctx->pc = 0x4E6690u;
    // 0x4e6690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e6690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4e6694: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4E6694u;
    SET_GPR_U32(ctx, 31, 0x4E669Cu);
    ctx->pc = 0x4E6698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6694u;
            // 0x4e6698: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E669Cu; }
        if (ctx->pc != 0x4E669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E669Cu; }
        if (ctx->pc != 0x4E669Cu) { return; }
    }
    ctx->pc = 0x4E669Cu;
label_4e669c:
    // 0x4e669c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e66a0:
    // 0x4e66a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4e66a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4e66a4: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4e66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x4e66a8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x4e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x4e66ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4e66acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4e66b0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x4e66b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e66b4: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x4e66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x4e66b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4e66b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4e66bc: 0xc040140  jal         func_100500
    ctx->pc = 0x4E66BCu;
    SET_GPR_U32(ctx, 31, 0x4E66C4u);
    ctx->pc = 0x4E66C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E66BCu;
            // 0x4e66c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E66C4u; }
        if (ctx->pc != 0x4E66C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E66C4u; }
        if (ctx->pc != 0x4E66C4u) { return; }
    }
    ctx->pc = 0x4E66C4u;
label_4e66c4:
    // 0x4e66c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E66C4u;
    {
        const bool branch_taken_0x4e66c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e66c4) {
            ctx->pc = 0x4E66C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E66C4u;
            // 0x4e66c8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E66ECu;
            goto label_4e66ec;
        }
    }
    ctx->pc = 0x4E66CCu;
    // 0x4e66cc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4e66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x4e66d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4e66d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e66d4: 0x8c63aaa0  lw          $v1, -0x5560($v1)
    ctx->pc = 0x4e66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945440)));
    // 0x4e66d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e66dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4e66dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e66e0: 0xc139ce8  jal         func_4E73A0
    ctx->pc = 0x4E66E0u;
    SET_GPR_U32(ctx, 31, 0x4E66E8u);
    ctx->pc = 0x4E66E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E66E0u;
            // 0x4e66e4: 0x24650084  addiu       $a1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E73A0u;
    if (runtime->hasFunction(0x4E73A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E66E8u; }
        if (ctx->pc != 0x4E66E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E73A0_0x4e73a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E66E8u; }
        if (ctx->pc != 0x4E66E8u) { return; }
    }
    ctx->pc = 0x4E66E8u;
label_4e66e8:
    // 0x4e66e8: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4e66e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4e66ec:
    // 0x4e66ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e66ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e66f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e66f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e66f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e66f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e66f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e66f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e66fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E66FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E66FCu;
            // 0x4e6700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6704u;
    // 0x4e6704: 0x0  nop
    ctx->pc = 0x4e6704u;
    // NOP
    // 0x4e6708: 0x0  nop
    ctx->pc = 0x4e6708u;
    // NOP
    // 0x4e670c: 0x0  nop
    ctx->pc = 0x4e670cu;
    // NOP
label_4e6710:
    // 0x4e6710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e6714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e6718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e671c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e6720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6724: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4E6724u;
    {
        const bool branch_taken_0x4e6724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6724u;
            // 0x4e6728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6724) {
            ctx->pc = 0x4E67C4u;
            goto label_4e67c4;
        }
    }
    ctx->pc = 0x4E672Cu;
    // 0x4e672c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e672cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e6730: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e6730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e6734: 0x24633ac0  addiu       $v1, $v1, 0x3AC0
    ctx->pc = 0x4e6734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15040));
    // 0x4e6738: 0x24423af8  addiu       $v0, $v0, 0x3AF8
    ctx->pc = 0x4e6738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15096));
    // 0x4e673c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e673cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e6740: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4E6740u;
    {
        const bool branch_taken_0x4e6740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6740u;
            // 0x4e6744: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6740) {
            ctx->pc = 0x4E67ACu;
            goto label_4e67ac;
        }
    }
    ctx->pc = 0x4E6748u;
    // 0x4e6748: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e6748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e674c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e6750: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x4e6750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
    // 0x4e6754: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e6754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4e6758: 0x24423aa8  addiu       $v0, $v0, 0x3AA8
    ctx->pc = 0x4e6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15016));
    // 0x4e675c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e675cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e6760: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4e6760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4e6764: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4e6764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4e6768: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4E6768u;
    SET_GPR_U32(ctx, 31, 0x4E6770u);
    ctx->pc = 0x4E676Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6768u;
            // 0x4e676c: 0x24a55a70  addiu       $a1, $a1, 0x5A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6770u; }
        if (ctx->pc != 0x4E6770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6770u; }
        if (ctx->pc != 0x4E6770u) { return; }
    }
    ctx->pc = 0x4E6770u;
label_4e6770:
    // 0x4e6770: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e6770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4e6774: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4E6774u;
    SET_GPR_U32(ctx, 31, 0x4E677Cu);
    ctx->pc = 0x4E6778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6774u;
            // 0x4e6778: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E677Cu; }
        if (ctx->pc != 0x4E677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E677Cu; }
        if (ctx->pc != 0x4E677Cu) { return; }
    }
    ctx->pc = 0x4E677Cu;
label_4e677c:
    // 0x4e677c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4e677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4e6780: 0xc139a10  jal         func_4E6840
    ctx->pc = 0x4E6780u;
    SET_GPR_U32(ctx, 31, 0x4E6788u);
    ctx->pc = 0x4E6784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6780u;
            // 0x4e6784: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6840u;
    if (runtime->hasFunction(0x4E6840u)) {
        auto targetFn = runtime->lookupFunction(0x4E6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6788u; }
        if (ctx->pc != 0x4E6788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E6840_0x4e6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6788u; }
        if (ctx->pc != 0x4E6788u) { return; }
    }
    ctx->pc = 0x4E6788u;
label_4e6788:
    // 0x4e6788: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e6788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4e678c: 0xc139a10  jal         func_4E6840
    ctx->pc = 0x4E678Cu;
    SET_GPR_U32(ctx, 31, 0x4E6794u);
    ctx->pc = 0x4E6790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E678Cu;
            // 0x4e6790: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6840u;
    if (runtime->hasFunction(0x4E6840u)) {
        auto targetFn = runtime->lookupFunction(0x4E6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6794u; }
        if (ctx->pc != 0x4E6794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E6840_0x4e6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6794u; }
        if (ctx->pc != 0x4E6794u) { return; }
    }
    ctx->pc = 0x4E6794u;
label_4e6794:
    // 0x4e6794: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4e6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4e6798: 0xc1399f8  jal         func_4E67E0
    ctx->pc = 0x4E6798u;
    SET_GPR_U32(ctx, 31, 0x4E67A0u);
    ctx->pc = 0x4E679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6798u;
            // 0x4e679c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E67E0u;
    if (runtime->hasFunction(0x4E67E0u)) {
        auto targetFn = runtime->lookupFunction(0x4E67E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67A0u; }
        if (ctx->pc != 0x4E67A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E67E0_0x4e67e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67A0u; }
        if (ctx->pc != 0x4E67A0u) { return; }
    }
    ctx->pc = 0x4E67A0u;
label_4e67a0:
    // 0x4e67a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e67a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e67a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4E67A4u;
    SET_GPR_U32(ctx, 31, 0x4E67ACu);
    ctx->pc = 0x4E67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E67A4u;
            // 0x4e67a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67ACu; }
        if (ctx->pc != 0x4E67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67ACu; }
        if (ctx->pc != 0x4E67ACu) { return; }
    }
    ctx->pc = 0x4E67ACu;
label_4e67ac:
    // 0x4e67ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e67acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4e67b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e67b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4e67b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E67B4u;
    {
        const bool branch_taken_0x4e67b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e67b4) {
            ctx->pc = 0x4E67B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E67B4u;
            // 0x4e67b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E67C8u;
            goto label_4e67c8;
        }
    }
    ctx->pc = 0x4E67BCu;
    // 0x4e67bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E67BCu;
    SET_GPR_U32(ctx, 31, 0x4E67C4u);
    ctx->pc = 0x4E67C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E67BCu;
            // 0x4e67c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67C4u; }
        if (ctx->pc != 0x4E67C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E67C4u; }
        if (ctx->pc != 0x4E67C4u) { return; }
    }
    ctx->pc = 0x4E67C4u;
label_4e67c4:
    // 0x4e67c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e67c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e67c8:
    // 0x4e67c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e67c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e67cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e67ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e67d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e67d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e67d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E67D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E67D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E67D4u;
            // 0x4e67d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E67DCu;
    // 0x4e67dc: 0x0  nop
    ctx->pc = 0x4e67dcu;
    // NOP
}
