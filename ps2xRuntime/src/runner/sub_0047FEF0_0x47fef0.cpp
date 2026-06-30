#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047FEF0
// Address: 0x47fef0 - 0x4802f0
void sub_0047FEF0_0x47fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FEF0_0x47fef0");
#endif

    switch (ctx->pc) {
        case 0x47fef0u: goto label_47fef0;
        case 0x47fef4u: goto label_47fef4;
        case 0x47fef8u: goto label_47fef8;
        case 0x47fefcu: goto label_47fefc;
        case 0x47ff00u: goto label_47ff00;
        case 0x47ff04u: goto label_47ff04;
        case 0x47ff08u: goto label_47ff08;
        case 0x47ff0cu: goto label_47ff0c;
        case 0x47ff10u: goto label_47ff10;
        case 0x47ff14u: goto label_47ff14;
        case 0x47ff18u: goto label_47ff18;
        case 0x47ff1cu: goto label_47ff1c;
        case 0x47ff20u: goto label_47ff20;
        case 0x47ff24u: goto label_47ff24;
        case 0x47ff28u: goto label_47ff28;
        case 0x47ff2cu: goto label_47ff2c;
        case 0x47ff30u: goto label_47ff30;
        case 0x47ff34u: goto label_47ff34;
        case 0x47ff38u: goto label_47ff38;
        case 0x47ff3cu: goto label_47ff3c;
        case 0x47ff40u: goto label_47ff40;
        case 0x47ff44u: goto label_47ff44;
        case 0x47ff48u: goto label_47ff48;
        case 0x47ff4cu: goto label_47ff4c;
        case 0x47ff50u: goto label_47ff50;
        case 0x47ff54u: goto label_47ff54;
        case 0x47ff58u: goto label_47ff58;
        case 0x47ff5cu: goto label_47ff5c;
        case 0x47ff60u: goto label_47ff60;
        case 0x47ff64u: goto label_47ff64;
        case 0x47ff68u: goto label_47ff68;
        case 0x47ff6cu: goto label_47ff6c;
        case 0x47ff70u: goto label_47ff70;
        case 0x47ff74u: goto label_47ff74;
        case 0x47ff78u: goto label_47ff78;
        case 0x47ff7cu: goto label_47ff7c;
        case 0x47ff80u: goto label_47ff80;
        case 0x47ff84u: goto label_47ff84;
        case 0x47ff88u: goto label_47ff88;
        case 0x47ff8cu: goto label_47ff8c;
        case 0x47ff90u: goto label_47ff90;
        case 0x47ff94u: goto label_47ff94;
        case 0x47ff98u: goto label_47ff98;
        case 0x47ff9cu: goto label_47ff9c;
        case 0x47ffa0u: goto label_47ffa0;
        case 0x47ffa4u: goto label_47ffa4;
        case 0x47ffa8u: goto label_47ffa8;
        case 0x47ffacu: goto label_47ffac;
        case 0x47ffb0u: goto label_47ffb0;
        case 0x47ffb4u: goto label_47ffb4;
        case 0x47ffb8u: goto label_47ffb8;
        case 0x47ffbcu: goto label_47ffbc;
        case 0x47ffc0u: goto label_47ffc0;
        case 0x47ffc4u: goto label_47ffc4;
        case 0x47ffc8u: goto label_47ffc8;
        case 0x47ffccu: goto label_47ffcc;
        case 0x47ffd0u: goto label_47ffd0;
        case 0x47ffd4u: goto label_47ffd4;
        case 0x47ffd8u: goto label_47ffd8;
        case 0x47ffdcu: goto label_47ffdc;
        case 0x47ffe0u: goto label_47ffe0;
        case 0x47ffe4u: goto label_47ffe4;
        case 0x47ffe8u: goto label_47ffe8;
        case 0x47ffecu: goto label_47ffec;
        case 0x47fff0u: goto label_47fff0;
        case 0x47fff4u: goto label_47fff4;
        case 0x47fff8u: goto label_47fff8;
        case 0x47fffcu: goto label_47fffc;
        case 0x480000u: goto label_480000;
        case 0x480004u: goto label_480004;
        case 0x480008u: goto label_480008;
        case 0x48000cu: goto label_48000c;
        case 0x480010u: goto label_480010;
        case 0x480014u: goto label_480014;
        case 0x480018u: goto label_480018;
        case 0x48001cu: goto label_48001c;
        case 0x480020u: goto label_480020;
        case 0x480024u: goto label_480024;
        case 0x480028u: goto label_480028;
        case 0x48002cu: goto label_48002c;
        case 0x480030u: goto label_480030;
        case 0x480034u: goto label_480034;
        case 0x480038u: goto label_480038;
        case 0x48003cu: goto label_48003c;
        case 0x480040u: goto label_480040;
        case 0x480044u: goto label_480044;
        case 0x480048u: goto label_480048;
        case 0x48004cu: goto label_48004c;
        case 0x480050u: goto label_480050;
        case 0x480054u: goto label_480054;
        case 0x480058u: goto label_480058;
        case 0x48005cu: goto label_48005c;
        case 0x480060u: goto label_480060;
        case 0x480064u: goto label_480064;
        case 0x480068u: goto label_480068;
        case 0x48006cu: goto label_48006c;
        case 0x480070u: goto label_480070;
        case 0x480074u: goto label_480074;
        case 0x480078u: goto label_480078;
        case 0x48007cu: goto label_48007c;
        case 0x480080u: goto label_480080;
        case 0x480084u: goto label_480084;
        case 0x480088u: goto label_480088;
        case 0x48008cu: goto label_48008c;
        case 0x480090u: goto label_480090;
        case 0x480094u: goto label_480094;
        case 0x480098u: goto label_480098;
        case 0x48009cu: goto label_48009c;
        case 0x4800a0u: goto label_4800a0;
        case 0x4800a4u: goto label_4800a4;
        case 0x4800a8u: goto label_4800a8;
        case 0x4800acu: goto label_4800ac;
        case 0x4800b0u: goto label_4800b0;
        case 0x4800b4u: goto label_4800b4;
        case 0x4800b8u: goto label_4800b8;
        case 0x4800bcu: goto label_4800bc;
        case 0x4800c0u: goto label_4800c0;
        case 0x4800c4u: goto label_4800c4;
        case 0x4800c8u: goto label_4800c8;
        case 0x4800ccu: goto label_4800cc;
        case 0x4800d0u: goto label_4800d0;
        case 0x4800d4u: goto label_4800d4;
        case 0x4800d8u: goto label_4800d8;
        case 0x4800dcu: goto label_4800dc;
        case 0x4800e0u: goto label_4800e0;
        case 0x4800e4u: goto label_4800e4;
        case 0x4800e8u: goto label_4800e8;
        case 0x4800ecu: goto label_4800ec;
        case 0x4800f0u: goto label_4800f0;
        case 0x4800f4u: goto label_4800f4;
        case 0x4800f8u: goto label_4800f8;
        case 0x4800fcu: goto label_4800fc;
        case 0x480100u: goto label_480100;
        case 0x480104u: goto label_480104;
        case 0x480108u: goto label_480108;
        case 0x48010cu: goto label_48010c;
        case 0x480110u: goto label_480110;
        case 0x480114u: goto label_480114;
        case 0x480118u: goto label_480118;
        case 0x48011cu: goto label_48011c;
        case 0x480120u: goto label_480120;
        case 0x480124u: goto label_480124;
        case 0x480128u: goto label_480128;
        case 0x48012cu: goto label_48012c;
        case 0x480130u: goto label_480130;
        case 0x480134u: goto label_480134;
        case 0x480138u: goto label_480138;
        case 0x48013cu: goto label_48013c;
        case 0x480140u: goto label_480140;
        case 0x480144u: goto label_480144;
        case 0x480148u: goto label_480148;
        case 0x48014cu: goto label_48014c;
        case 0x480150u: goto label_480150;
        case 0x480154u: goto label_480154;
        case 0x480158u: goto label_480158;
        case 0x48015cu: goto label_48015c;
        case 0x480160u: goto label_480160;
        case 0x480164u: goto label_480164;
        case 0x480168u: goto label_480168;
        case 0x48016cu: goto label_48016c;
        case 0x480170u: goto label_480170;
        case 0x480174u: goto label_480174;
        case 0x480178u: goto label_480178;
        case 0x48017cu: goto label_48017c;
        case 0x480180u: goto label_480180;
        case 0x480184u: goto label_480184;
        case 0x480188u: goto label_480188;
        case 0x48018cu: goto label_48018c;
        case 0x480190u: goto label_480190;
        case 0x480194u: goto label_480194;
        case 0x480198u: goto label_480198;
        case 0x48019cu: goto label_48019c;
        case 0x4801a0u: goto label_4801a0;
        case 0x4801a4u: goto label_4801a4;
        case 0x4801a8u: goto label_4801a8;
        case 0x4801acu: goto label_4801ac;
        case 0x4801b0u: goto label_4801b0;
        case 0x4801b4u: goto label_4801b4;
        case 0x4801b8u: goto label_4801b8;
        case 0x4801bcu: goto label_4801bc;
        case 0x4801c0u: goto label_4801c0;
        case 0x4801c4u: goto label_4801c4;
        case 0x4801c8u: goto label_4801c8;
        case 0x4801ccu: goto label_4801cc;
        case 0x4801d0u: goto label_4801d0;
        case 0x4801d4u: goto label_4801d4;
        case 0x4801d8u: goto label_4801d8;
        case 0x4801dcu: goto label_4801dc;
        case 0x4801e0u: goto label_4801e0;
        case 0x4801e4u: goto label_4801e4;
        case 0x4801e8u: goto label_4801e8;
        case 0x4801ecu: goto label_4801ec;
        case 0x4801f0u: goto label_4801f0;
        case 0x4801f4u: goto label_4801f4;
        case 0x4801f8u: goto label_4801f8;
        case 0x4801fcu: goto label_4801fc;
        case 0x480200u: goto label_480200;
        case 0x480204u: goto label_480204;
        case 0x480208u: goto label_480208;
        case 0x48020cu: goto label_48020c;
        case 0x480210u: goto label_480210;
        case 0x480214u: goto label_480214;
        case 0x480218u: goto label_480218;
        case 0x48021cu: goto label_48021c;
        case 0x480220u: goto label_480220;
        case 0x480224u: goto label_480224;
        case 0x480228u: goto label_480228;
        case 0x48022cu: goto label_48022c;
        case 0x480230u: goto label_480230;
        case 0x480234u: goto label_480234;
        case 0x480238u: goto label_480238;
        case 0x48023cu: goto label_48023c;
        case 0x480240u: goto label_480240;
        case 0x480244u: goto label_480244;
        case 0x480248u: goto label_480248;
        case 0x48024cu: goto label_48024c;
        case 0x480250u: goto label_480250;
        case 0x480254u: goto label_480254;
        case 0x480258u: goto label_480258;
        case 0x48025cu: goto label_48025c;
        case 0x480260u: goto label_480260;
        case 0x480264u: goto label_480264;
        case 0x480268u: goto label_480268;
        case 0x48026cu: goto label_48026c;
        case 0x480270u: goto label_480270;
        case 0x480274u: goto label_480274;
        case 0x480278u: goto label_480278;
        case 0x48027cu: goto label_48027c;
        case 0x480280u: goto label_480280;
        case 0x480284u: goto label_480284;
        case 0x480288u: goto label_480288;
        case 0x48028cu: goto label_48028c;
        case 0x480290u: goto label_480290;
        case 0x480294u: goto label_480294;
        case 0x480298u: goto label_480298;
        case 0x48029cu: goto label_48029c;
        case 0x4802a0u: goto label_4802a0;
        case 0x4802a4u: goto label_4802a4;
        case 0x4802a8u: goto label_4802a8;
        case 0x4802acu: goto label_4802ac;
        case 0x4802b0u: goto label_4802b0;
        case 0x4802b4u: goto label_4802b4;
        case 0x4802b8u: goto label_4802b8;
        case 0x4802bcu: goto label_4802bc;
        case 0x4802c0u: goto label_4802c0;
        case 0x4802c4u: goto label_4802c4;
        case 0x4802c8u: goto label_4802c8;
        case 0x4802ccu: goto label_4802cc;
        case 0x4802d0u: goto label_4802d0;
        case 0x4802d4u: goto label_4802d4;
        case 0x4802d8u: goto label_4802d8;
        case 0x4802dcu: goto label_4802dc;
        case 0x4802e0u: goto label_4802e0;
        case 0x4802e4u: goto label_4802e4;
        case 0x4802e8u: goto label_4802e8;
        case 0x4802ecu: goto label_4802ec;
        default: break;
    }

    ctx->pc = 0x47fef0u;

label_47fef0:
    // 0x47fef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47fef4:
    // 0x47fef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47fef8:
    // 0x47fef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47fefc:
    // 0x47fefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ff00:
    // 0x47ff00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ff04:
    // 0x47ff04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ff04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ff08:
    // 0x47ff08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47ff08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_47ff0c:
    // 0x47ff0c: 0x320f809  jalr        $t9
label_47ff10:
    if (ctx->pc == 0x47FF10u) {
        ctx->pc = 0x47FF10u;
            // 0x47ff10: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FF14u;
        goto label_47ff14;
    }
    ctx->pc = 0x47FF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FF14u);
        ctx->pc = 0x47FF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF0Cu;
            // 0x47ff10: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FF14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FF14u; }
            if (ctx->pc != 0x47FF14u) { return; }
        }
        }
    }
    ctx->pc = 0x47FF14u;
label_47ff14:
    // 0x47ff14: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x47ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_47ff18:
    // 0x47ff18: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x47ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47ff1c:
    // 0x47ff1c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x47ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_47ff20:
    // 0x47ff20: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x47ff20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_47ff24:
    // 0x47ff24: 0xc0d8760  jal         func_361D80
label_47ff28:
    if (ctx->pc == 0x47FF28u) {
        ctx->pc = 0x47FF28u;
            // 0x47ff28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FF2Cu;
        goto label_47ff2c;
    }
    ctx->pc = 0x47FF24u;
    SET_GPR_U32(ctx, 31, 0x47FF2Cu);
    ctx->pc = 0x47FF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF24u;
            // 0x47ff28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FF2Cu; }
        if (ctx->pc != 0x47FF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FF2Cu; }
        if (ctx->pc != 0x47FF2Cu) { return; }
    }
    ctx->pc = 0x47FF2Cu;
label_47ff2c:
    // 0x47ff2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47ff2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ff30:
    // 0x47ff30: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x47ff30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_47ff34:
    // 0x47ff34: 0x320f809  jalr        $t9
label_47ff38:
    if (ctx->pc == 0x47FF38u) {
        ctx->pc = 0x47FF38u;
            // 0x47ff38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FF3Cu;
        goto label_47ff3c;
    }
    ctx->pc = 0x47FF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FF3Cu);
        ctx->pc = 0x47FF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF34u;
            // 0x47ff38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FF3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FF3Cu; }
            if (ctx->pc != 0x47FF3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47FF3Cu;
label_47ff3c:
    // 0x47ff3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47ff3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ff40:
    // 0x47ff40: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x47ff40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_47ff44:
    // 0x47ff44: 0x320f809  jalr        $t9
label_47ff48:
    if (ctx->pc == 0x47FF48u) {
        ctx->pc = 0x47FF48u;
            // 0x47ff48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FF4Cu;
        goto label_47ff4c;
    }
    ctx->pc = 0x47FF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FF4Cu);
        ctx->pc = 0x47FF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF44u;
            // 0x47ff48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FF4Cu; }
            if (ctx->pc != 0x47FF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47FF4Cu;
label_47ff4c:
    // 0x47ff4c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x47ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_47ff50:
    // 0x47ff50: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x47ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_47ff54:
    // 0x47ff54: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x47ff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_47ff58:
    // 0x47ff58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ff5c:
    // 0x47ff5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ff60:
    // 0x47ff60: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x47ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_47ff64:
    // 0x47ff64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47ff68:
    // 0x47ff68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47ff6c:
    // 0x47ff6c: 0xc08bff0  jal         func_22FFC0
label_47ff70:
    if (ctx->pc == 0x47FF70u) {
        ctx->pc = 0x47FF70u;
            // 0x47ff70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FF74u;
        goto label_47ff74;
    }
    ctx->pc = 0x47FF6Cu;
    SET_GPR_U32(ctx, 31, 0x47FF74u);
    ctx->pc = 0x47FF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF6Cu;
            // 0x47ff70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FF74u; }
        if (ctx->pc != 0x47FF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FF74u; }
        if (ctx->pc != 0x47FF74u) { return; }
    }
    ctx->pc = 0x47FF74u;
label_47ff74:
    // 0x47ff74: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x47ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_47ff78:
    // 0x47ff78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47ff78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47ff7c:
    // 0x47ff7c: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
label_47ff80:
    if (ctx->pc == 0x47FF80u) {
        ctx->pc = 0x47FF80u;
            // 0x47ff80: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x47FF84u;
        goto label_47ff84;
    }
    ctx->pc = 0x47FF7Cu;
    {
        const bool branch_taken_0x47ff7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FF7Cu;
            // 0x47ff80: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ff7c) {
            ctx->pc = 0x47FF24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ff24;
        }
    }
    ctx->pc = 0x47FF84u;
label_47ff84:
    // 0x47ff84: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x47ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ff88:
    // 0x47ff88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47ff8c:
    // 0x47ff8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47ff90:
    // 0x47ff90: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x47ff90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47ff94:
    // 0x47ff94: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x47ff94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_47ff98:
    // 0x47ff98: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x47ff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_47ff9c:
    // 0x47ff9c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x47ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_47ffa0:
    // 0x47ffa0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x47ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ffa4:
    // 0x47ffa4: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x47ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_47ffa8:
    // 0x47ffa8: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x47ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_47ffac:
    // 0x47ffac: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x47ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_47ffb0:
    // 0x47ffb0: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x47ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_47ffb4:
    // 0x47ffb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47ffb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ffb8:
    // 0x47ffb8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x47ffb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_47ffbc:
    // 0x47ffbc: 0x320f809  jalr        $t9
label_47ffc0:
    if (ctx->pc == 0x47FFC0u) {
        ctx->pc = 0x47FFC0u;
            // 0x47ffc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FFC4u;
        goto label_47ffc4;
    }
    ctx->pc = 0x47FFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FFC4u);
        ctx->pc = 0x47FFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FFBCu;
            // 0x47ffc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FFC4u; }
            if (ctx->pc != 0x47FFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x47FFC4u;
label_47ffc4:
    // 0x47ffc4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47ffc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47ffc8:
    // 0x47ffc8: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_47ffcc:
    if (ctx->pc == 0x47FFCCu) {
        ctx->pc = 0x47FFCCu;
            // 0x47ffcc: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x47FFD0u;
        goto label_47ffd0;
    }
    ctx->pc = 0x47FFC8u;
    {
        const bool branch_taken_0x47ffc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FFC8u;
            // 0x47ffcc: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ffc8) {
            ctx->pc = 0x47FFB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ffb4;
        }
    }
    ctx->pc = 0x47FFD0u;
label_47ffd0:
    // 0x47ffd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47ffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47ffd4:
    // 0x47ffd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ffd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ffd8:
    // 0x47ffd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ffd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ffdc:
    // 0x47ffdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ffdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ffe0:
    // 0x47ffe0: 0x3e00008  jr          $ra
label_47ffe4:
    if (ctx->pc == 0x47FFE4u) {
        ctx->pc = 0x47FFE4u;
            // 0x47ffe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x47FFE8u;
        goto label_47ffe8;
    }
    ctx->pc = 0x47FFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FFE0u;
            // 0x47ffe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47FFE8u;
label_47ffe8:
    // 0x47ffe8: 0x0  nop
    ctx->pc = 0x47ffe8u;
    // NOP
label_47ffec:
    // 0x47ffec: 0x0  nop
    ctx->pc = 0x47ffecu;
    // NOP
label_47fff0:
    // 0x47fff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47fff4:
    // 0x47fff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47fff8:
    // 0x47fff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47fffc:
    // 0x47fffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480000:
    // 0x480000: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x480000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_480004:
    // 0x480004: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x480004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_480008:
    // 0x480008: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_48000c:
    if (ctx->pc == 0x48000Cu) {
        ctx->pc = 0x48000Cu;
            // 0x48000c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480010u;
        goto label_480010;
    }
    ctx->pc = 0x480008u;
    {
        const bool branch_taken_0x480008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480008u;
            // 0x48000c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480008) {
            ctx->pc = 0x48012Cu;
            goto label_48012c;
        }
    }
    ctx->pc = 0x480010u;
label_480010:
    // 0x480010: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x480010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_480014:
    // 0x480014: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x480014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_480018:
    // 0x480018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x480018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48001c:
    // 0x48001c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x48001cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_480020:
    // 0x480020: 0x320f809  jalr        $t9
label_480024:
    if (ctx->pc == 0x480024u) {
        ctx->pc = 0x480028u;
        goto label_480028;
    }
    ctx->pc = 0x480020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480028u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x480028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480028u; }
            if (ctx->pc != 0x480028u) { return; }
        }
        }
    }
    ctx->pc = 0x480028u;
label_480028:
    // 0x480028: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x480028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_48002c:
    // 0x48002c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48002cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480030:
    // 0x480030: 0xc075128  jal         func_1D44A0
label_480034:
    if (ctx->pc == 0x480034u) {
        ctx->pc = 0x480034u;
            // 0x480034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480038u;
        goto label_480038;
    }
    ctx->pc = 0x480030u;
    SET_GPR_U32(ctx, 31, 0x480038u);
    ctx->pc = 0x480034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480030u;
            // 0x480034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480038u; }
        if (ctx->pc != 0x480038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480038u; }
        if (ctx->pc != 0x480038u) { return; }
    }
    ctx->pc = 0x480038u;
label_480038:
    // 0x480038: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x480038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48003c:
    // 0x48003c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480040:
    // 0x480040: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x480040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_480044:
    // 0x480044: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x480044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_480048:
    // 0x480048: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x480048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_48004c:
    // 0x48004c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_480050:
    if (ctx->pc == 0x480050u) {
        ctx->pc = 0x480050u;
            // 0x480050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x480054u;
        goto label_480054;
    }
    ctx->pc = 0x48004Cu;
    {
        const bool branch_taken_0x48004c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48004c) {
            ctx->pc = 0x480050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48004Cu;
            // 0x480050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480060u;
            goto label_480060;
        }
    }
    ctx->pc = 0x480054u;
label_480054:
    // 0x480054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480058:
    // 0x480058: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x480058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_48005c:
    // 0x48005c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_480060:
    // 0x480060: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480064:
    // 0x480064: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x480064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_480068:
    // 0x480068: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x480068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48006c:
    // 0x48006c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x48006cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_480070:
    // 0x480070: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_480074:
    if (ctx->pc == 0x480074u) {
        ctx->pc = 0x480074u;
            // 0x480074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x480078u;
        goto label_480078;
    }
    ctx->pc = 0x480070u;
    {
        const bool branch_taken_0x480070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x480070) {
            ctx->pc = 0x480074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480070u;
            // 0x480074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480084u;
            goto label_480084;
        }
    }
    ctx->pc = 0x480078u;
label_480078:
    // 0x480078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48007c:
    // 0x48007c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x48007cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_480080:
    // 0x480080: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x480080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_480084:
    // 0x480084: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480088:
    // 0x480088: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x480088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_48008c:
    // 0x48008c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x48008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_480090:
    // 0x480090: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x480090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_480094:
    // 0x480094: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_480098:
    if (ctx->pc == 0x480098u) {
        ctx->pc = 0x480098u;
            // 0x480098: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x48009Cu;
        goto label_48009c;
    }
    ctx->pc = 0x480094u;
    {
        const bool branch_taken_0x480094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x480094) {
            ctx->pc = 0x480098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480094u;
            // 0x480098: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4800A8u;
            goto label_4800a8;
        }
    }
    ctx->pc = 0x48009Cu;
label_48009c:
    // 0x48009c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800a0:
    // 0x4800a0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4800a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4800a4:
    // 0x4800a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4800a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4800a8:
    // 0x4800a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4800a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800ac:
    // 0x4800ac: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4800acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4800b0:
    // 0x4800b0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4800b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4800b4:
    // 0x4800b4: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4800b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4800b8:
    // 0x4800b8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4800b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4800bc:
    // 0x4800bc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4800c0:
    if (ctx->pc == 0x4800C0u) {
        ctx->pc = 0x4800C0u;
            // 0x4800c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4800C4u;
        goto label_4800c4;
    }
    ctx->pc = 0x4800BCu;
    {
        const bool branch_taken_0x4800bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4800bc) {
            ctx->pc = 0x4800C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4800BCu;
            // 0x4800c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4800D0u;
            goto label_4800d0;
        }
    }
    ctx->pc = 0x4800C4u;
label_4800c4:
    // 0x4800c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4800c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800c8:
    // 0x4800c8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4800c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4800cc:
    // 0x4800cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4800ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4800d0:
    // 0x4800d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4800d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800d4:
    // 0x4800d4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4800d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4800d8:
    // 0x4800d8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4800d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4800dc:
    // 0x4800dc: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4800dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4800e0:
    // 0x4800e0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4800e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4800e4:
    // 0x4800e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4800e8:
    if (ctx->pc == 0x4800E8u) {
        ctx->pc = 0x4800ECu;
        goto label_4800ec;
    }
    ctx->pc = 0x4800E4u;
    {
        const bool branch_taken_0x4800e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4800e4) {
            ctx->pc = 0x4800F4u;
            goto label_4800f4;
        }
    }
    ctx->pc = 0x4800ECu;
label_4800ec:
    // 0x4800ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4800ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800f0:
    // 0x4800f0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4800f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4800f4:
    // 0x4800f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4800f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4800f8:
    // 0x4800f8: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4800f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4800fc:
    // 0x4800fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4800fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_480100:
    // 0x480100: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_480104:
    if (ctx->pc == 0x480104u) {
        ctx->pc = 0x480108u;
        goto label_480108;
    }
    ctx->pc = 0x480100u;
    {
        const bool branch_taken_0x480100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x480100) {
            ctx->pc = 0x480110u;
            goto label_480110;
        }
    }
    ctx->pc = 0x480108u;
label_480108:
    // 0x480108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48010c:
    // 0x48010c: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x48010cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_480110:
    // 0x480110: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480114:
    // 0x480114: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x480114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_480118:
    // 0x480118: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x480118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_48011c:
    // 0x48011c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_480120:
    if (ctx->pc == 0x480120u) {
        ctx->pc = 0x480120u;
            // 0x480120: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x480124u;
        goto label_480124;
    }
    ctx->pc = 0x48011Cu;
    {
        const bool branch_taken_0x48011c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48011c) {
            ctx->pc = 0x480120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48011Cu;
            // 0x480120: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480130u;
            goto label_480130;
        }
    }
    ctx->pc = 0x480124u;
label_480124:
    // 0x480124: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x480124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_480128:
    // 0x480128: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x480128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_48012c:
    // 0x48012c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_480130:
    // 0x480130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480134:
    // 0x480134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480138:
    // 0x480138: 0x3e00008  jr          $ra
label_48013c:
    if (ctx->pc == 0x48013Cu) {
        ctx->pc = 0x48013Cu;
            // 0x48013c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x480140u;
        goto label_480140;
    }
    ctx->pc = 0x480138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480138u;
            // 0x48013c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480140u;
label_480140:
    // 0x480140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x480140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_480144:
    // 0x480144: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x480144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_480148:
    // 0x480148: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x480148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_48014c:
    // 0x48014c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480150:
    // 0x480150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x480150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_480154:
    // 0x480154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x480154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480158:
    // 0x480158: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x480158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48015c:
    // 0x48015c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x48015cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480160:
    // 0x480160: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x480160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_480164:
    // 0x480164: 0x24a5fa10  addiu       $a1, $a1, -0x5F0
    ctx->pc = 0x480164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965776));
label_480168:
    // 0x480168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x480168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48016c:
    // 0x48016c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_480170:
    // 0x480170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480174:
    // 0x480174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480178:
    // 0x480178: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x480178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
label_48017c:
    // 0x48017c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48017cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480180:
    // 0x480180: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x480180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
label_480184:
    // 0x480184: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x480184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_480188:
    // 0x480188: 0x8c920070  lw          $s2, 0x70($a0)
    ctx->pc = 0x480188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_48018c:
    // 0x48018c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x48018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_480190:
    // 0x480190: 0x24670240  addiu       $a3, $v1, 0x240
    ctx->pc = 0x480190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
label_480194:
    // 0x480194: 0xac8700d8  sw          $a3, 0xD8($a0)
    ctx->pc = 0x480194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 7));
label_480198:
    // 0x480198: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x480198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48019c:
    // 0x48019c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x48019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4801a0:
    // 0x4801a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4801a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4801a4:
    // 0x4801a4: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x4801a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4801a8:
    // 0x4801a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4801a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4801ac:
    // 0x4801ac: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x4801acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_4801b0:
    // 0x4801b0: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x4801b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_4801b4:
    // 0x4801b4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x4801b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_4801b8:
    // 0x4801b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4801b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4801bc:
    // 0x4801bc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4801c0:
    if (ctx->pc == 0x4801C0u) {
        ctx->pc = 0x4801C0u;
            // 0x4801c0: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->pc = 0x4801C4u;
        goto label_4801c4;
    }
    ctx->pc = 0x4801BCu;
    {
        const bool branch_taken_0x4801bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4801C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4801BCu;
            // 0x4801c0: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4801bc) {
            ctx->pc = 0x480198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_480198;
        }
    }
    ctx->pc = 0x4801C4u;
label_4801c4:
    // 0x4801c4: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
label_4801c8:
    if (ctx->pc == 0x4801C8u) {
        ctx->pc = 0x4801CCu;
        goto label_4801cc;
    }
    ctx->pc = 0x4801C4u;
    {
        const bool branch_taken_0x4801c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4801c4) {
            ctx->pc = 0x4802C0u;
            goto label_4802c0;
        }
    }
    ctx->pc = 0x4801CCu;
label_4801cc:
    // 0x4801cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4801ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4801d0:
    // 0x4801d0: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4801d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4801d4:
    // 0x4801d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4801d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4801d8:
    // 0x4801d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4801d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4801dc:
    // 0x4801dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4801dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4801e0:
    // 0x4801e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4801e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4801e4:
    // 0x4801e4: 0x320f809  jalr        $t9
label_4801e8:
    if (ctx->pc == 0x4801E8u) {
        ctx->pc = 0x4801E8u;
            // 0x4801e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4801ECu;
        goto label_4801ec;
    }
    ctx->pc = 0x4801E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4801ECu);
        ctx->pc = 0x4801E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4801E4u;
            // 0x4801e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4801ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4801ECu; }
            if (ctx->pc != 0x4801ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4801ECu;
label_4801ec:
    // 0x4801ec: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x4801ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_4801f0:
    // 0x4801f0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x4801f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4801f4:
    // 0x4801f4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x4801f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_4801f8:
    // 0x4801f8: 0x26340080  addiu       $s4, $s1, 0x80
    ctx->pc = 0x4801f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_4801fc:
    // 0x4801fc: 0x0  nop
    ctx->pc = 0x4801fcu;
    // NOP
label_480200:
    // 0x480200: 0xc0d8760  jal         func_361D80
label_480204:
    if (ctx->pc == 0x480204u) {
        ctx->pc = 0x480204u;
            // 0x480204: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480208u;
        goto label_480208;
    }
    ctx->pc = 0x480200u;
    SET_GPR_U32(ctx, 31, 0x480208u);
    ctx->pc = 0x480204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480200u;
            // 0x480204: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480208u; }
        if (ctx->pc != 0x480208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480208u; }
        if (ctx->pc != 0x480208u) { return; }
    }
    ctx->pc = 0x480208u;
label_480208:
    // 0x480208: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x480208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48020c:
    // 0x48020c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48020cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_480210:
    // 0x480210: 0x320f809  jalr        $t9
label_480214:
    if (ctx->pc == 0x480214u) {
        ctx->pc = 0x480214u;
            // 0x480214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480218u;
        goto label_480218;
    }
    ctx->pc = 0x480210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480218u);
        ctx->pc = 0x480214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480210u;
            // 0x480214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480218u; }
            if (ctx->pc != 0x480218u) { return; }
        }
        }
    }
    ctx->pc = 0x480218u;
label_480218:
    // 0x480218: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x480218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48021c:
    // 0x48021c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x48021cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_480220:
    // 0x480220: 0x320f809  jalr        $t9
label_480224:
    if (ctx->pc == 0x480224u) {
        ctx->pc = 0x480224u;
            // 0x480224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480228u;
        goto label_480228;
    }
    ctx->pc = 0x480220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480228u);
        ctx->pc = 0x480224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480220u;
            // 0x480224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480228u; }
            if (ctx->pc != 0x480228u) { return; }
        }
        }
    }
    ctx->pc = 0x480228u;
label_480228:
    // 0x480228: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x480228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_48022c:
    // 0x48022c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x48022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_480230:
    // 0x480230: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x480230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_480234:
    // 0x480234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x480234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480238:
    // 0x480238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48023c:
    // 0x48023c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x48023cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_480240:
    // 0x480240: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x480240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_480244:
    // 0x480244: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x480244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_480248:
    // 0x480248: 0xc08bff0  jal         func_22FFC0
label_48024c:
    if (ctx->pc == 0x48024Cu) {
        ctx->pc = 0x48024Cu;
            // 0x48024c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480250u;
        goto label_480250;
    }
    ctx->pc = 0x480248u;
    SET_GPR_U32(ctx, 31, 0x480250u);
    ctx->pc = 0x48024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480248u;
            // 0x48024c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480250u; }
        if (ctx->pc != 0x480250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480250u; }
        if (ctx->pc != 0x480250u) { return; }
    }
    ctx->pc = 0x480250u;
label_480250:
    // 0x480250: 0xae8000d0  sw          $zero, 0xD0($s4)
    ctx->pc = 0x480250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
label_480254:
    // 0x480254: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x480254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_480258:
    // 0x480258: 0x16a0ffe9  bnez        $s5, . + 4 + (-0x17 << 2)
label_48025c:
    if (ctx->pc == 0x48025Cu) {
        ctx->pc = 0x48025Cu;
            // 0x48025c: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->pc = 0x480260u;
        goto label_480260;
    }
    ctx->pc = 0x480258u;
    {
        const bool branch_taken_0x480258 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x48025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480258u;
            // 0x48025c: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480258) {
            ctx->pc = 0x480200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_480200;
        }
    }
    ctx->pc = 0x480260u;
label_480260:
    // 0x480260: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x480260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480264:
    // 0x480264: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x480264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_480268:
    // 0x480268: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x480268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48026c:
    // 0x48026c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x48026cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_480270:
    // 0x480270: 0x26340080  addiu       $s4, $s1, 0x80
    ctx->pc = 0x480270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_480274:
    // 0x480274: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x480274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_480278:
    // 0x480278: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x480278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_48027c:
    // 0x48027c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x48027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480280:
    // 0x480280: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x480280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_480284:
    // 0x480284: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x480284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_480288:
    // 0x480288: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x480288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_48028c:
    // 0x48028c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x48028cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_480290:
    // 0x480290: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x480290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_480294:
    // 0x480294: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x480294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_480298:
    // 0x480298: 0x320f809  jalr        $t9
label_48029c:
    if (ctx->pc == 0x48029Cu) {
        ctx->pc = 0x48029Cu;
            // 0x48029c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4802A0u;
        goto label_4802a0;
    }
    ctx->pc = 0x480298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4802A0u);
        ctx->pc = 0x48029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480298u;
            // 0x48029c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4802A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4802A0u; }
            if (ctx->pc != 0x4802A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4802A0u;
label_4802a0:
    // 0x4802a0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4802a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_4802a4:
    // 0x4802a4: 0x16a0fffa  bnez        $s5, . + 4 + (-0x6 << 2)
label_4802a8:
    if (ctx->pc == 0x4802A8u) {
        ctx->pc = 0x4802A8u;
            // 0x4802a8: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->pc = 0x4802ACu;
        goto label_4802ac;
    }
    ctx->pc = 0x4802A4u;
    {
        const bool branch_taken_0x4802a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4802A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4802A4u;
            // 0x4802a8: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802a4) {
            ctx->pc = 0x480290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_480290;
        }
    }
    ctx->pc = 0x4802ACu;
label_4802ac:
    // 0x4802ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4802acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4802b0:
    // 0x4802b0: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4802b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4802b4:
    // 0x4802b4: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_4802b8:
    if (ctx->pc == 0x4802B8u) {
        ctx->pc = 0x4802B8u;
            // 0x4802b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4802BCu;
        goto label_4802bc;
    }
    ctx->pc = 0x4802B4u;
    {
        const bool branch_taken_0x4802b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4802B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4802B4u;
            // 0x4802b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802b4) {
            ctx->pc = 0x4801D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4801d0;
        }
    }
    ctx->pc = 0x4802BCu;
label_4802bc:
    // 0x4802bc: 0x0  nop
    ctx->pc = 0x4802bcu;
    // NOP
label_4802c0:
    // 0x4802c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4802c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4802c4:
    // 0x4802c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4802c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4802c8:
    // 0x4802c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4802c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4802cc:
    // 0x4802cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4802ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4802d0:
    // 0x4802d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4802d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4802d4:
    // 0x4802d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4802d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4802d8:
    // 0x4802d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4802d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4802dc:
    // 0x4802dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4802dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4802e0:
    // 0x4802e0: 0x3e00008  jr          $ra
label_4802e4:
    if (ctx->pc == 0x4802E4u) {
        ctx->pc = 0x4802E4u;
            // 0x4802e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4802E8u;
        goto label_4802e8;
    }
    ctx->pc = 0x4802E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4802E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4802E0u;
            // 0x4802e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4802E8u;
label_4802e8:
    // 0x4802e8: 0x0  nop
    ctx->pc = 0x4802e8u;
    // NOP
label_4802ec:
    // 0x4802ec: 0x0  nop
    ctx->pc = 0x4802ecu;
    // NOP
}
