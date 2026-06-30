#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335FC0
// Address: 0x335fc0 - 0x336150
void sub_00335FC0_0x335fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335FC0_0x335fc0");
#endif

    switch (ctx->pc) {
        case 0x335fc0u: goto label_335fc0;
        case 0x335fc4u: goto label_335fc4;
        case 0x335fc8u: goto label_335fc8;
        case 0x335fccu: goto label_335fcc;
        case 0x335fd0u: goto label_335fd0;
        case 0x335fd4u: goto label_335fd4;
        case 0x335fd8u: goto label_335fd8;
        case 0x335fdcu: goto label_335fdc;
        case 0x335fe0u: goto label_335fe0;
        case 0x335fe4u: goto label_335fe4;
        case 0x335fe8u: goto label_335fe8;
        case 0x335fecu: goto label_335fec;
        case 0x335ff0u: goto label_335ff0;
        case 0x335ff4u: goto label_335ff4;
        case 0x335ff8u: goto label_335ff8;
        case 0x335ffcu: goto label_335ffc;
        case 0x336000u: goto label_336000;
        case 0x336004u: goto label_336004;
        case 0x336008u: goto label_336008;
        case 0x33600cu: goto label_33600c;
        case 0x336010u: goto label_336010;
        case 0x336014u: goto label_336014;
        case 0x336018u: goto label_336018;
        case 0x33601cu: goto label_33601c;
        case 0x336020u: goto label_336020;
        case 0x336024u: goto label_336024;
        case 0x336028u: goto label_336028;
        case 0x33602cu: goto label_33602c;
        case 0x336030u: goto label_336030;
        case 0x336034u: goto label_336034;
        case 0x336038u: goto label_336038;
        case 0x33603cu: goto label_33603c;
        case 0x336040u: goto label_336040;
        case 0x336044u: goto label_336044;
        case 0x336048u: goto label_336048;
        case 0x33604cu: goto label_33604c;
        case 0x336050u: goto label_336050;
        case 0x336054u: goto label_336054;
        case 0x336058u: goto label_336058;
        case 0x33605cu: goto label_33605c;
        case 0x336060u: goto label_336060;
        case 0x336064u: goto label_336064;
        case 0x336068u: goto label_336068;
        case 0x33606cu: goto label_33606c;
        case 0x336070u: goto label_336070;
        case 0x336074u: goto label_336074;
        case 0x336078u: goto label_336078;
        case 0x33607cu: goto label_33607c;
        case 0x336080u: goto label_336080;
        case 0x336084u: goto label_336084;
        case 0x336088u: goto label_336088;
        case 0x33608cu: goto label_33608c;
        case 0x336090u: goto label_336090;
        case 0x336094u: goto label_336094;
        case 0x336098u: goto label_336098;
        case 0x33609cu: goto label_33609c;
        case 0x3360a0u: goto label_3360a0;
        case 0x3360a4u: goto label_3360a4;
        case 0x3360a8u: goto label_3360a8;
        case 0x3360acu: goto label_3360ac;
        case 0x3360b0u: goto label_3360b0;
        case 0x3360b4u: goto label_3360b4;
        case 0x3360b8u: goto label_3360b8;
        case 0x3360bcu: goto label_3360bc;
        case 0x3360c0u: goto label_3360c0;
        case 0x3360c4u: goto label_3360c4;
        case 0x3360c8u: goto label_3360c8;
        case 0x3360ccu: goto label_3360cc;
        case 0x3360d0u: goto label_3360d0;
        case 0x3360d4u: goto label_3360d4;
        case 0x3360d8u: goto label_3360d8;
        case 0x3360dcu: goto label_3360dc;
        case 0x3360e0u: goto label_3360e0;
        case 0x3360e4u: goto label_3360e4;
        case 0x3360e8u: goto label_3360e8;
        case 0x3360ecu: goto label_3360ec;
        case 0x3360f0u: goto label_3360f0;
        case 0x3360f4u: goto label_3360f4;
        case 0x3360f8u: goto label_3360f8;
        case 0x3360fcu: goto label_3360fc;
        case 0x336100u: goto label_336100;
        case 0x336104u: goto label_336104;
        case 0x336108u: goto label_336108;
        case 0x33610cu: goto label_33610c;
        case 0x336110u: goto label_336110;
        case 0x336114u: goto label_336114;
        case 0x336118u: goto label_336118;
        case 0x33611cu: goto label_33611c;
        case 0x336120u: goto label_336120;
        case 0x336124u: goto label_336124;
        case 0x336128u: goto label_336128;
        case 0x33612cu: goto label_33612c;
        case 0x336130u: goto label_336130;
        case 0x336134u: goto label_336134;
        case 0x336138u: goto label_336138;
        case 0x33613cu: goto label_33613c;
        case 0x336140u: goto label_336140;
        case 0x336144u: goto label_336144;
        case 0x336148u: goto label_336148;
        case 0x33614cu: goto label_33614c;
        default: break;
    }

    ctx->pc = 0x335fc0u;

label_335fc0:
    // 0x335fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_335fc4:
    // 0x335fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_335fc8:
    // 0x335fc8: 0x9083005a  lbu         $v1, 0x5A($a0)
    ctx->pc = 0x335fc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_335fcc:
    // 0x335fcc: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_335fd0:
    if (ctx->pc == 0x335FD0u) {
        ctx->pc = 0x335FD0u;
            // 0x335fd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x335FD4u;
        goto label_335fd4;
    }
    ctx->pc = 0x335FCCu;
    {
        const bool branch_taken_0x335fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335fcc) {
            ctx->pc = 0x335FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335FCCu;
            // 0x335fd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336014u;
            goto label_336014;
        }
    }
    ctx->pc = 0x335FD4u;
label_335fd4:
    // 0x335fd4: 0x90860058  lbu         $a2, 0x58($a0)
    ctx->pc = 0x335fd4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
label_335fd8:
    // 0x335fd8: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x335fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_335fdc:
    // 0x335fdc: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x335fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_335fe0:
    // 0x335fe0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x335fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_335fe4:
    // 0x335fe4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x335fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_335fe8:
    // 0x335fe8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x335fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_335fec:
    // 0x335fec: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x335fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_335ff0:
    // 0x335ff0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_335ff4:
    // 0x335ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x335ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_335ff8:
    // 0x335ff8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_335ffc:
    // 0x335ffc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x335ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_336000:
    // 0x336000: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_336004:
    if (ctx->pc == 0x336004u) {
        ctx->pc = 0x336008u;
        goto label_336008;
    }
    ctx->pc = 0x336000u;
    {
        const bool branch_taken_0x336000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336000) {
            ctx->pc = 0x336010u;
            goto label_336010;
        }
    }
    ctx->pc = 0x336008u;
label_336008:
    // 0x336008: 0xc073234  jal         func_1CC8D0
label_33600c:
    if (ctx->pc == 0x33600Cu) {
        ctx->pc = 0x33600Cu;
            // 0x33600c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x336010u;
        goto label_336010;
    }
    ctx->pc = 0x336008u;
    SET_GPR_U32(ctx, 31, 0x336010u);
    ctx->pc = 0x33600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336008u;
            // 0x33600c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336010u; }
        if (ctx->pc != 0x336010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336010u; }
        if (ctx->pc != 0x336010u) { return; }
    }
    ctx->pc = 0x336010u;
label_336010:
    // 0x336010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336014:
    // 0x336014: 0x3e00008  jr          $ra
label_336018:
    if (ctx->pc == 0x336018u) {
        ctx->pc = 0x336018u;
            // 0x336018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x33601Cu;
        goto label_33601c;
    }
    ctx->pc = 0x336014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336014u;
            // 0x336018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33601Cu;
label_33601c:
    // 0x33601c: 0x0  nop
    ctx->pc = 0x33601cu;
    // NOP
label_336020:
    // 0x336020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_336024:
    // 0x336024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_336028:
    // 0x336028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33602c:
    // 0x33602c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_336030:
    // 0x336030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_336034:
    // 0x336034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336038:
    // 0x336038: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x336038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_33603c:
    // 0x33603c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_336040:
    if (ctx->pc == 0x336040u) {
        ctx->pc = 0x336044u;
        goto label_336044;
    }
    ctx->pc = 0x33603Cu;
    {
        const bool branch_taken_0x33603c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33603c) {
            ctx->pc = 0x33604Cu;
            goto label_33604c;
        }
    }
    ctx->pc = 0x336044u;
label_336044:
    // 0x336044: 0x10000019  b           . + 4 + (0x19 << 2)
label_336048:
    if (ctx->pc == 0x336048u) {
        ctx->pc = 0x336048u;
            // 0x336048: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x33604Cu;
        goto label_33604c;
    }
    ctx->pc = 0x336044u;
    {
        const bool branch_taken_0x336044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336044u;
            // 0x336048: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336044) {
            ctx->pc = 0x3360ACu;
            goto label_3360ac;
        }
    }
    ctx->pc = 0x33604Cu;
label_33604c:
    // 0x33604c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_336050:
    // 0x336050: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x336050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_336054:
    // 0x336054: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x336054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_336058:
    // 0x336058: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x336058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_33605c:
    // 0x33605c: 0x320f809  jalr        $t9
label_336060:
    if (ctx->pc == 0x336060u) {
        ctx->pc = 0x336060u;
            // 0x336060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336064u;
        goto label_336064;
    }
    ctx->pc = 0x33605Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336064u);
        ctx->pc = 0x336060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33605Cu;
            // 0x336060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336064u; }
            if (ctx->pc != 0x336064u) { return; }
        }
        }
    }
    ctx->pc = 0x336064u;
label_336064:
    // 0x336064: 0xc0746e4  jal         func_1D1B90
label_336068:
    if (ctx->pc == 0x336068u) {
        ctx->pc = 0x336068u;
            // 0x336068: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x33606Cu;
        goto label_33606c;
    }
    ctx->pc = 0x336064u;
    SET_GPR_U32(ctx, 31, 0x33606Cu);
    ctx->pc = 0x336068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336064u;
            // 0x336068: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33606Cu; }
        if (ctx->pc != 0x33606Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33606Cu; }
        if (ctx->pc != 0x33606Cu) { return; }
    }
    ctx->pc = 0x33606Cu;
label_33606c:
    // 0x33606c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336070:
    // 0x336070: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x336070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_336074:
    // 0x336074: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x336074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
label_336078:
    // 0x336078: 0xc073234  jal         func_1CC8D0
label_33607c:
    if (ctx->pc == 0x33607Cu) {
        ctx->pc = 0x33607Cu;
            // 0x33607c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x336080u;
        goto label_336080;
    }
    ctx->pc = 0x336078u;
    SET_GPR_U32(ctx, 31, 0x336080u);
    ctx->pc = 0x33607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336078u;
            // 0x33607c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336080u; }
        if (ctx->pc != 0x336080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336080u; }
        if (ctx->pc != 0x336080u) { return; }
    }
    ctx->pc = 0x336080u;
label_336080:
    // 0x336080: 0x82030059  lb          $v1, 0x59($s0)
    ctx->pc = 0x336080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
label_336084:
    // 0x336084: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x336084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_336088:
    // 0x336088: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x336088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_33608c:
    // 0x33608c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_336090:
    // 0x336090: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x336090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_336094:
    // 0x336094: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_336098:
    // 0x336098: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x336098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33609c:
    // 0x33609c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3360a0:
    // 0x3360a0: 0x320f809  jalr        $t9
label_3360a4:
    if (ctx->pc == 0x3360A4u) {
        ctx->pc = 0x3360A4u;
            // 0x3360a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3360A8u;
        goto label_3360a8;
    }
    ctx->pc = 0x3360A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3360A8u);
        ctx->pc = 0x3360A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3360A0u;
            // 0x3360a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3360A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3360A8u; }
            if (ctx->pc != 0x3360A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3360A8u;
label_3360a8:
    // 0x3360a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3360a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3360ac:
    // 0x3360ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3360acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3360b0:
    // 0x3360b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3360b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3360b4:
    // 0x3360b4: 0x3e00008  jr          $ra
label_3360b8:
    if (ctx->pc == 0x3360B8u) {
        ctx->pc = 0x3360B8u;
            // 0x3360b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3360BCu;
        goto label_3360bc;
    }
    ctx->pc = 0x3360B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3360B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3360B4u;
            // 0x3360b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3360BCu;
label_3360bc:
    // 0x3360bc: 0x0  nop
    ctx->pc = 0x3360bcu;
    // NOP
label_3360c0:
    // 0x3360c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3360c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3360c4:
    // 0x3360c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3360c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3360c8:
    // 0x3360c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3360c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3360cc:
    // 0x3360cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3360ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3360d0:
    // 0x3360d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3360d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3360d4:
    // 0x3360d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3360d8:
    if (ctx->pc == 0x3360D8u) {
        ctx->pc = 0x3360D8u;
            // 0x3360d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3360DCu;
        goto label_3360dc;
    }
    ctx->pc = 0x3360D4u;
    {
        const bool branch_taken_0x3360d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3360D4u;
            // 0x3360d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360d4) {
            ctx->pc = 0x336130u;
            goto label_336130;
        }
    }
    ctx->pc = 0x3360DCu;
label_3360dc:
    // 0x3360dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3360e0:
    // 0x3360e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3360e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3360e4:
    // 0x3360e4: 0x24634c20  addiu       $v1, $v1, 0x4C20
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19488));
label_3360e8:
    // 0x3360e8: 0x24424c58  addiu       $v0, $v0, 0x4C58
    ctx->pc = 0x3360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
label_3360ec:
    // 0x3360ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3360ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3360f0:
    // 0x3360f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3360f4:
    if (ctx->pc == 0x3360F4u) {
        ctx->pc = 0x3360F4u;
            // 0x3360f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3360F8u;
        goto label_3360f8;
    }
    ctx->pc = 0x3360F0u;
    {
        const bool branch_taken_0x3360f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3360F0u;
            // 0x3360f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360f0) {
            ctx->pc = 0x336118u;
            goto label_336118;
        }
    }
    ctx->pc = 0x3360F8u;
label_3360f8:
    // 0x3360f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3360f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3360fc:
    // 0x3360fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3360fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_336100:
    // 0x336100: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x336100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
label_336104:
    // 0x336104: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x336104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
label_336108:
    // 0x336108: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x336108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33610c:
    // 0x33610c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336110:
    // 0x336110: 0xc0cd854  jal         func_336150
label_336114:
    if (ctx->pc == 0x336114u) {
        ctx->pc = 0x336114u;
            // 0x336114: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x336118u;
        goto label_336118;
    }
    ctx->pc = 0x336110u;
    SET_GPR_U32(ctx, 31, 0x336118u);
    ctx->pc = 0x336114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336110u;
            // 0x336114: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336150u;
    if (runtime->hasFunction(0x336150u)) {
        auto targetFn = runtime->lookupFunction(0x336150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336118u; }
        if (ctx->pc != 0x336118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336150_0x336150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336118u; }
        if (ctx->pc != 0x336118u) { return; }
    }
    ctx->pc = 0x336118u;
label_336118:
    // 0x336118: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x336118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_33611c:
    // 0x33611c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33611cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_336120:
    // 0x336120: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_336124:
    if (ctx->pc == 0x336124u) {
        ctx->pc = 0x336124u;
            // 0x336124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336128u;
        goto label_336128;
    }
    ctx->pc = 0x336120u;
    {
        const bool branch_taken_0x336120 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x336120) {
            ctx->pc = 0x336124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336120u;
            // 0x336124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336134u;
            goto label_336134;
        }
    }
    ctx->pc = 0x336128u;
label_336128:
    // 0x336128: 0xc0400a8  jal         func_1002A0
label_33612c:
    if (ctx->pc == 0x33612Cu) {
        ctx->pc = 0x33612Cu;
            // 0x33612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336130u;
        goto label_336130;
    }
    ctx->pc = 0x336128u;
    SET_GPR_U32(ctx, 31, 0x336130u);
    ctx->pc = 0x33612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336128u;
            // 0x33612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336130u; }
        if (ctx->pc != 0x336130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336130u; }
        if (ctx->pc != 0x336130u) { return; }
    }
    ctx->pc = 0x336130u;
label_336130:
    // 0x336130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336134:
    // 0x336134: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_336138:
    // 0x336138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33613c:
    // 0x33613c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_336140:
    // 0x336140: 0x3e00008  jr          $ra
label_336144:
    if (ctx->pc == 0x336144u) {
        ctx->pc = 0x336144u;
            // 0x336144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x336148u;
        goto label_336148;
    }
    ctx->pc = 0x336140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336140u;
            // 0x336144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336148u;
label_336148:
    // 0x336148: 0x0  nop
    ctx->pc = 0x336148u;
    // NOP
label_33614c:
    // 0x33614c: 0x0  nop
    ctx->pc = 0x33614cu;
    // NOP
}
