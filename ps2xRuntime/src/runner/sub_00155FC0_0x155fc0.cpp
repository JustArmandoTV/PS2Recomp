#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155FC0
// Address: 0x155fc0 - 0x1562e0
void sub_00155FC0_0x155fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155FC0_0x155fc0");
#endif

    switch (ctx->pc) {
        case 0x15600cu: goto label_15600c;
        case 0x15601cu: goto label_15601c;
        case 0x15602cu: goto label_15602c;
        case 0x15604cu: goto label_15604c;
        case 0x156090u: goto label_156090;
        case 0x1560ccu: goto label_1560cc;
        case 0x156128u: goto label_156128;
        case 0x156138u: goto label_156138;
        case 0x15614cu: goto label_15614c;
        case 0x156164u: goto label_156164;
        case 0x156178u: goto label_156178;
        case 0x156260u: goto label_156260;
        case 0x156278u: goto label_156278;
        default: break;
    }

    ctx->pc = 0x155fc0u;

    // 0x155fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x155fc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x155fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x155fc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x155fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x155fcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x155fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x155fd0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x155fd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x155fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x155fd8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x155fd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x155fe0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x155fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155fe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155fec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x155fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155ff4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x155ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155ffc: 0x24841fa0  addiu       $a0, $a0, 0x1FA0
    ctx->pc = 0x155ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
    // 0x156000: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x156000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x156004: 0xc04fe9c  jal         func_13FA70
    ctx->pc = 0x156004u;
    SET_GPR_U32(ctx, 31, 0x15600Cu);
    ctx->pc = 0x156008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156004u;
            // 0x156008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15600Cu; }
        if (ctx->pc != 0x15600Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15600Cu; }
        if (ctx->pc != 0x15600Cu) { return; }
    }
    ctx->pc = 0x15600Cu;
label_15600c:
    // 0x15600c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x15600cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x156010: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156014: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x156014u;
    SET_GPR_U32(ctx, 31, 0x15601Cu);
    ctx->pc = 0x156018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156014u;
            // 0x156018: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15601Cu; }
        if (ctx->pc != 0x15601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15601Cu; }
        if (ctx->pc != 0x15601Cu) { return; }
    }
    ctx->pc = 0x15601Cu;
label_15601c:
    // 0x15601c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x156020: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x156020u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x156024: 0x186000a0  blez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x156024u;
    {
        const bool branch_taken_0x156024 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x156028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156024u;
            // 0x156028: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156024) {
            ctx->pc = 0x1562A8u;
            goto label_1562a8;
        }
    }
    ctx->pc = 0x15602Cu;
label_15602c:
    // 0x15602c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156030: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156034: 0xac725774  sw          $s2, 0x5774($v1)
    ctx->pc = 0x156034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 18));
    // 0x156038: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x156038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15603c: 0xac435770  sw          $v1, 0x5770($v0)
    ctx->pc = 0x15603cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
    // 0x156040: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x156040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x156044: 0xc05001c  jal         func_140070
    ctx->pc = 0x156044u;
    SET_GPR_U32(ctx, 31, 0x15604Cu);
    ctx->pc = 0x156048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156044u;
            // 0x156048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15604Cu; }
        if (ctx->pc != 0x15604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15604Cu; }
        if (ctx->pc != 0x15604Cu) { return; }
    }
    ctx->pc = 0x15604Cu;
label_15604c:
    // 0x15604c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156050: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156054: 0x8c475760  lw          $a3, 0x5760($v0)
    ctx->pc = 0x156054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
    // 0x156058: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x156058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x15605c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x15605cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x156060: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156064: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x156064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
    // 0x156068: 0xacc75764  sw          $a3, 0x5764($a2)
    ctx->pc = 0x156068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22372), GPR_U32(ctx, 7));
    // 0x15606c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156070: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x156074: 0xaca65760  sw          $a2, 0x5760($a1)
    ctx->pc = 0x156074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22368), GPR_U32(ctx, 6));
    // 0x156078: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x156078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x15607c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x156080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x156080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x156084: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x156084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
    // 0x156088: 0xc05055c  jal         func_141570
    ctx->pc = 0x156088u;
    SET_GPR_U32(ctx, 31, 0x156090u);
    ctx->pc = 0x15608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156088u;
            // 0x15608c: 0xac65577c  sw          $a1, 0x577C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22396), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156090u; }
        if (ctx->pc != 0x156090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156090u; }
        if (ctx->pc != 0x156090u) { return; }
    }
    ctx->pc = 0x156090u;
label_156090:
    // 0x156090: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x156090u;
    {
        const bool branch_taken_0x156090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156090) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x156098u;
    // 0x156098: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15609c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1560a0: 0x8c655828  lw          $a1, 0x5828($v1)
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1560a4: 0x8c865824  lw          $a2, 0x5824($a0)
    ctx->pc = 0x1560a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22564)));
    // 0x1560a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1560ac: 0x8c6354d8  lw          $v1, 0x54D8($v1)
    ctx->pc = 0x1560acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21720)));
    // 0x1560b0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1560b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1560b4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1560b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1560b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1560B8u;
    {
        const bool branch_taken_0x1560b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560B8u;
            // 0x1560bc: 0xac855824  sw          $a1, 0x5824($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22564), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560b8) {
            ctx->pc = 0x1560D0u;
            goto label_1560d0;
        }
    }
    ctx->pc = 0x1560C0u;
    // 0x1560c0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1560c4: 0xc04fe9c  jal         func_13FA70
    ctx->pc = 0x1560C4u;
    SET_GPR_U32(ctx, 31, 0x1560CCu);
    ctx->pc = 0x1560C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1560C4u;
            // 0x1560c8: 0x24841fa0  addiu       $a0, $a0, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1560CCu; }
        if (ctx->pc != 0x1560CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1560CCu; }
        if (ctx->pc != 0x1560CCu) { return; }
    }
    ctx->pc = 0x1560CCu;
label_1560cc:
    // 0x1560cc: 0x0  nop
    ctx->pc = 0x1560ccu;
    // NOP
label_1560d0:
    // 0x1560d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1560d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1560d4: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1560d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1560d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1560dc: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x1560dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1560e0: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1560E0u;
    {
        const bool branch_taken_0x1560e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1560e0) {
            ctx->pc = 0x156158u;
            goto label_156158;
        }
    }
    ctx->pc = 0x1560E8u;
    // 0x1560e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1560ec: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1560ECu;
    {
        const bool branch_taken_0x1560ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1560ec) {
            ctx->pc = 0x156140u;
            goto label_156140;
        }
    }
    ctx->pc = 0x1560F4u;
    // 0x1560f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1560f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1560f8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1560F8u;
    {
        const bool branch_taken_0x1560f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1560f8) {
            ctx->pc = 0x156130u;
            goto label_156130;
        }
    }
    ctx->pc = 0x156100u;
    // 0x156100: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156104: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156104u;
    {
        const bool branch_taken_0x156104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x156104) {
            ctx->pc = 0x156120u;
            goto label_156120;
        }
    }
    ctx->pc = 0x15610Cu;
    // 0x15610c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15610Cu;
    {
        const bool branch_taken_0x15610c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15610c) {
            ctx->pc = 0x156168u;
            goto label_156168;
        }
    }
    ctx->pc = 0x156114u;
    // 0x156114: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156114) {
            ctx->pc = 0x156168u;
            goto label_156168;
        }
    }
    ctx->pc = 0x15611Cu;
    // 0x15611c: 0x0  nop
    ctx->pc = 0x15611cu;
    // NOP
label_156120:
    // 0x156120: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x156120u;
    SET_GPR_U32(ctx, 31, 0x156128u);
    ctx->pc = 0x156124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156120u;
            // 0x156124: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156128u; }
        if (ctx->pc != 0x156128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156128u; }
        if (ctx->pc != 0x156128u) { return; }
    }
    ctx->pc = 0x156128u;
label_156128:
    // 0x156128: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156128u;
    {
        const bool branch_taken_0x156128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156128) {
            ctx->pc = 0x156168u;
            goto label_156168;
        }
    }
    ctx->pc = 0x156130u;
label_156130:
    // 0x156130: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x156130u;
    SET_GPR_U32(ctx, 31, 0x156138u);
    ctx->pc = 0x156134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156130u;
            // 0x156134: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156138u; }
        if (ctx->pc != 0x156138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156138u; }
        if (ctx->pc != 0x156138u) { return; }
    }
    ctx->pc = 0x156138u;
label_156138:
    // 0x156138: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x156138u;
    {
        const bool branch_taken_0x156138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156138) {
            ctx->pc = 0x156168u;
            goto label_156168;
        }
    }
    ctx->pc = 0x156140u;
label_156140:
    // 0x156140: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x156144: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x156144u;
    SET_GPR_U32(ctx, 31, 0x15614Cu);
    ctx->pc = 0x156148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156144u;
            // 0x156148: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15614Cu; }
        if (ctx->pc != 0x15614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15614Cu; }
        if (ctx->pc != 0x15614Cu) { return; }
    }
    ctx->pc = 0x15614Cu;
label_15614c:
    // 0x15614c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15614Cu;
    {
        const bool branch_taken_0x15614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15614c) {
            ctx->pc = 0x156168u;
            goto label_156168;
        }
    }
    ctx->pc = 0x156154u;
    // 0x156154: 0x0  nop
    ctx->pc = 0x156154u;
    // NOP
label_156158:
    // 0x156158: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x15615c: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x15615Cu;
    SET_GPR_U32(ctx, 31, 0x156164u);
    ctx->pc = 0x156160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15615Cu;
            // 0x156160: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156164u; }
        if (ctx->pc != 0x156164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156164u; }
        if (ctx->pc != 0x156164u) { return; }
    }
    ctx->pc = 0x156164u;
label_156164:
    // 0x156164: 0x0  nop
    ctx->pc = 0x156164u;
    // NOP
label_156168:
    // 0x156168: 0x1bc00049  blez        $fp, . + 4 + (0x49 << 2)
    ctx->pc = 0x156168u;
    {
        const bool branch_taken_0x156168 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x15616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156168u;
            // 0x15616c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156168) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x156170u;
    // 0x156170: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x156174: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x156174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_156178:
    // 0x156178: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x156178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15617c: 0x10c0003e  beqz        $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x15617Cu;
    {
        const bool branch_taken_0x15617c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15617c) {
            ctx->pc = 0x156278u;
            goto label_156278;
        }
    }
    ctx->pc = 0x156184u;
    // 0x156184: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156188: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x156188u;
    {
        const bool branch_taken_0x156188 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x15618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156188u;
            // 0x15618c: 0xac665788  sw          $a2, 0x5788($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156188) {
            ctx->pc = 0x156198u;
            goto label_156198;
        }
    }
    ctx->pc = 0x156190u;
    // 0x156190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x156190u;
    {
        const bool branch_taken_0x156190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156190u;
            // 0x156194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156190) {
            ctx->pc = 0x15619Cu;
            goto label_15619c;
        }
    }
    ctx->pc = 0x156198u;
label_156198:
    // 0x156198: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15619c:
    // 0x15619c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1561a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1561A0u;
    {
        const bool branch_taken_0x1561a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561A0u;
            // 0x1561a4: 0xac64578c  sw          $a0, 0x578C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561a0) {
            ctx->pc = 0x1561C0u;
            goto label_1561c0;
        }
    }
    ctx->pc = 0x1561A8u;
    // 0x1561a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1561ac: 0x8c635770  lw          $v1, 0x5770($v1)
    ctx->pc = 0x1561acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22384)));
    // 0x1561b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1561b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1561b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1561b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1561b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1561B8u;
    {
        const bool branch_taken_0x1561b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561B8u;
            // 0x1561bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561b8) {
            ctx->pc = 0x1561C4u;
            goto label_1561c4;
        }
    }
    ctx->pc = 0x1561C0u;
label_1561c0:
    // 0x1561c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1561c4:
    // 0x1561c4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1561c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1561c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1561C8u;
    {
        const bool branch_taken_0x1561c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1561c8) {
            ctx->pc = 0x1561D8u;
            goto label_1561d8;
        }
    }
    ctx->pc = 0x1561D0u;
    // 0x1561d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1561D0u;
    {
        const bool branch_taken_0x1561d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561D0u;
            // 0x1561d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561d0) {
            ctx->pc = 0x156220u;
            goto label_156220;
        }
    }
    ctx->pc = 0x1561D8u;
label_1561d8:
    // 0x1561d8: 0x30850022  andi        $a1, $a0, 0x22
    ctx->pc = 0x1561d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
    // 0x1561dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1561dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1561e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1561e4: 0x8c8457b0  lw          $a0, 0x57B0($a0)
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22448)));
    // 0x1561e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1561E8u;
    {
        const bool branch_taken_0x1561e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561E8u;
            // 0x1561ec: 0xac6457f0  sw          $a0, 0x57F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561e8) {
            ctx->pc = 0x156200u;
            goto label_156200;
        }
    }
    ctx->pc = 0x1561F0u;
    // 0x1561f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1561f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1561f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1561f8: 0xac6457f0  sw          $a0, 0x57F0($v1)
    ctx->pc = 0x1561f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
    // 0x1561fc: 0x0  nop
    ctx->pc = 0x1561fcu;
    // NOP
label_156200:
    // 0x156200: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156204: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x156204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x156208: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15620c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15620cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156210: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156214: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x156214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x156218: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x156218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
    // 0x15621c: 0x0  nop
    ctx->pc = 0x15621cu;
    // NOP
label_156220:
    // 0x156220: 0x14e00015  bnez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x156220u;
    {
        const bool branch_taken_0x156220 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x156220) {
            ctx->pc = 0x156278u;
            goto label_156278;
        }
    }
    ctx->pc = 0x156228u;
    // 0x156228: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x15622c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156230: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x156234: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x156238: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15623c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156240: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156244: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156244u;
    {
        const bool branch_taken_0x156244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156244) {
            ctx->pc = 0x156270u;
            goto label_156270;
        }
    }
    ctx->pc = 0x15624Cu;
    // 0x15624c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x156250: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x156250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x156254: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x156258: 0xc054390  jal         func_150E40
    ctx->pc = 0x156258u;
    SET_GPR_U32(ctx, 31, 0x156260u);
    ctx->pc = 0x15625Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156258u;
            // 0x15625c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E40u;
    if (runtime->hasFunction(0x150E40u)) {
        auto targetFn = runtime->lookupFunction(0x150E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156260u; }
        if (ctx->pc != 0x156260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E40_0x150e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156260u; }
        if (ctx->pc != 0x156260u) { return; }
    }
    ctx->pc = 0x156260u;
label_156260:
    // 0x156260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156264u;
            // 0x156268: 0xaf8381a4  sw          $v1, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156264) {
            ctx->pc = 0x156278u;
            goto label_156278;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x0  nop
    ctx->pc = 0x15626cu;
    // NOP
label_156270:
    // 0x156270: 0xc04fda4  jal         func_13F690
    ctx->pc = 0x156270u;
    SET_GPR_U32(ctx, 31, 0x156278u);
    ctx->pc = 0x156274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156270u;
            // 0x156274: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F690u;
    if (runtime->hasFunction(0x13F690u)) {
        auto targetFn = runtime->lookupFunction(0x13F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156278u; }
        if (ctx->pc != 0x156278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F690_0x13f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156278u; }
        if (ctx->pc != 0x156278u) { return; }
    }
    ctx->pc = 0x156278u;
label_156278:
    // 0x156278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15627c: 0x23e182a  slt         $v1, $s1, $fp
    ctx->pc = 0x15627cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x156280: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x156284: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x156284u;
    {
        const bool branch_taken_0x156284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156284u;
            // 0x156288: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156284) {
            ctx->pc = 0x156178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156178;
        }
    }
    ctx->pc = 0x15628Cu;
    // 0x15628c: 0x0  nop
    ctx->pc = 0x15628cu;
    // NOP
label_156290:
    // 0x156290: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x156294: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x156298: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x156298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15629c: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x15629Cu;
    {
        const bool branch_taken_0x15629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1562A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15629Cu;
            // 0x1562a0: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15629c) {
            ctx->pc = 0x15602Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15602c;
        }
    }
    ctx->pc = 0x1562A4u;
    // 0x1562a4: 0x0  nop
    ctx->pc = 0x1562a4u;
    // NOP
label_1562a8:
    // 0x1562a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1562ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1562acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1562b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1562b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1562b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1562b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1562b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1562b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1562bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1562bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1562c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1562c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1562c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1562c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1562c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1562c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1562ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1562D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1562D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562D0u;
            // 0x1562d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1562D8u;
    // 0x1562d8: 0x0  nop
    ctx->pc = 0x1562d8u;
    // NOP
    // 0x1562dc: 0x0  nop
    ctx->pc = 0x1562dcu;
    // NOP
}
