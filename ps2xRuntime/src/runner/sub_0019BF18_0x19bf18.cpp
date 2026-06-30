#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BF18
// Address: 0x19bf18 - 0x19c150
void sub_0019BF18_0x19bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF18_0x19bf18");
#endif

    switch (ctx->pc) {
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf1cu: goto label_19bf1c;
        case 0x19bf20u: goto label_19bf20;
        case 0x19bf24u: goto label_19bf24;
        case 0x19bf28u: goto label_19bf28;
        case 0x19bf2cu: goto label_19bf2c;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf34u: goto label_19bf34;
        case 0x19bf38u: goto label_19bf38;
        case 0x19bf3cu: goto label_19bf3c;
        case 0x19bf40u: goto label_19bf40;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf48u: goto label_19bf48;
        case 0x19bf4cu: goto label_19bf4c;
        case 0x19bf50u: goto label_19bf50;
        case 0x19bf54u: goto label_19bf54;
        case 0x19bf58u: goto label_19bf58;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf60u: goto label_19bf60;
        case 0x19bf64u: goto label_19bf64;
        case 0x19bf68u: goto label_19bf68;
        case 0x19bf6cu: goto label_19bf6c;
        case 0x19bf70u: goto label_19bf70;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf78u: goto label_19bf78;
        case 0x19bf7cu: goto label_19bf7c;
        case 0x19bf80u: goto label_19bf80;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf8cu: goto label_19bf8c;
        case 0x19bf90u: goto label_19bf90;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bf98u: goto label_19bf98;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfacu: goto label_19bfac;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19bfb8u: goto label_19bfb8;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bfc0u: goto label_19bfc0;
        case 0x19bfc4u: goto label_19bfc4;
        case 0x19bfc8u: goto label_19bfc8;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bfd4u: goto label_19bfd4;
        case 0x19bfd8u: goto label_19bfd8;
        case 0x19bfdcu: goto label_19bfdc;
        case 0x19bfe0u: goto label_19bfe0;
        case 0x19bfe4u: goto label_19bfe4;
        case 0x19bfe8u: goto label_19bfe8;
        case 0x19bfecu: goto label_19bfec;
        case 0x19bff0u: goto label_19bff0;
        case 0x19bff4u: goto label_19bff4;
        case 0x19bff8u: goto label_19bff8;
        case 0x19bffcu: goto label_19bffc;
        case 0x19c000u: goto label_19c000;
        case 0x19c004u: goto label_19c004;
        case 0x19c008u: goto label_19c008;
        case 0x19c00cu: goto label_19c00c;
        case 0x19c010u: goto label_19c010;
        case 0x19c014u: goto label_19c014;
        case 0x19c018u: goto label_19c018;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c020u: goto label_19c020;
        case 0x19c024u: goto label_19c024;
        case 0x19c028u: goto label_19c028;
        case 0x19c02cu: goto label_19c02c;
        case 0x19c030u: goto label_19c030;
        case 0x19c034u: goto label_19c034;
        case 0x19c038u: goto label_19c038;
        case 0x19c03cu: goto label_19c03c;
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        default: break;
    }

    ctx->pc = 0x19bf18u;

label_19bf18:
    // 0x19bf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19bf1c:
    // 0x19bf1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19bf20:
    // 0x19bf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bf24:
    // 0x19bf24: 0x8066fcc  j           func_19BF30
label_19bf28:
    if (ctx->pc == 0x19BF28u) {
        ctx->pc = 0x19BF28u;
            // 0x19bf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19BF2Cu;
        goto label_19bf2c;
    }
    ctx->pc = 0x19BF24u;
    ctx->pc = 0x19BF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF24u;
            // 0x19bf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF30u;
    goto label_19bf30;
    ctx->pc = 0x19BF2Cu;
label_19bf2c:
    // 0x19bf2c: 0x0  nop
    ctx->pc = 0x19bf2cu;
    // NOP
label_19bf30:
    // 0x19bf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19bf34:
    // 0x19bf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bf38:
    // 0x19bf38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19bf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19bf3c:
    // 0x19bf3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19bf40:
    // 0x19bf40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19bf44:
    // 0x19bf44: 0xc06756a  jal         func_19D5A8
label_19bf48:
    if (ctx->pc == 0x19BF48u) {
        ctx->pc = 0x19BF48u;
            // 0x19bf48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BF4Cu;
        goto label_19bf4c;
    }
    ctx->pc = 0x19BF44u;
    SET_GPR_U32(ctx, 31, 0x19BF4Cu);
    ctx->pc = 0x19BF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF44u;
            // 0x19bf48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF4Cu; }
        if (ctx->pc != 0x19BF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF4Cu; }
        if (ctx->pc != 0x19BF4Cu) { return; }
    }
    ctx->pc = 0x19BF4Cu;
label_19bf4c:
    // 0x19bf4c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19bf50:
    // 0x19bf50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bf54:
    // 0x19bf54: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_19bf58:
    if (ctx->pc == 0x19BF58u) {
        ctx->pc = 0x19BF58u;
            // 0x19bf58: 0x24849420  addiu       $a0, $a0, -0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
        ctx->pc = 0x19BF5Cu;
        goto label_19bf5c;
    }
    ctx->pc = 0x19BF54u;
    {
        const bool branch_taken_0x19bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF54u;
            // 0x19bf58: 0x24849420  addiu       $a0, $a0, -0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf54) {
            ctx->pc = 0x19BF70u;
            goto label_19bf70;
        }
    }
    ctx->pc = 0x19BF5Cu;
label_19bf5c:
    // 0x19bf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bf60:
    // 0x19bf60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19bf64:
    // 0x19bf64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bf68:
    // 0x19bf68: 0x80686c6  j           func_1A1B18
label_19bf6c:
    if (ctx->pc == 0x19BF6Cu) {
        ctx->pc = 0x19BF6Cu;
            // 0x19bf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19BF70u;
        goto label_19bf70;
    }
    ctx->pc = 0x19BF68u;
    ctx->pc = 0x19BF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF68u;
            // 0x19bf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BF70u;
label_19bf70:
    // 0x19bf70: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_19bf74:
    if (ctx->pc == 0x19BF74u) {
        ctx->pc = 0x19BF74u;
            // 0x19bf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BF78u;
        goto label_19bf78;
    }
    ctx->pc = 0x19BF70u;
    {
        const bool branch_taken_0x19bf70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF70u;
            // 0x19bf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf70) {
            ctx->pc = 0x19BF98u;
            goto label_19bf98;
        }
    }
    ctx->pc = 0x19BF78u;
label_19bf78:
    // 0x19bf78: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19bf7c:
    // 0x19bf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bf80:
    // 0x19bf80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19bf84:
    // 0x19bf84: 0x24849450  addiu       $a0, $a0, -0x6BB0
    ctx->pc = 0x19bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939728));
label_19bf88:
    // 0x19bf88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bf8c:
    // 0x19bf8c: 0x80686c6  j           func_1A1B18
label_19bf90:
    if (ctx->pc == 0x19BF90u) {
        ctx->pc = 0x19BF90u;
            // 0x19bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19BF94u;
        goto label_19bf94;
    }
    ctx->pc = 0x19BF8Cu;
    ctx->pc = 0x19BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF8Cu;
            // 0x19bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BF94u;
label_19bf94:
    // 0x19bf94: 0x0  nop
    ctx->pc = 0x19bf94u;
    // NOP
label_19bf98:
    // 0x19bf98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bf98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19bf9c:
    // 0x19bf9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bfa0:
    // 0x19bfa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bfa4:
    // 0x19bfa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bfa8:
    // 0x19bfa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bfac:
    // 0x19bfac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19bfacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19bfb0:
    // 0x19bfb0: 0x8066fee  j           func_19BFB8
label_19bfb4:
    if (ctx->pc == 0x19BFB4u) {
        ctx->pc = 0x19BFB4u;
            // 0x19bfb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19BFB8u;
        goto label_19bfb8;
    }
    ctx->pc = 0x19BFB0u;
    ctx->pc = 0x19BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFB0u;
            // 0x19bfb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BFB8u;
    goto label_19bfb8;
    ctx->pc = 0x19BFB8u;
label_19bfb8:
    // 0x19bfb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19bfbc:
    // 0x19bfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19bfc0:
    // 0x19bfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bfc4:
    // 0x19bfc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bfc8:
    // 0x19bfc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19bfcc:
    // 0x19bfcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19bfd0:
    // 0x19bfd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19bfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19bfd4:
    // 0x19bfd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_19bfd8:
    // 0x19bfd8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19bfd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19bfdc:
    // 0x19bfdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19bfe0:
    // 0x19bfe0: 0xc068a76  jal         func_1A29D8
label_19bfe4:
    if (ctx->pc == 0x19BFE4u) {
        ctx->pc = 0x19BFE4u;
            // 0x19bfe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BFE8u;
        goto label_19bfe8;
    }
    ctx->pc = 0x19BFE0u;
    SET_GPR_U32(ctx, 31, 0x19BFE8u);
    ctx->pc = 0x19BFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFE0u;
            // 0x19bfe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFE8u; }
        if (ctx->pc != 0x19BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFE8u; }
        if (ctx->pc != 0x19BFE8u) { return; }
    }
    ctx->pc = 0x19BFE8u;
label_19bfe8:
    // 0x19bfe8: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_19bfec:
    // 0x19bfec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bff0:
    // 0x19bff0: 0xc067080  jal         func_19C200
label_19bff4:
    if (ctx->pc == 0x19BFF4u) {
        ctx->pc = 0x19BFF4u;
            // 0x19bff4: 0xae020430  sw          $v0, 0x430($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
        ctx->pc = 0x19BFF8u;
        goto label_19bff8;
    }
    ctx->pc = 0x19BFF0u;
    SET_GPR_U32(ctx, 31, 0x19BFF8u);
    ctx->pc = 0x19BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFF0u;
            // 0x19bff4: 0xae020430  sw          $v0, 0x430($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C200u;
    if (runtime->hasFunction(0x19C200u)) {
        auto targetFn = runtime->lookupFunction(0x19C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF8u; }
        if (ctx->pc != 0x19BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C200_0x19c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF8u; }
        if (ctx->pc != 0x19BFF8u) { return; }
    }
    ctx->pc = 0x19BFF8u;
label_19bff8:
    // 0x19bff8: 0xc066f6c  jal         func_19BDB0
label_19bffc:
    if (ctx->pc == 0x19BFFCu) {
        ctx->pc = 0x19BFFCu;
            // 0x19bffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C000u;
        goto label_19c000;
    }
    ctx->pc = 0x19BFF8u;
    SET_GPR_U32(ctx, 31, 0x19C000u);
    ctx->pc = 0x19BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFF8u;
            // 0x19bffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BDB0u;
    if (runtime->hasFunction(0x19BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x19BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C000u; }
        if (ctx->pc != 0x19C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BDB0_0x19bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C000u; }
        if (ctx->pc != 0x19C000u) { return; }
    }
    ctx->pc = 0x19C000u;
label_19c000:
    // 0x19c000: 0xc068a76  jal         func_1A29D8
label_19c004:
    if (ctx->pc == 0x19C004u) {
        ctx->pc = 0x19C004u;
            // 0x19c004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C008u;
        goto label_19c008;
    }
    ctx->pc = 0x19C000u;
    SET_GPR_U32(ctx, 31, 0x19C008u);
    ctx->pc = 0x19C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C000u;
            // 0x19c004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C008u; }
        if (ctx->pc != 0x19C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C008u; }
        if (ctx->pc != 0x19C008u) { return; }
    }
    ctx->pc = 0x19C008u;
label_19c008:
    // 0x19c008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c00c:
    // 0x19c00c: 0xc0671b8  jal         func_19C6E0
label_19c010:
    if (ctx->pc == 0x19C010u) {
        ctx->pc = 0x19C010u;
            // 0x19c010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C014u;
        goto label_19c014;
    }
    ctx->pc = 0x19C00Cu;
    SET_GPR_U32(ctx, 31, 0x19C014u);
    ctx->pc = 0x19C010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C00Cu;
            // 0x19c010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (runtime->hasFunction(0x19C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C014u; }
        if (ctx->pc != 0x19C014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C6E0_0x19c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C014u; }
        if (ctx->pc != 0x19C014u) { return; }
    }
    ctx->pc = 0x19C014u;
label_19c014:
    // 0x19c014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c018:
    // 0x19c018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19c018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c01c:
    // 0x19c01c: 0xc0673a8  jal         func_19CEA0
label_19c020:
    if (ctx->pc == 0x19C020u) {
        ctx->pc = 0x19C020u;
            // 0x19c020: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C024u;
        goto label_19c024;
    }
    ctx->pc = 0x19C01Cu;
    SET_GPR_U32(ctx, 31, 0x19C024u);
    ctx->pc = 0x19C020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C01Cu;
            // 0x19c020: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C024u; }
        if (ctx->pc != 0x19C024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CEA0_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C024u; }
        if (ctx->pc != 0x19C024u) { return; }
    }
    ctx->pc = 0x19C024u;
label_19c024:
    // 0x19c024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c028:
    // 0x19c028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19c028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c02c:
    // 0x19c02c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c030:
    // 0x19c030: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19c030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c034:
    // 0x19c034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19c038:
    // 0x19c038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c03c:
    // 0x19c03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c040:
    // 0x19c040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c044:
    // 0x19c044: 0x80673aa  j           func_19CEA8
label_19c048:
    if (ctx->pc == 0x19C048u) {
        ctx->pc = 0x19C048u;
            // 0x19c048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x19C04Cu;
        goto label_19c04c;
    }
    ctx->pc = 0x19C044u;
    ctx->pc = 0x19C048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C044u;
            // 0x19c048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA8u;
    {
        auto targetFn = runtime->lookupFunction(0x19CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C04Cu;
label_19c04c:
    // 0x19c04c: 0x0  nop
    ctx->pc = 0x19c04cu;
    // NOP
label_19c050:
    // 0x19c050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19c054:
    // 0x19c054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c058:
    // 0x19c058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c05c:
    // 0x19c05c: 0x806701a  j           func_19C068
label_19c060:
    if (ctx->pc == 0x19C060u) {
        ctx->pc = 0x19C060u;
            // 0x19c060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19C064u;
        goto label_19c064;
    }
    ctx->pc = 0x19C05Cu;
    ctx->pc = 0x19C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C05Cu;
            // 0x19c060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C068u;
    goto label_19c068;
    ctx->pc = 0x19C064u;
label_19c064:
    // 0x19c064: 0x0  nop
    ctx->pc = 0x19c064u;
    // NOP
label_19c068:
    // 0x19c068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19c06c:
    // 0x19c06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19c070:
    // 0x19c070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c074:
    // 0x19c074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19c078:
    // 0x19c078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c07c:
    // 0x19c07c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19c080:
    // 0x19c080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19c080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19c084:
    // 0x19c084: 0xc06756a  jal         func_19D5A8
label_19c088:
    if (ctx->pc == 0x19C088u) {
        ctx->pc = 0x19C088u;
            // 0x19c088: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C08Cu;
        goto label_19c08c;
    }
    ctx->pc = 0x19C084u;
    SET_GPR_U32(ctx, 31, 0x19C08Cu);
    ctx->pc = 0x19C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C084u;
            // 0x19c088: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C08Cu; }
        if (ctx->pc != 0x19C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C08Cu; }
        if (ctx->pc != 0x19C08Cu) { return; }
    }
    ctx->pc = 0x19C08Cu;
label_19c08c:
    // 0x19c08c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19c090:
    // 0x19c090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c094:
    // 0x19c094: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c098:
    // 0x19c098: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_19c09c:
    if (ctx->pc == 0x19C09Cu) {
        ctx->pc = 0x19C09Cu;
            // 0x19c09c: 0x24849478  addiu       $a0, $a0, -0x6B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939768));
        ctx->pc = 0x19C0A0u;
        goto label_19c0a0;
    }
    ctx->pc = 0x19C098u;
    {
        const bool branch_taken_0x19c098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C098u;
            // 0x19c09c: 0x24849478  addiu       $a0, $a0, -0x6B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c098) {
            ctx->pc = 0x19C0B8u;
            goto label_19c0b8;
        }
    }
    ctx->pc = 0x19C0A0u;
label_19c0a0:
    // 0x19c0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c0a4:
    // 0x19c0a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c0a8:
    // 0x19c0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c0ac:
    // 0x19c0ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19c0b0:
    // 0x19c0b0: 0x80686c6  j           func_1A1B18
label_19c0b4:
    if (ctx->pc == 0x19C0B4u) {
        ctx->pc = 0x19C0B4u;
            // 0x19c0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19C0B8u;
        goto label_19c0b8;
    }
    ctx->pc = 0x19C0B0u;
    ctx->pc = 0x19C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0B0u;
            // 0x19c0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C0B8u;
label_19c0b8:
    // 0x19c0b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19c0bc:
    // 0x19c0bc: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_19c0c0:
    if (ctx->pc == 0x19C0C0u) {
        ctx->pc = 0x19C0C0u;
            // 0x19c0c0: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x19C0C4u;
        goto label_19c0c4;
    }
    ctx->pc = 0x19C0BCu;
    {
        const bool branch_taken_0x19c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0BCu;
            // 0x19c0c0: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0bc) {
            ctx->pc = 0x19C0E0u;
            goto label_19c0e0;
        }
    }
    ctx->pc = 0x19C0C4u;
label_19c0c4:
    // 0x19c0c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19c0c8:
    // 0x19c0c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c0cc:
    // 0x19c0cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c0d0:
    // 0x19c0d0: 0x248494a8  addiu       $a0, $a0, -0x6B58
    ctx->pc = 0x19c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939816));
label_19c0d4:
    // 0x19c0d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c0d8:
    // 0x19c0d8: 0x80686c6  j           func_1A1B18
label_19c0dc:
    if (ctx->pc == 0x19C0DCu) {
        ctx->pc = 0x19C0DCu;
            // 0x19c0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19C0E0u;
        goto label_19c0e0;
    }
    ctx->pc = 0x19C0D8u;
    ctx->pc = 0x19C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0D8u;
            // 0x19c0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C0E0u;
label_19c0e0:
    // 0x19c0e0: 0xc068a76  jal         func_1A29D8
label_19c0e4:
    if (ctx->pc == 0x19C0E4u) {
        ctx->pc = 0x19C0E4u;
            // 0x19c0e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19C0E8u;
        goto label_19c0e8;
    }
    ctx->pc = 0x19C0E0u;
    SET_GPR_U32(ctx, 31, 0x19C0E8u);
    ctx->pc = 0x19C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0E0u;
            // 0x19c0e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E8u; }
        if (ctx->pc != 0x19C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E8u; }
        if (ctx->pc != 0x19C0E8u) { return; }
    }
    ctx->pc = 0x19C0E8u;
label_19c0e8:
    // 0x19c0e8: 0xc067080  jal         func_19C200
label_19c0ec:
    if (ctx->pc == 0x19C0ECu) {
        ctx->pc = 0x19C0ECu;
            // 0x19c0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C0F0u;
        goto label_19c0f0;
    }
    ctx->pc = 0x19C0E8u;
    SET_GPR_U32(ctx, 31, 0x19C0F0u);
    ctx->pc = 0x19C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0E8u;
            // 0x19c0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C200u;
    if (runtime->hasFunction(0x19C200u)) {
        auto targetFn = runtime->lookupFunction(0x19C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0F0u; }
        if (ctx->pc != 0x19C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C200_0x19c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0F0u; }
        if (ctx->pc != 0x19C0F0u) { return; }
    }
    ctx->pc = 0x19C0F0u;
label_19c0f0:
    // 0x19c0f0: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
label_19c0f4:
    // 0x19c0f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c0f8:
    // 0x19c0f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19c0fc:
    // 0x19c0fc: 0x40f809  jalr        $v0
label_19c100:
    if (ctx->pc == 0x19C100u) {
        ctx->pc = 0x19C104u;
        goto label_19c104;
    }
    ctx->pc = 0x19C0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C104u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C104u; }
            if (ctx->pc != 0x19C104u) { return; }
        }
        }
    }
    ctx->pc = 0x19C104u;
label_19c104:
    // 0x19c104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c108:
    // 0x19c108: 0xc0612e8  jal         func_184BA0
label_19c10c:
    if (ctx->pc == 0x19C10Cu) {
        ctx->pc = 0x19C10Cu;
            // 0x19c10c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C110u;
        goto label_19c110;
    }
    ctx->pc = 0x19C108u;
    SET_GPR_U32(ctx, 31, 0x19C110u);
    ctx->pc = 0x19C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C108u;
            // 0x19c10c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C110u; }
        if (ctx->pc != 0x19C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C110u; }
        if (ctx->pc != 0x19C110u) { return; }
    }
    ctx->pc = 0x19C110u;
label_19c110:
    // 0x19c110: 0xae110458  sw          $s1, 0x458($s0)
    ctx->pc = 0x19c110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1112), GPR_U32(ctx, 17));
label_19c114:
    // 0x19c114: 0xae020430  sw          $v0, 0x430($s0)
    ctx->pc = 0x19c114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
label_19c118:
    // 0x19c118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c11c:
    // 0x19c11c: 0xae020454  sw          $v0, 0x454($s0)
    ctx->pc = 0x19c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 2));
label_19c120:
    // 0x19c120: 0xc066f6c  jal         func_19BDB0
label_19c124:
    if (ctx->pc == 0x19C124u) {
        ctx->pc = 0x19C124u;
            // 0x19c124: 0xae12045c  sw          $s2, 0x45C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 18));
        ctx->pc = 0x19C128u;
        goto label_19c128;
    }
    ctx->pc = 0x19C120u;
    SET_GPR_U32(ctx, 31, 0x19C128u);
    ctx->pc = 0x19C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C120u;
            // 0x19c124: 0xae12045c  sw          $s2, 0x45C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BDB0u;
    if (runtime->hasFunction(0x19BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x19BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C128u; }
        if (ctx->pc != 0x19C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BDB0_0x19bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C128u; }
        if (ctx->pc != 0x19C128u) { return; }
    }
    ctx->pc = 0x19C128u;
label_19c128:
    // 0x19c128: 0xc068a76  jal         func_1A29D8
label_19c12c:
    if (ctx->pc == 0x19C12Cu) {
        ctx->pc = 0x19C12Cu;
            // 0x19c12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C130u;
        goto label_19c130;
    }
    ctx->pc = 0x19C128u;
    SET_GPR_U32(ctx, 31, 0x19C130u);
    ctx->pc = 0x19C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C128u;
            // 0x19c12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A29D8u;
    if (runtime->hasFunction(0x1A29D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A29D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C130u; }
        if (ctx->pc != 0x19C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A29D8_0x1a29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C130u; }
        if (ctx->pc != 0x19C130u) { return; }
    }
    ctx->pc = 0x19C130u;
label_19c130:
    // 0x19c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c134:
    // 0x19c134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c138:
    // 0x19c138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c13c:
    // 0x19c13c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c140:
    // 0x19c140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19c144:
    // 0x19c144: 0x8065e92  j           func_197A48
label_19c148:
    if (ctx->pc == 0x19C148u) {
        ctx->pc = 0x19C148u;
            // 0x19c148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19C14Cu;
        goto label_19c14c;
    }
    ctx->pc = 0x19C144u;
    ctx->pc = 0x19C148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C144u;
            // 0x19c148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197A48u;
    if (runtime->hasFunction(0x197A48u)) {
        auto targetFn = runtime->lookupFunction(0x197A48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00197A48_0x197a48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C14Cu;
label_19c14c:
    // 0x19c14c: 0x0  nop
    ctx->pc = 0x19c14cu;
    // NOP
}
