#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172168
// Address: 0x172168 - 0x1725d0
void sub_00172168_0x172168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172168_0x172168");
#endif

    switch (ctx->pc) {
        case 0x172194u: goto label_172194;
        case 0x1721b0u: goto label_1721b0;
        case 0x1721bcu: goto label_1721bc;
        case 0x1721d4u: goto label_1721d4;
        case 0x1721e4u: goto label_1721e4;
        case 0x1721fcu: goto label_1721fc;
        case 0x172204u: goto label_172204;
        case 0x17222cu: goto label_17222c;
        case 0x172250u: goto label_172250;
        case 0x172294u: goto label_172294;
        case 0x1722b0u: goto label_1722b0;
        case 0x172308u: goto label_172308;
        case 0x172318u: goto label_172318;
        case 0x172358u: goto label_172358;
        case 0x172380u: goto label_172380;
        case 0x172428u: goto label_172428;
        case 0x172434u: goto label_172434;
        case 0x172478u: goto label_172478;
        case 0x172484u: goto label_172484;
        case 0x1724c8u: goto label_1724c8;
        case 0x1724d4u: goto label_1724d4;
        case 0x1725b4u: goto label_1725b4;
        case 0x1725bcu: goto label_1725bc;
        default: break;
    }

    ctx->pc = 0x172168u;

    // 0x172168: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17216c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17216cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172170: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x172170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x172174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17217c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17217cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172188: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17218c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17218Cu;
            // 0x172190: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172194u; }
        if (ctx->pc != 0x172194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172194u; }
        if (ctx->pc != 0x172194u) { return; }
    }
    ctx->pc = 0x172194u;
label_172194:
    // 0x172194: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x172198: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x17219c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x17219cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x1721a0: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1721a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1721a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1721a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721a8: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1721A8u;
    SET_GPR_U32(ctx, 31, 0x1721B0u);
    ctx->pc = 0x1721ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721A8u;
            // 0x1721ac: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721B0u; }
        if (ctx->pc != 0x1721B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721B0u; }
        if (ctx->pc != 0x1721B0u) { return; }
    }
    ctx->pc = 0x1721B0u;
label_1721b0:
    // 0x1721b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1721b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721b4: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x1721B4u;
    SET_GPR_U32(ctx, 31, 0x1721BCu);
    ctx->pc = 0x1721B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721B4u;
            // 0x1721b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (runtime->hasFunction(0x179B88u)) {
        auto targetFn = runtime->lookupFunction(0x179B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721BCu; }
        if (ctx->pc != 0x1721BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179B88_0x179b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721BCu; }
        if (ctx->pc != 0x1721BCu) { return; }
    }
    ctx->pc = 0x1721BCu;
label_1721bc:
    // 0x1721bc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1721bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1721c0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1721c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721c8: 0x24844050  addiu       $a0, $a0, 0x4050
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16464));
    // 0x1721cc: 0xc05e100  jal         func_178400
    ctx->pc = 0x1721CCu;
    SET_GPR_U32(ctx, 31, 0x1721D4u);
    ctx->pc = 0x1721D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721CCu;
            // 0x1721d0: 0x24a512b0  addiu       $a1, $a1, 0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178400u;
    if (runtime->hasFunction(0x178400u)) {
        auto targetFn = runtime->lookupFunction(0x178400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721D4u; }
        if (ctx->pc != 0x1721D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178400_0x178400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721D4u; }
        if (ctx->pc != 0x1721D4u) { return; }
    }
    ctx->pc = 0x1721D4u;
label_1721d4:
    // 0x1721d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1721d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1721d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721dc: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x1721DCu;
    SET_GPR_U32(ctx, 31, 0x1721E4u);
    ctx->pc = 0x1721E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721DCu;
            // 0x1721e0: 0x3c100063  lui         $s0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (runtime->hasFunction(0x179B88u)) {
        auto targetFn = runtime->lookupFunction(0x179B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721E4u; }
        if (ctx->pc != 0x1721E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179B88_0x179b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721E4u; }
        if (ctx->pc != 0x1721E4u) { return; }
    }
    ctx->pc = 0x1721E4u;
label_1721e4:
    // 0x1721e4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1721e8: 0x26104058  addiu       $s0, $s0, 0x4058
    ctx->pc = 0x1721e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16472));
    // 0x1721ec: 0x24a5c8d8  addiu       $a1, $a1, -0x3728
    ctx->pc = 0x1721ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953176));
    // 0x1721f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f4: 0xc05e100  jal         func_178400
    ctx->pc = 0x1721F4u;
    SET_GPR_U32(ctx, 31, 0x1721FCu);
    ctx->pc = 0x1721F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721F4u;
            // 0x1721f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178400u;
    if (runtime->hasFunction(0x178400u)) {
        auto targetFn = runtime->lookupFunction(0x178400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721FCu; }
        if (ctx->pc != 0x1721FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178400_0x178400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721FCu; }
        if (ctx->pc != 0x1721FCu) { return; }
    }
    ctx->pc = 0x1721FCu;
label_1721fc:
    // 0x1721fc: 0xc05e1cc  jal         func_178730
    ctx->pc = 0x1721FCu;
    SET_GPR_U32(ctx, 31, 0x172204u);
    ctx->pc = 0x172200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721FCu;
            // 0x172200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178730u;
    if (runtime->hasFunction(0x178730u)) {
        auto targetFn = runtime->lookupFunction(0x178730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172204u; }
        if (ctx->pc != 0x172204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178730_0x178730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172204u; }
        if (ctx->pc != 0x172204u) { return; }
    }
    ctx->pc = 0x172204u;
label_172204:
    // 0x172204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17220c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17220cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172210: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x172210u;
    {
        const bool branch_taken_0x172210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172210u;
            // 0x172214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172210) {
            ctx->pc = 0x172248u;
            goto label_172248;
        }
    }
    ctx->pc = 0x172218u;
    // 0x172218: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x172218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17221c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x17221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x172220: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x172220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x172224: 0xc05f86e  jal         func_17E1B8
    ctx->pc = 0x172224u;
    SET_GPR_U32(ctx, 31, 0x17222Cu);
    ctx->pc = 0x172228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172224u;
            // 0x172228: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1B8u;
    if (runtime->hasFunction(0x17E1B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17222Cu; }
        if (ctx->pc != 0x17222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E1B8_0x17e1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17222Cu; }
        if (ctx->pc != 0x17222Cu) { return; }
    }
    ctx->pc = 0x17222Cu;
label_17222c:
    // 0x17222c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17223c: 0x805f876  j           func_17E1D8
    ctx->pc = 0x17223Cu;
    ctx->pc = 0x172240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17223Cu;
            // 0x172240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D8u;
    if (runtime->hasFunction(0x17E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E1D8_0x17e1d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172244u;
    // 0x172244: 0x0  nop
    ctx->pc = 0x172244u;
    // NOP
label_172248:
    // 0x172248: 0xc05f86e  jal         func_17E1B8
    ctx->pc = 0x172248u;
    SET_GPR_U32(ctx, 31, 0x172250u);
    ctx->pc = 0x17E1B8u;
    if (runtime->hasFunction(0x17E1B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172250u; }
        if (ctx->pc != 0x172250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E1B8_0x17e1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172250u; }
        if (ctx->pc != 0x172250u) { return; }
    }
    ctx->pc = 0x172250u;
label_172250:
    // 0x172250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17225c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17225cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172260: 0x805f876  j           func_17E1D8
    ctx->pc = 0x172260u;
    ctx->pc = 0x172264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172260u;
            // 0x172264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D8u;
    if (runtime->hasFunction(0x17E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E1D8_0x17e1d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172268u;
    // 0x172268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17226c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172278: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172278u;
    {
        const bool branch_taken_0x172278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172278u;
            // 0x17227c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172278) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x172280u;
    // 0x172280: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172288: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17228c: 0xc05f7b2  jal         func_17DEC8
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 31, 0x172294u);
    ctx->pc = 0x172290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17228Cu;
            // 0x172290: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEC8u;
    if (runtime->hasFunction(0x17DEC8u)) {
        auto targetFn = runtime->lookupFunction(0x17DEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172294u; }
        if (ctx->pc != 0x172294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEC8_0x17dec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172294u; }
        if (ctx->pc != 0x172294u) { return; }
    }
    ctx->pc = 0x172294u;
label_172294:
    // 0x172294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172294u;
    {
        const bool branch_taken_0x172294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172294u;
            // 0x172298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172294) {
            ctx->pc = 0x1722B0u;
            goto label_1722b0;
        }
    }
    ctx->pc = 0x17229Cu;
    // 0x17229c: 0x0  nop
    ctx->pc = 0x17229cu;
    // NOP
label_1722a0:
    // 0x1722a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1722a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1722a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722a8: 0xc05f7b2  jal         func_17DEC8
    ctx->pc = 0x1722A8u;
    SET_GPR_U32(ctx, 31, 0x1722B0u);
    ctx->pc = 0x1722ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1722A8u;
            // 0x1722ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEC8u;
    if (runtime->hasFunction(0x17DEC8u)) {
        auto targetFn = runtime->lookupFunction(0x17DEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722B0u; }
        if (ctx->pc != 0x1722B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEC8_0x17dec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722B0u; }
        if (ctx->pc != 0x1722B0u) { return; }
    }
    ctx->pc = 0x1722B0u;
label_1722b0:
    // 0x1722b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1722b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1722b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1722b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1722b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1722bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1722BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722BCu;
            // 0x1722c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1722C4u;
    // 0x1722c4: 0x0  nop
    ctx->pc = 0x1722c4u;
    // NOP
    // 0x1722c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1722c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1722cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1722ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1722d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1722d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1722d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1722d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1722dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1722e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1722e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1722E8u;
    {
        const bool branch_taken_0x1722e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722E8u;
            // 0x1722ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722e8) {
            ctx->pc = 0x172310u;
            goto label_172310;
        }
    }
    ctx->pc = 0x1722F0u;
    // 0x1722f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1722f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722f4: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x1722f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1722f8: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1722f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1722fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1722fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172300: 0xc05f812  jal         func_17E048
    ctx->pc = 0x172300u;
    SET_GPR_U32(ctx, 31, 0x172308u);
    ctx->pc = 0x172304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172300u;
            // 0x172304: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E048u;
    if (runtime->hasFunction(0x17E048u)) {
        auto targetFn = runtime->lookupFunction(0x17E048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172308u; }
        if (ctx->pc != 0x172308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E048_0x17e048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172308u; }
        if (ctx->pc != 0x172308u) { return; }
    }
    ctx->pc = 0x172308u;
label_172308:
    // 0x172308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172308u;
    {
        const bool branch_taken_0x172308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172308u;
            // 0x17230c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172308) {
            ctx->pc = 0x172318u;
            goto label_172318;
        }
    }
    ctx->pc = 0x172310u;
label_172310:
    // 0x172310: 0xc05f7b2  jal         func_17DEC8
    ctx->pc = 0x172310u;
    SET_GPR_U32(ctx, 31, 0x172318u);
    ctx->pc = 0x172314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172310u;
            // 0x172314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEC8u;
    if (runtime->hasFunction(0x17DEC8u)) {
        auto targetFn = runtime->lookupFunction(0x17DEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172318u; }
        if (ctx->pc != 0x172318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEC8_0x17dec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172318u; }
        if (ctx->pc != 0x172318u) { return; }
    }
    ctx->pc = 0x172318u;
label_172318:
    // 0x172318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17231c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17231cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172324: 0x3e00008  jr          $ra
    ctx->pc = 0x172324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172324u;
            // 0x172328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17232Cu;
    // 0x17232c: 0x0  nop
    ctx->pc = 0x17232cu;
    // NOP
    // 0x172330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17233c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x17233Cu;
    {
        const bool branch_taken_0x17233c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17233Cu;
            // 0x172340: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17233c) {
            ctx->pc = 0x172370u;
            goto label_172370;
        }
    }
    ctx->pc = 0x172344u;
    // 0x172344: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x172348: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x172348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17234c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x172350: 0xc05f86e  jal         func_17E1B8
    ctx->pc = 0x172350u;
    SET_GPR_U32(ctx, 31, 0x172358u);
    ctx->pc = 0x172354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172350u;
            // 0x172354: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1B8u;
    if (runtime->hasFunction(0x17E1B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172358u; }
        if (ctx->pc != 0x172358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E1B8_0x17e1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172358u; }
        if (ctx->pc != 0x172358u) { return; }
    }
    ctx->pc = 0x172358u;
label_172358:
    // 0x172358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17235c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172364: 0x805f876  j           func_17E1D8
    ctx->pc = 0x172364u;
    ctx->pc = 0x172368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172364u;
            // 0x172368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D8u;
    if (runtime->hasFunction(0x17E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E1D8_0x17e1d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17236Cu;
    // 0x17236c: 0x0  nop
    ctx->pc = 0x17236cu;
    // NOP
label_172370:
    // 0x172370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172378: 0xc05f86e  jal         func_17E1B8
    ctx->pc = 0x172378u;
    SET_GPR_U32(ctx, 31, 0x172380u);
    ctx->pc = 0x17237Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172378u;
            // 0x17237c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1B8u;
    if (runtime->hasFunction(0x17E1B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172380u; }
        if (ctx->pc != 0x172380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E1B8_0x17e1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172380u; }
        if (ctx->pc != 0x172380u) { return; }
    }
    ctx->pc = 0x172380u;
label_172380:
    // 0x172380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17238c: 0x805f876  j           func_17E1D8
    ctx->pc = 0x17238Cu;
    ctx->pc = 0x172390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17238Cu;
            // 0x172390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D8u;
    if (runtime->hasFunction(0x17E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E1D8_0x17e1d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172394u;
    // 0x172394: 0x0  nop
    ctx->pc = 0x172394u;
    // NOP
    // 0x172398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17239c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1723a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1723a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723a4: 0x805f864  j           func_17E190
    ctx->pc = 0x1723A4u;
    ctx->pc = 0x1723A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1723A4u;
            // 0x1723a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E190u;
    {
        auto targetFn = runtime->lookupFunction(0x17E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1723ACu;
    // 0x1723ac: 0x0  nop
    ctx->pc = 0x1723acu;
    // NOP
    // 0x1723b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1723b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1723b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1723b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1723b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723bc: 0x805f4cc  j           func_17D330
    ctx->pc = 0x1723BCu;
    ctx->pc = 0x1723C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1723BCu;
            // 0x1723c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    {
        auto targetFn = runtime->lookupFunction(0x17D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1723C4u;
    // 0x1723c4: 0x0  nop
    ctx->pc = 0x1723c4u;
    // NOP
    // 0x1723c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1723c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1723cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1723ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1723d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1723d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723d4: 0x805f4d4  j           func_17D350
    ctx->pc = 0x1723D4u;
    ctx->pc = 0x1723D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1723D4u;
            // 0x1723d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D350u;
    {
        auto targetFn = runtime->lookupFunction(0x17D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1723DCu;
    // 0x1723dc: 0x0  nop
    ctx->pc = 0x1723dcu;
    // NOP
    // 0x1723e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1723e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1723e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1723e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1723e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723ec: 0x805f8ac  j           func_17E2B0
    ctx->pc = 0x1723ECu;
    ctx->pc = 0x1723F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1723ECu;
            // 0x1723f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E2B0u;
    {
        auto targetFn = runtime->lookupFunction(0x17E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1723F4u;
    // 0x1723f4: 0x0  nop
    ctx->pc = 0x1723f4u;
    // NOP
    // 0x1723f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1723f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1723fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1723fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172400: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x172404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172408: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x172408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17240c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17240cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x172410: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x172410u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x172414: 0x24a54060  addiu       $a1, $a1, 0x4060
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16480));
    // 0x172418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17241c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x172420: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x172420u;
    SET_GPR_U32(ctx, 31, 0x172428u);
    ctx->pc = 0x172424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172420u;
            // 0x172424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172428u; }
        if (ctx->pc != 0x172428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172428u; }
        if (ctx->pc != 0x172428u) { return; }
    }
    ctx->pc = 0x172428u;
label_172428:
    // 0x172428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17242c: 0xc05d85a  jal         func_176168
    ctx->pc = 0x17242Cu;
    SET_GPR_U32(ctx, 31, 0x172434u);
    ctx->pc = 0x172430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17242Cu;
            // 0x172430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172434u; }
        if (ctx->pc != 0x172434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172434u; }
        if (ctx->pc != 0x172434u) { return; }
    }
    ctx->pc = 0x172434u;
label_172434:
    // 0x172434: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172438: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x172438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17243c: 0x3e00008  jr          $ra
    ctx->pc = 0x17243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17243Cu;
            // 0x172440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172444u;
    // 0x172444: 0x0  nop
    ctx->pc = 0x172444u;
    // NOP
    // 0x172448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17244c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172450: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x172454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172458: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x172458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17245c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x172460: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x172464: 0x24a54060  addiu       $a1, $a1, 0x4060
    ctx->pc = 0x172464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16480));
    // 0x172468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17246c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x172470: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x172470u;
    SET_GPR_U32(ctx, 31, 0x172478u);
    ctx->pc = 0x172474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172470u;
            // 0x172474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172478u; }
        if (ctx->pc != 0x172478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172478u; }
        if (ctx->pc != 0x172478u) { return; }
    }
    ctx->pc = 0x172478u;
label_172478:
    // 0x172478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17247c: 0xc05b04e  jal         func_16C138
    ctx->pc = 0x17247Cu;
    SET_GPR_U32(ctx, 31, 0x172484u);
    ctx->pc = 0x172480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17247Cu;
            // 0x172480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C138u;
    if (runtime->hasFunction(0x16C138u)) {
        auto targetFn = runtime->lookupFunction(0x16C138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172484u; }
        if (ctx->pc != 0x172484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C138_0x16c138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172484u; }
        if (ctx->pc != 0x172484u) { return; }
    }
    ctx->pc = 0x172484u;
label_172484:
    // 0x172484: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x172484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172488: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x172488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17248c: 0x3e00008  jr          $ra
    ctx->pc = 0x17248Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17248Cu;
            // 0x172490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172494u;
    // 0x172494: 0x0  nop
    ctx->pc = 0x172494u;
    // NOP
    // 0x172498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17249c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17249cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724a0: 0x24a707ff  addiu       $a3, $a1, 0x7FF
    ctx->pc = 0x1724a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1724a4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1724a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1724a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1724ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1724acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1724b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724b4: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1724b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1724b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1724b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1724bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1724c0: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x1724C0u;
    SET_GPR_U32(ctx, 31, 0x1724C8u);
    ctx->pc = 0x1724C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724C0u;
            // 0x1724c4: 0x24a54060  addiu       $a1, $a1, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724C8u; }
        if (ctx->pc != 0x1724C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724C8u; }
        if (ctx->pc != 0x1724C8u) { return; }
    }
    ctx->pc = 0x1724C8u;
label_1724c8:
    // 0x1724c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1724c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724cc: 0xc05a626  jal         func_169898
    ctx->pc = 0x1724CCu;
    SET_GPR_U32(ctx, 31, 0x1724D4u);
    ctx->pc = 0x1724D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724CCu;
            // 0x1724d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169898u;
    if (runtime->hasFunction(0x169898u)) {
        auto targetFn = runtime->lookupFunction(0x169898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724D4u; }
        if (ctx->pc != 0x1724D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169898_0x169898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724D4u; }
        if (ctx->pc != 0x1724D4u) { return; }
    }
    ctx->pc = 0x1724D4u;
label_1724d4:
    // 0x1724d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1724d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1724d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1724d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1724dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1724DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724DCu;
            // 0x1724e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1724E4u;
    // 0x1724e4: 0x0  nop
    ctx->pc = 0x1724e4u;
    // NOP
    // 0x1724e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1724ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1724ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724ECu;
            // 0x1724f0: 0xac443ef0  sw          $a0, 0x3EF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1724F4u;
    // 0x1724f4: 0x0  nop
    ctx->pc = 0x1724f4u;
    // NOP
    // 0x1724f8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1724fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1724FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724FCu;
            // 0x172500: 0x8c623ef0  lw          $v0, 0x3EF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172504u;
    // 0x172504: 0x0  nop
    ctx->pc = 0x172504u;
    // NOP
    // 0x172508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17250c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172514: 0x805ea40  j           func_17A900
    ctx->pc = 0x172514u;
    ctx->pc = 0x172518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172514u;
            // 0x172518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A900u;
    {
        auto targetFn = runtime->lookupFunction(0x17A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17251Cu;
    // 0x17251c: 0x0  nop
    ctx->pc = 0x17251cu;
    // NOP
    // 0x172520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17252c: 0x805ea44  j           func_17A910
    ctx->pc = 0x17252Cu;
    ctx->pc = 0x172530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17252Cu;
            // 0x172530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A910u;
    {
        auto targetFn = runtime->lookupFunction(0x17A910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x172534u;
    // 0x172534: 0x0  nop
    ctx->pc = 0x172534u;
    // NOP
    // 0x172538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17253c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172544: 0x805ea38  j           func_17A8E0
    ctx->pc = 0x172544u;
    ctx->pc = 0x172548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172544u;
            // 0x172548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8E0u;
    {
        auto targetFn = runtime->lookupFunction(0x17A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17254Cu;
    // 0x17254c: 0x0  nop
    ctx->pc = 0x17254cu;
    // NOP
    // 0x172550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17255c: 0x805ea3c  j           func_17A8F0
    ctx->pc = 0x17255Cu;
    ctx->pc = 0x172560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17255Cu;
            // 0x172560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x172564u;
    // 0x172564: 0x0  nop
    ctx->pc = 0x172564u;
    // NOP
    // 0x172568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17256c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172574: 0x805ea5e  j           func_17A978
    ctx->pc = 0x172574u;
    ctx->pc = 0x172578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172574u;
            // 0x172578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A978u;
    {
        auto targetFn = runtime->lookupFunction(0x17A978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17257Cu;
    // 0x17257c: 0x0  nop
    ctx->pc = 0x17257cu;
    // NOP
    // 0x172580: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x172580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x172584: 0x3e00008  jr          $ra
    ctx->pc = 0x172584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172584u;
            // 0x172588: 0x8c623ef8  lw          $v0, 0x3EF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17258Cu;
    // 0x17258c: 0x0  nop
    ctx->pc = 0x17258cu;
    // NOP
    // 0x172590: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x172594: 0x3e00008  jr          $ra
    ctx->pc = 0x172594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172594u;
            // 0x172598: 0xac443ef8  sw          $a0, 0x3EF8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17259Cu;
    // 0x17259c: 0x0  nop
    ctx->pc = 0x17259cu;
    // NOP
    // 0x1725a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1725a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1725a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1725a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1725a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1725a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1725ac: 0xc0599de  jal         func_166778
    ctx->pc = 0x1725ACu;
    SET_GPR_U32(ctx, 31, 0x1725B4u);
    ctx->pc = 0x1725B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725ACu;
            // 0x1725b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725B4u; }
        if (ctx->pc != 0x1725B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725B4u; }
        if (ctx->pc != 0x1725B4u) { return; }
    }
    ctx->pc = 0x1725B4u;
label_1725b4:
    // 0x1725b4: 0xc05c974  jal         func_1725D0
    ctx->pc = 0x1725B4u;
    SET_GPR_U32(ctx, 31, 0x1725BCu);
    ctx->pc = 0x1725B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725B4u;
            // 0x1725b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1725D0u;
    if (runtime->hasFunction(0x1725D0u)) {
        auto targetFn = runtime->lookupFunction(0x1725D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725BCu; }
        if (ctx->pc != 0x1725BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001725D0_0x1725d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725BCu; }
        if (ctx->pc != 0x1725BCu) { return; }
    }
    ctx->pc = 0x1725BCu;
label_1725bc:
    // 0x1725bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1725bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1725c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1725c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1725c4: 0x80599e0  j           func_166780
    ctx->pc = 0x1725C4u;
    ctx->pc = 0x1725C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725C4u;
            // 0x1725c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1725CCu;
    // 0x1725cc: 0x0  nop
    ctx->pc = 0x1725ccu;
    // NOP
}
