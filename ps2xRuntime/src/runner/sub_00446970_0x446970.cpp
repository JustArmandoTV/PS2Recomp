#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00446970
// Address: 0x446970 - 0x446d60
void sub_00446970_0x446970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446970_0x446970");
#endif

    switch (ctx->pc) {
        case 0x446970u: goto label_446970;
        case 0x446974u: goto label_446974;
        case 0x446978u: goto label_446978;
        case 0x44697cu: goto label_44697c;
        case 0x446980u: goto label_446980;
        case 0x446984u: goto label_446984;
        case 0x446988u: goto label_446988;
        case 0x44698cu: goto label_44698c;
        case 0x446990u: goto label_446990;
        case 0x446994u: goto label_446994;
        case 0x446998u: goto label_446998;
        case 0x44699cu: goto label_44699c;
        case 0x4469a0u: goto label_4469a0;
        case 0x4469a4u: goto label_4469a4;
        case 0x4469a8u: goto label_4469a8;
        case 0x4469acu: goto label_4469ac;
        case 0x4469b0u: goto label_4469b0;
        case 0x4469b4u: goto label_4469b4;
        case 0x4469b8u: goto label_4469b8;
        case 0x4469bcu: goto label_4469bc;
        case 0x4469c0u: goto label_4469c0;
        case 0x4469c4u: goto label_4469c4;
        case 0x4469c8u: goto label_4469c8;
        case 0x4469ccu: goto label_4469cc;
        case 0x4469d0u: goto label_4469d0;
        case 0x4469d4u: goto label_4469d4;
        case 0x4469d8u: goto label_4469d8;
        case 0x4469dcu: goto label_4469dc;
        case 0x4469e0u: goto label_4469e0;
        case 0x4469e4u: goto label_4469e4;
        case 0x4469e8u: goto label_4469e8;
        case 0x4469ecu: goto label_4469ec;
        case 0x4469f0u: goto label_4469f0;
        case 0x4469f4u: goto label_4469f4;
        case 0x4469f8u: goto label_4469f8;
        case 0x4469fcu: goto label_4469fc;
        case 0x446a00u: goto label_446a00;
        case 0x446a04u: goto label_446a04;
        case 0x446a08u: goto label_446a08;
        case 0x446a0cu: goto label_446a0c;
        case 0x446a10u: goto label_446a10;
        case 0x446a14u: goto label_446a14;
        case 0x446a18u: goto label_446a18;
        case 0x446a1cu: goto label_446a1c;
        case 0x446a20u: goto label_446a20;
        case 0x446a24u: goto label_446a24;
        case 0x446a28u: goto label_446a28;
        case 0x446a2cu: goto label_446a2c;
        case 0x446a30u: goto label_446a30;
        case 0x446a34u: goto label_446a34;
        case 0x446a38u: goto label_446a38;
        case 0x446a3cu: goto label_446a3c;
        case 0x446a40u: goto label_446a40;
        case 0x446a44u: goto label_446a44;
        case 0x446a48u: goto label_446a48;
        case 0x446a4cu: goto label_446a4c;
        case 0x446a50u: goto label_446a50;
        case 0x446a54u: goto label_446a54;
        case 0x446a58u: goto label_446a58;
        case 0x446a5cu: goto label_446a5c;
        case 0x446a60u: goto label_446a60;
        case 0x446a64u: goto label_446a64;
        case 0x446a68u: goto label_446a68;
        case 0x446a6cu: goto label_446a6c;
        case 0x446a70u: goto label_446a70;
        case 0x446a74u: goto label_446a74;
        case 0x446a78u: goto label_446a78;
        case 0x446a7cu: goto label_446a7c;
        case 0x446a80u: goto label_446a80;
        case 0x446a84u: goto label_446a84;
        case 0x446a88u: goto label_446a88;
        case 0x446a8cu: goto label_446a8c;
        case 0x446a90u: goto label_446a90;
        case 0x446a94u: goto label_446a94;
        case 0x446a98u: goto label_446a98;
        case 0x446a9cu: goto label_446a9c;
        case 0x446aa0u: goto label_446aa0;
        case 0x446aa4u: goto label_446aa4;
        case 0x446aa8u: goto label_446aa8;
        case 0x446aacu: goto label_446aac;
        case 0x446ab0u: goto label_446ab0;
        case 0x446ab4u: goto label_446ab4;
        case 0x446ab8u: goto label_446ab8;
        case 0x446abcu: goto label_446abc;
        case 0x446ac0u: goto label_446ac0;
        case 0x446ac4u: goto label_446ac4;
        case 0x446ac8u: goto label_446ac8;
        case 0x446accu: goto label_446acc;
        case 0x446ad0u: goto label_446ad0;
        case 0x446ad4u: goto label_446ad4;
        case 0x446ad8u: goto label_446ad8;
        case 0x446adcu: goto label_446adc;
        case 0x446ae0u: goto label_446ae0;
        case 0x446ae4u: goto label_446ae4;
        case 0x446ae8u: goto label_446ae8;
        case 0x446aecu: goto label_446aec;
        case 0x446af0u: goto label_446af0;
        case 0x446af4u: goto label_446af4;
        case 0x446af8u: goto label_446af8;
        case 0x446afcu: goto label_446afc;
        case 0x446b00u: goto label_446b00;
        case 0x446b04u: goto label_446b04;
        case 0x446b08u: goto label_446b08;
        case 0x446b0cu: goto label_446b0c;
        case 0x446b10u: goto label_446b10;
        case 0x446b14u: goto label_446b14;
        case 0x446b18u: goto label_446b18;
        case 0x446b1cu: goto label_446b1c;
        case 0x446b20u: goto label_446b20;
        case 0x446b24u: goto label_446b24;
        case 0x446b28u: goto label_446b28;
        case 0x446b2cu: goto label_446b2c;
        case 0x446b30u: goto label_446b30;
        case 0x446b34u: goto label_446b34;
        case 0x446b38u: goto label_446b38;
        case 0x446b3cu: goto label_446b3c;
        case 0x446b40u: goto label_446b40;
        case 0x446b44u: goto label_446b44;
        case 0x446b48u: goto label_446b48;
        case 0x446b4cu: goto label_446b4c;
        case 0x446b50u: goto label_446b50;
        case 0x446b54u: goto label_446b54;
        case 0x446b58u: goto label_446b58;
        case 0x446b5cu: goto label_446b5c;
        case 0x446b60u: goto label_446b60;
        case 0x446b64u: goto label_446b64;
        case 0x446b68u: goto label_446b68;
        case 0x446b6cu: goto label_446b6c;
        case 0x446b70u: goto label_446b70;
        case 0x446b74u: goto label_446b74;
        case 0x446b78u: goto label_446b78;
        case 0x446b7cu: goto label_446b7c;
        case 0x446b80u: goto label_446b80;
        case 0x446b84u: goto label_446b84;
        case 0x446b88u: goto label_446b88;
        case 0x446b8cu: goto label_446b8c;
        case 0x446b90u: goto label_446b90;
        case 0x446b94u: goto label_446b94;
        case 0x446b98u: goto label_446b98;
        case 0x446b9cu: goto label_446b9c;
        case 0x446ba0u: goto label_446ba0;
        case 0x446ba4u: goto label_446ba4;
        case 0x446ba8u: goto label_446ba8;
        case 0x446bacu: goto label_446bac;
        case 0x446bb0u: goto label_446bb0;
        case 0x446bb4u: goto label_446bb4;
        case 0x446bb8u: goto label_446bb8;
        case 0x446bbcu: goto label_446bbc;
        case 0x446bc0u: goto label_446bc0;
        case 0x446bc4u: goto label_446bc4;
        case 0x446bc8u: goto label_446bc8;
        case 0x446bccu: goto label_446bcc;
        case 0x446bd0u: goto label_446bd0;
        case 0x446bd4u: goto label_446bd4;
        case 0x446bd8u: goto label_446bd8;
        case 0x446bdcu: goto label_446bdc;
        case 0x446be0u: goto label_446be0;
        case 0x446be4u: goto label_446be4;
        case 0x446be8u: goto label_446be8;
        case 0x446becu: goto label_446bec;
        case 0x446bf0u: goto label_446bf0;
        case 0x446bf4u: goto label_446bf4;
        case 0x446bf8u: goto label_446bf8;
        case 0x446bfcu: goto label_446bfc;
        case 0x446c00u: goto label_446c00;
        case 0x446c04u: goto label_446c04;
        case 0x446c08u: goto label_446c08;
        case 0x446c0cu: goto label_446c0c;
        case 0x446c10u: goto label_446c10;
        case 0x446c14u: goto label_446c14;
        case 0x446c18u: goto label_446c18;
        case 0x446c1cu: goto label_446c1c;
        case 0x446c20u: goto label_446c20;
        case 0x446c24u: goto label_446c24;
        case 0x446c28u: goto label_446c28;
        case 0x446c2cu: goto label_446c2c;
        case 0x446c30u: goto label_446c30;
        case 0x446c34u: goto label_446c34;
        case 0x446c38u: goto label_446c38;
        case 0x446c3cu: goto label_446c3c;
        case 0x446c40u: goto label_446c40;
        case 0x446c44u: goto label_446c44;
        case 0x446c48u: goto label_446c48;
        case 0x446c4cu: goto label_446c4c;
        case 0x446c50u: goto label_446c50;
        case 0x446c54u: goto label_446c54;
        case 0x446c58u: goto label_446c58;
        case 0x446c5cu: goto label_446c5c;
        case 0x446c60u: goto label_446c60;
        case 0x446c64u: goto label_446c64;
        case 0x446c68u: goto label_446c68;
        case 0x446c6cu: goto label_446c6c;
        case 0x446c70u: goto label_446c70;
        case 0x446c74u: goto label_446c74;
        case 0x446c78u: goto label_446c78;
        case 0x446c7cu: goto label_446c7c;
        case 0x446c80u: goto label_446c80;
        case 0x446c84u: goto label_446c84;
        case 0x446c88u: goto label_446c88;
        case 0x446c8cu: goto label_446c8c;
        case 0x446c90u: goto label_446c90;
        case 0x446c94u: goto label_446c94;
        case 0x446c98u: goto label_446c98;
        case 0x446c9cu: goto label_446c9c;
        case 0x446ca0u: goto label_446ca0;
        case 0x446ca4u: goto label_446ca4;
        case 0x446ca8u: goto label_446ca8;
        case 0x446cacu: goto label_446cac;
        case 0x446cb0u: goto label_446cb0;
        case 0x446cb4u: goto label_446cb4;
        case 0x446cb8u: goto label_446cb8;
        case 0x446cbcu: goto label_446cbc;
        case 0x446cc0u: goto label_446cc0;
        case 0x446cc4u: goto label_446cc4;
        case 0x446cc8u: goto label_446cc8;
        case 0x446cccu: goto label_446ccc;
        case 0x446cd0u: goto label_446cd0;
        case 0x446cd4u: goto label_446cd4;
        case 0x446cd8u: goto label_446cd8;
        case 0x446cdcu: goto label_446cdc;
        case 0x446ce0u: goto label_446ce0;
        case 0x446ce4u: goto label_446ce4;
        case 0x446ce8u: goto label_446ce8;
        case 0x446cecu: goto label_446cec;
        case 0x446cf0u: goto label_446cf0;
        case 0x446cf4u: goto label_446cf4;
        case 0x446cf8u: goto label_446cf8;
        case 0x446cfcu: goto label_446cfc;
        case 0x446d00u: goto label_446d00;
        case 0x446d04u: goto label_446d04;
        case 0x446d08u: goto label_446d08;
        case 0x446d0cu: goto label_446d0c;
        case 0x446d10u: goto label_446d10;
        case 0x446d14u: goto label_446d14;
        case 0x446d18u: goto label_446d18;
        case 0x446d1cu: goto label_446d1c;
        case 0x446d20u: goto label_446d20;
        case 0x446d24u: goto label_446d24;
        case 0x446d28u: goto label_446d28;
        case 0x446d2cu: goto label_446d2c;
        case 0x446d30u: goto label_446d30;
        case 0x446d34u: goto label_446d34;
        case 0x446d38u: goto label_446d38;
        case 0x446d3cu: goto label_446d3c;
        case 0x446d40u: goto label_446d40;
        case 0x446d44u: goto label_446d44;
        case 0x446d48u: goto label_446d48;
        case 0x446d4cu: goto label_446d4c;
        case 0x446d50u: goto label_446d50;
        case 0x446d54u: goto label_446d54;
        case 0x446d58u: goto label_446d58;
        case 0x446d5cu: goto label_446d5c;
        default: break;
    }

    ctx->pc = 0x446970u;

label_446970:
    // 0x446970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x446970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_446974:
    // 0x446974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x446974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_446978:
    // 0x446978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44697c:
    // 0x44697c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44697cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446980:
    // 0x446980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x446980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446984:
    // 0x446984: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_446988:
    if (ctx->pc == 0x446988u) {
        ctx->pc = 0x446988u;
            // 0x446988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44698Cu;
        goto label_44698c;
    }
    ctx->pc = 0x446984u;
    {
        const bool branch_taken_0x446984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446984u;
            // 0x446988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446984) {
            ctx->pc = 0x4469C8u;
            goto label_4469c8;
        }
    }
    ctx->pc = 0x44698Cu;
label_44698c:
    // 0x44698c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_446990:
    if (ctx->pc == 0x446990u) {
        ctx->pc = 0x446990u;
            // 0x446990: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x446994u;
        goto label_446994;
    }
    ctx->pc = 0x44698Cu;
    {
        const bool branch_taken_0x44698c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44698c) {
            ctx->pc = 0x446990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44698Cu;
            // 0x446990: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4469B4u;
            goto label_4469b4;
        }
    }
    ctx->pc = 0x446994u;
label_446994:
    // 0x446994: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_446998:
    if (ctx->pc == 0x446998u) {
        ctx->pc = 0x44699Cu;
        goto label_44699c;
    }
    ctx->pc = 0x446994u;
    {
        const bool branch_taken_0x446994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x446994) {
            ctx->pc = 0x4469B0u;
            goto label_4469b0;
        }
    }
    ctx->pc = 0x44699Cu;
label_44699c:
    // 0x44699c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x44699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4469a0:
    // 0x4469a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4469a4:
    if (ctx->pc == 0x4469A4u) {
        ctx->pc = 0x4469A8u;
        goto label_4469a8;
    }
    ctx->pc = 0x4469A0u;
    {
        const bool branch_taken_0x4469a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4469a0) {
            ctx->pc = 0x4469B0u;
            goto label_4469b0;
        }
    }
    ctx->pc = 0x4469A8u;
label_4469a8:
    // 0x4469a8: 0xc0400a8  jal         func_1002A0
label_4469ac:
    if (ctx->pc == 0x4469ACu) {
        ctx->pc = 0x4469B0u;
        goto label_4469b0;
    }
    ctx->pc = 0x4469A8u;
    SET_GPR_U32(ctx, 31, 0x4469B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4469B0u; }
        if (ctx->pc != 0x4469B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4469B0u; }
        if (ctx->pc != 0x4469B0u) { return; }
    }
    ctx->pc = 0x4469B0u;
label_4469b0:
    // 0x4469b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4469b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4469b4:
    // 0x4469b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4469b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4469b8:
    // 0x4469b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4469bc:
    if (ctx->pc == 0x4469BCu) {
        ctx->pc = 0x4469BCu;
            // 0x4469bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4469C0u;
        goto label_4469c0;
    }
    ctx->pc = 0x4469B8u;
    {
        const bool branch_taken_0x4469b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4469b8) {
            ctx->pc = 0x4469BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4469B8u;
            // 0x4469bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4469CCu;
            goto label_4469cc;
        }
    }
    ctx->pc = 0x4469C0u;
label_4469c0:
    // 0x4469c0: 0xc0400a8  jal         func_1002A0
label_4469c4:
    if (ctx->pc == 0x4469C4u) {
        ctx->pc = 0x4469C4u;
            // 0x4469c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4469C8u;
        goto label_4469c8;
    }
    ctx->pc = 0x4469C0u;
    SET_GPR_U32(ctx, 31, 0x4469C8u);
    ctx->pc = 0x4469C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4469C0u;
            // 0x4469c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4469C8u; }
        if (ctx->pc != 0x4469C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4469C8u; }
        if (ctx->pc != 0x4469C8u) { return; }
    }
    ctx->pc = 0x4469C8u;
label_4469c8:
    // 0x4469c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4469c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4469cc:
    // 0x4469cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4469ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4469d0:
    // 0x4469d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4469d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4469d4:
    // 0x4469d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4469d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4469d8:
    // 0x4469d8: 0x3e00008  jr          $ra
label_4469dc:
    if (ctx->pc == 0x4469DCu) {
        ctx->pc = 0x4469DCu;
            // 0x4469dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4469E0u;
        goto label_4469e0;
    }
    ctx->pc = 0x4469D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4469DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4469D8u;
            // 0x4469dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4469E0u;
label_4469e0:
    // 0x4469e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4469e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4469e4:
    // 0x4469e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4469e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4469e8:
    // 0x4469e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4469e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4469ec:
    // 0x4469ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4469ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4469f0:
    // 0x4469f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4469f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4469f4:
    // 0x4469f4: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_4469f8:
    if (ctx->pc == 0x4469F8u) {
        ctx->pc = 0x4469F8u;
            // 0x4469f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4469FCu;
        goto label_4469fc;
    }
    ctx->pc = 0x4469F4u;
    {
        const bool branch_taken_0x4469f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4469F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4469F4u;
            // 0x4469f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4469f4) {
            ctx->pc = 0x446B1Cu;
            goto label_446b1c;
        }
    }
    ctx->pc = 0x4469FCu;
label_4469fc:
    // 0x4469fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4469fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_446a00:
    // 0x446a00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446a04:
    // 0x446a04: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x446a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
label_446a08:
    // 0x446a08: 0x2442d670  addiu       $v0, $v0, -0x2990
    ctx->pc = 0x446a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
label_446a0c:
    // 0x446a0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x446a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_446a10:
    // 0x446a10: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x446a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_446a14:
    // 0x446a14: 0xc1123d4  jal         func_448F50
label_446a18:
    if (ctx->pc == 0x446A18u) {
        ctx->pc = 0x446A18u;
            // 0x446a18: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x446A1Cu;
        goto label_446a1c;
    }
    ctx->pc = 0x446A14u;
    SET_GPR_U32(ctx, 31, 0x446A1Cu);
    ctx->pc = 0x446A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446A14u;
            // 0x446a18: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448F50u;
    if (runtime->hasFunction(0x448F50u)) {
        auto targetFn = runtime->lookupFunction(0x448F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446A1Cu; }
        if (ctx->pc != 0x446A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448F50_0x448f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446A1Cu; }
        if (ctx->pc != 0x446A1Cu) { return; }
    }
    ctx->pc = 0x446A1Cu;
label_446a1c:
    // 0x446a1c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x446a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_446a20:
    // 0x446a20: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_446a24:
    if (ctx->pc == 0x446A24u) {
        ctx->pc = 0x446A24u;
            // 0x446a24: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x446A28u;
        goto label_446a28;
    }
    ctx->pc = 0x446A20u;
    {
        const bool branch_taken_0x446a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446a20) {
            ctx->pc = 0x446A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446A20u;
            // 0x446a24: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446A48u;
            goto label_446a48;
        }
    }
    ctx->pc = 0x446A28u;
label_446a28:
    // 0x446a28: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_446a2c:
    if (ctx->pc == 0x446A2Cu) {
        ctx->pc = 0x446A2Cu;
            // 0x446a2c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x446A30u;
        goto label_446a30;
    }
    ctx->pc = 0x446A28u;
    {
        const bool branch_taken_0x446a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446a28) {
            ctx->pc = 0x446A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446A28u;
            // 0x446a2c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446A44u;
            goto label_446a44;
        }
    }
    ctx->pc = 0x446A30u;
label_446a30:
    // 0x446a30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x446a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_446a34:
    // 0x446a34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x446a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_446a38:
    // 0x446a38: 0x320f809  jalr        $t9
label_446a3c:
    if (ctx->pc == 0x446A3Cu) {
        ctx->pc = 0x446A3Cu;
            // 0x446a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x446A40u;
        goto label_446a40;
    }
    ctx->pc = 0x446A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446A40u);
        ctx->pc = 0x446A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446A38u;
            // 0x446a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x446A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446A40u; }
            if (ctx->pc != 0x446A40u) { return; }
        }
        }
    }
    ctx->pc = 0x446A40u;
label_446a40:
    // 0x446a40: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x446a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_446a44:
    // 0x446a44: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x446a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_446a48:
    // 0x446a48: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_446a4c:
    if (ctx->pc == 0x446A4Cu) {
        ctx->pc = 0x446A50u;
        goto label_446a50;
    }
    ctx->pc = 0x446A48u;
    {
        const bool branch_taken_0x446a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446a48) {
            ctx->pc = 0x446A84u;
            goto label_446a84;
        }
    }
    ctx->pc = 0x446A50u;
label_446a50:
    // 0x446a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446a54:
    // 0x446a54: 0x2442d5b8  addiu       $v0, $v0, -0x2A48
    ctx->pc = 0x446a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956472));
label_446a58:
    // 0x446a58: 0xc1123d4  jal         func_448F50
label_446a5c:
    if (ctx->pc == 0x446A5Cu) {
        ctx->pc = 0x446A5Cu;
            // 0x446a5c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x446A60u;
        goto label_446a60;
    }
    ctx->pc = 0x446A58u;
    SET_GPR_U32(ctx, 31, 0x446A60u);
    ctx->pc = 0x446A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446A58u;
            // 0x446a5c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448F50u;
    if (runtime->hasFunction(0x448F50u)) {
        auto targetFn = runtime->lookupFunction(0x448F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446A60u; }
        if (ctx->pc != 0x446A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448F50_0x448f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446A60u; }
        if (ctx->pc != 0x446A60u) { return; }
    }
    ctx->pc = 0x446A60u;
label_446a60:
    // 0x446a60: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x446a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_446a64:
    // 0x446a64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_446a68:
    if (ctx->pc == 0x446A68u) {
        ctx->pc = 0x446A6Cu;
        goto label_446a6c;
    }
    ctx->pc = 0x446A64u;
    {
        const bool branch_taken_0x446a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446a64) {
            ctx->pc = 0x446A84u;
            goto label_446a84;
        }
    }
    ctx->pc = 0x446A6Cu;
label_446a6c:
    // 0x446a6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446a70:
    // 0x446a70: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x446a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_446a74:
    // 0x446a74: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x446a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_446a78:
    // 0x446a78: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x446a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_446a7c:
    // 0x446a7c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x446a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_446a80:
    // 0x446a80: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x446a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_446a84:
    // 0x446a84: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_446a88:
    if (ctx->pc == 0x446A88u) {
        ctx->pc = 0x446A88u;
            // 0x446a88: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x446A8Cu;
        goto label_446a8c;
    }
    ctx->pc = 0x446A84u;
    {
        const bool branch_taken_0x446a84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x446a84) {
            ctx->pc = 0x446A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446A84u;
            // 0x446a88: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446B08u;
            goto label_446b08;
        }
    }
    ctx->pc = 0x446A8Cu;
label_446a8c:
    // 0x446a8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446a90:
    // 0x446a90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x446a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_446a94:
    // 0x446a94: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x446a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_446a98:
    // 0x446a98: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x446a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_446a9c:
    // 0x446a9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x446a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_446aa0:
    // 0x446aa0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x446aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_446aa4:
    // 0x446aa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_446aa8:
    if (ctx->pc == 0x446AA8u) {
        ctx->pc = 0x446AA8u;
            // 0x446aa8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x446AACu;
        goto label_446aac;
    }
    ctx->pc = 0x446AA4u;
    {
        const bool branch_taken_0x446aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446AA4u;
            // 0x446aa8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446aa4) {
            ctx->pc = 0x446AE0u;
            goto label_446ae0;
        }
    }
    ctx->pc = 0x446AACu;
label_446aac:
    // 0x446aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446ab0:
    // 0x446ab0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x446ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_446ab4:
    // 0x446ab4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x446ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_446ab8:
    // 0x446ab8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x446ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_446abc:
    // 0x446abc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_446ac0:
    if (ctx->pc == 0x446AC0u) {
        ctx->pc = 0x446AC4u;
        goto label_446ac4;
    }
    ctx->pc = 0x446ABCu;
    {
        const bool branch_taken_0x446abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446abc) {
            ctx->pc = 0x446AE0u;
            goto label_446ae0;
        }
    }
    ctx->pc = 0x446AC4u;
label_446ac4:
    // 0x446ac4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_446ac8:
    if (ctx->pc == 0x446AC8u) {
        ctx->pc = 0x446AC8u;
            // 0x446ac8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x446ACCu;
        goto label_446acc;
    }
    ctx->pc = 0x446AC4u;
    {
        const bool branch_taken_0x446ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446ac4) {
            ctx->pc = 0x446AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446AC4u;
            // 0x446ac8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446AE0u;
            goto label_446ae0;
        }
    }
    ctx->pc = 0x446ACCu;
label_446acc:
    // 0x446acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x446accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_446ad0:
    // 0x446ad0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x446ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_446ad4:
    // 0x446ad4: 0x320f809  jalr        $t9
label_446ad8:
    if (ctx->pc == 0x446AD8u) {
        ctx->pc = 0x446AD8u;
            // 0x446ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x446ADCu;
        goto label_446adc;
    }
    ctx->pc = 0x446AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446ADCu);
        ctx->pc = 0x446AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446AD4u;
            // 0x446ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x446ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446ADCu; }
            if (ctx->pc != 0x446ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x446ADCu;
label_446adc:
    // 0x446adc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x446adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_446ae0:
    // 0x446ae0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_446ae4:
    if (ctx->pc == 0x446AE4u) {
        ctx->pc = 0x446AE8u;
        goto label_446ae8;
    }
    ctx->pc = 0x446AE0u;
    {
        const bool branch_taken_0x446ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x446ae0) {
            ctx->pc = 0x446B04u;
            goto label_446b04;
        }
    }
    ctx->pc = 0x446AE8u;
label_446ae8:
    // 0x446ae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446aec:
    // 0x446aec: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x446aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_446af0:
    // 0x446af0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_446af4:
    if (ctx->pc == 0x446AF4u) {
        ctx->pc = 0x446AF4u;
            // 0x446af4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x446AF8u;
        goto label_446af8;
    }
    ctx->pc = 0x446AF0u;
    {
        const bool branch_taken_0x446af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446AF0u;
            // 0x446af4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446af0) {
            ctx->pc = 0x446B04u;
            goto label_446b04;
        }
    }
    ctx->pc = 0x446AF8u;
label_446af8:
    // 0x446af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x446af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_446afc:
    // 0x446afc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x446afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_446b00:
    // 0x446b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x446b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_446b04:
    // 0x446b04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x446b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_446b08:
    // 0x446b08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x446b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_446b0c:
    // 0x446b0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_446b10:
    if (ctx->pc == 0x446B10u) {
        ctx->pc = 0x446B10u;
            // 0x446b10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446B14u;
        goto label_446b14;
    }
    ctx->pc = 0x446B0Cu;
    {
        const bool branch_taken_0x446b0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x446b0c) {
            ctx->pc = 0x446B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446B0Cu;
            // 0x446b10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446B20u;
            goto label_446b20;
        }
    }
    ctx->pc = 0x446B14u;
label_446b14:
    // 0x446b14: 0xc0400a8  jal         func_1002A0
label_446b18:
    if (ctx->pc == 0x446B18u) {
        ctx->pc = 0x446B18u;
            // 0x446b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446B1Cu;
        goto label_446b1c;
    }
    ctx->pc = 0x446B14u;
    SET_GPR_U32(ctx, 31, 0x446B1Cu);
    ctx->pc = 0x446B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446B14u;
            // 0x446b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446B1Cu; }
        if (ctx->pc != 0x446B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446B1Cu; }
        if (ctx->pc != 0x446B1Cu) { return; }
    }
    ctx->pc = 0x446B1Cu;
label_446b1c:
    // 0x446b1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x446b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_446b20:
    // 0x446b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x446b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_446b24:
    // 0x446b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x446b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_446b28:
    // 0x446b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446b2c:
    // 0x446b2c: 0x3e00008  jr          $ra
label_446b30:
    if (ctx->pc == 0x446B30u) {
        ctx->pc = 0x446B30u;
            // 0x446b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x446B34u;
        goto label_446b34;
    }
    ctx->pc = 0x446B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446B2Cu;
            // 0x446b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446B34u;
label_446b34:
    // 0x446b34: 0x0  nop
    ctx->pc = 0x446b34u;
    // NOP
label_446b38:
    // 0x446b38: 0x0  nop
    ctx->pc = 0x446b38u;
    // NOP
label_446b3c:
    // 0x446b3c: 0x0  nop
    ctx->pc = 0x446b3cu;
    // NOP
label_446b40:
    // 0x446b40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x446b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_446b44:
    // 0x446b44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x446b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_446b48:
    // 0x446b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x446b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_446b4c:
    // 0x446b4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x446b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_446b50:
    // 0x446b50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x446b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_446b54:
    // 0x446b54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x446b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_446b58:
    // 0x446b58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x446b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_446b5c:
    // 0x446b5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x446b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_446b60:
    // 0x446b60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x446b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_446b64:
    // 0x446b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x446b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_446b68:
    // 0x446b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_446b6c:
    // 0x446b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446b70:
    // 0x446b70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x446b70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_446b74:
    // 0x446b74: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_446b78:
    if (ctx->pc == 0x446B78u) {
        ctx->pc = 0x446B78u;
            // 0x446b78: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->pc = 0x446B7Cu;
        goto label_446b7c;
    }
    ctx->pc = 0x446B74u;
    {
        const bool branch_taken_0x446b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x446B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446B74u;
            // 0x446b78: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b74) {
            ctx->pc = 0x446BC4u;
            goto label_446bc4;
        }
    }
    ctx->pc = 0x446B7Cu;
label_446b7c:
    // 0x446b7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x446b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_446b80:
    // 0x446b80: 0x10a3006b  beq         $a1, $v1, . + 4 + (0x6B << 2)
label_446b84:
    if (ctx->pc == 0x446B84u) {
        ctx->pc = 0x446B88u;
        goto label_446b88;
    }
    ctx->pc = 0x446B80u;
    {
        const bool branch_taken_0x446b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x446b80) {
            ctx->pc = 0x446D30u;
            goto label_446d30;
        }
    }
    ctx->pc = 0x446B88u;
label_446b88:
    // 0x446b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x446b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_446b8c:
    // 0x446b8c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_446b90:
    if (ctx->pc == 0x446B90u) {
        ctx->pc = 0x446B94u;
        goto label_446b94;
    }
    ctx->pc = 0x446B8Cu;
    {
        const bool branch_taken_0x446b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x446b8c) {
            ctx->pc = 0x446B9Cu;
            goto label_446b9c;
        }
    }
    ctx->pc = 0x446B94u;
label_446b94:
    // 0x446b94: 0x10000066  b           . + 4 + (0x66 << 2)
label_446b98:
    if (ctx->pc == 0x446B98u) {
        ctx->pc = 0x446B9Cu;
        goto label_446b9c;
    }
    ctx->pc = 0x446B94u;
    {
        const bool branch_taken_0x446b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x446b94) {
            ctx->pc = 0x446D30u;
            goto label_446d30;
        }
    }
    ctx->pc = 0x446B9Cu;
label_446b9c:
    // 0x446b9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x446b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_446ba0:
    // 0x446ba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x446ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_446ba4:
    // 0x446ba4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x446ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_446ba8:
    // 0x446ba8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x446ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_446bac:
    // 0x446bac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x446bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_446bb0:
    // 0x446bb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x446bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_446bb4:
    // 0x446bb4: 0x320f809  jalr        $t9
label_446bb8:
    if (ctx->pc == 0x446BB8u) {
        ctx->pc = 0x446BB8u;
            // 0x446bb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x446BBCu;
        goto label_446bbc;
    }
    ctx->pc = 0x446BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446BBCu);
        ctx->pc = 0x446BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446BB4u;
            // 0x446bb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x446BBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446BBCu; }
            if (ctx->pc != 0x446BBCu) { return; }
        }
        }
    }
    ctx->pc = 0x446BBCu;
label_446bbc:
    // 0x446bbc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_446bc0:
    if (ctx->pc == 0x446BC0u) {
        ctx->pc = 0x446BC4u;
        goto label_446bc4;
    }
    ctx->pc = 0x446BBCu;
    {
        const bool branch_taken_0x446bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x446bbc) {
            ctx->pc = 0x446D30u;
            goto label_446d30;
        }
    }
    ctx->pc = 0x446BC4u;
label_446bc4:
    // 0x446bc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x446bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446bc8:
    // 0x446bc8: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x446bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_446bcc:
    // 0x446bcc: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_446bd0:
    if (ctx->pc == 0x446BD0u) {
        ctx->pc = 0x446BD0u;
            // 0x446bd0: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x446BD4u;
        goto label_446bd4;
    }
    ctx->pc = 0x446BCCu;
    {
        const bool branch_taken_0x446bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x446BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446BCCu;
            // 0x446bd0: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446bcc) {
            ctx->pc = 0x446D30u;
            goto label_446d30;
        }
    }
    ctx->pc = 0x446BD4u;
label_446bd4:
    // 0x446bd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_446bd8:
    // 0x446bd8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x446bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_446bdc:
    // 0x446bdc: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x446bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_446be0:
    // 0x446be0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x446be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_446be4:
    // 0x446be4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x446be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_446be8:
    // 0x446be8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x446be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_446bec:
    // 0x446bec: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x446becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_446bf0:
    // 0x446bf0: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x446bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_446bf4:
    // 0x446bf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_446bf8:
    // 0x446bf8: 0x8c77e370  lw          $s7, -0x1C90($v1)
    ctx->pc = 0x446bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_446bfc:
    // 0x446bfc: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x446bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_446c00:
    // 0x446c00: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x446c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_446c04:
    // 0x446c04: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x446c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_446c08:
    // 0x446c08: 0x2453009c  addiu       $s3, $v0, 0x9C
    ctx->pc = 0x446c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_446c0c:
    // 0x446c0c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x446c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_446c10:
    // 0x446c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_446c14:
    // 0x446c14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x446c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_446c18:
    // 0x446c18: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x446c18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_446c1c:
    // 0x446c1c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x446c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_446c20:
    // 0x446c20: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x446c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_446c24:
    // 0x446c24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x446c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_446c28:
    // 0x446c28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x446c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_446c2c:
    // 0x446c2c: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x446c2cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_446c30:
    // 0x446c30: 0xc0d1c14  jal         func_347050
label_446c34:
    if (ctx->pc == 0x446C34u) {
        ctx->pc = 0x446C34u;
            // 0x446c34: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446C38u;
        goto label_446c38;
    }
    ctx->pc = 0x446C30u;
    SET_GPR_U32(ctx, 31, 0x446C38u);
    ctx->pc = 0x446C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C30u;
            // 0x446c34: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C38u; }
        if (ctx->pc != 0x446C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C38u; }
        if (ctx->pc != 0x446C38u) { return; }
    }
    ctx->pc = 0x446C38u;
label_446c38:
    // 0x446c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x446c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446c3c:
    // 0x446c3c: 0xc04f278  jal         func_13C9E0
label_446c40:
    if (ctx->pc == 0x446C40u) {
        ctx->pc = 0x446C40u;
            // 0x446c40: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x446C44u;
        goto label_446c44;
    }
    ctx->pc = 0x446C3Cu;
    SET_GPR_U32(ctx, 31, 0x446C44u);
    ctx->pc = 0x446C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C3Cu;
            // 0x446c40: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C44u; }
        if (ctx->pc != 0x446C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C44u; }
        if (ctx->pc != 0x446C44u) { return; }
    }
    ctx->pc = 0x446C44u;
label_446c44:
    // 0x446c44: 0xc0d1c10  jal         func_347040
label_446c48:
    if (ctx->pc == 0x446C48u) {
        ctx->pc = 0x446C48u;
            // 0x446c48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446C4Cu;
        goto label_446c4c;
    }
    ctx->pc = 0x446C44u;
    SET_GPR_U32(ctx, 31, 0x446C4Cu);
    ctx->pc = 0x446C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C44u;
            // 0x446c48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C4Cu; }
        if (ctx->pc != 0x446C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C4Cu; }
        if (ctx->pc != 0x446C4Cu) { return; }
    }
    ctx->pc = 0x446C4Cu;
label_446c4c:
    // 0x446c4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x446c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446c50:
    // 0x446c50: 0xc04ce80  jal         func_133A00
label_446c54:
    if (ctx->pc == 0x446C54u) {
        ctx->pc = 0x446C54u;
            // 0x446c54: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x446C58u;
        goto label_446c58;
    }
    ctx->pc = 0x446C50u;
    SET_GPR_U32(ctx, 31, 0x446C58u);
    ctx->pc = 0x446C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C50u;
            // 0x446c54: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C58u; }
        if (ctx->pc != 0x446C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C58u; }
        if (ctx->pc != 0x446C58u) { return; }
    }
    ctx->pc = 0x446C58u;
label_446c58:
    // 0x446c58: 0xc111c2c  jal         func_4470B0
label_446c5c:
    if (ctx->pc == 0x446C5Cu) {
        ctx->pc = 0x446C60u;
        goto label_446c60;
    }
    ctx->pc = 0x446C58u;
    SET_GPR_U32(ctx, 31, 0x446C60u);
    ctx->pc = 0x4470B0u;
    if (runtime->hasFunction(0x4470B0u)) {
        auto targetFn = runtime->lookupFunction(0x4470B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C60u; }
        if (ctx->pc != 0x446C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004470B0_0x4470b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C60u; }
        if (ctx->pc != 0x446C60u) { return; }
    }
    ctx->pc = 0x446C60u;
label_446c60:
    // 0x446c60: 0xc0d1c0c  jal         func_347030
label_446c64:
    if (ctx->pc == 0x446C64u) {
        ctx->pc = 0x446C64u;
            // 0x446c64: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->pc = 0x446C68u;
        goto label_446c68;
    }
    ctx->pc = 0x446C60u;
    SET_GPR_U32(ctx, 31, 0x446C68u);
    ctx->pc = 0x446C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C60u;
            // 0x446c64: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C68u; }
        if (ctx->pc != 0x446C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C68u; }
        if (ctx->pc != 0x446C68u) { return; }
    }
    ctx->pc = 0x446C68u;
label_446c68:
    // 0x446c68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x446c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446c6c:
    // 0x446c6c: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_446c70:
    if (ctx->pc == 0x446C70u) {
        ctx->pc = 0x446C74u;
        goto label_446c74;
    }
    ctx->pc = 0x446C6Cu;
    {
        const bool branch_taken_0x446c6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x446c6c) {
            ctx->pc = 0x446CF0u;
            goto label_446cf0;
        }
    }
    ctx->pc = 0x446C74u;
label_446c74:
    // 0x446c74: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x446c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_446c78:
    // 0x446c78: 0xc111c28  jal         func_4470A0
label_446c7c:
    if (ctx->pc == 0x446C7Cu) {
        ctx->pc = 0x446C7Cu;
            // 0x446c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446C80u;
        goto label_446c80;
    }
    ctx->pc = 0x446C78u;
    SET_GPR_U32(ctx, 31, 0x446C80u);
    ctx->pc = 0x446C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C78u;
            // 0x446c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4470A0u;
    if (runtime->hasFunction(0x4470A0u)) {
        auto targetFn = runtime->lookupFunction(0x4470A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C80u; }
        if (ctx->pc != 0x446C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004470A0_0x4470a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C80u; }
        if (ctx->pc != 0x446C80u) { return; }
    }
    ctx->pc = 0x446C80u;
label_446c80:
    // 0x446c80: 0xc111c24  jal         func_447090
label_446c84:
    if (ctx->pc == 0x446C84u) {
        ctx->pc = 0x446C84u;
            // 0x446c84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446C88u;
        goto label_446c88;
    }
    ctx->pc = 0x446C80u;
    SET_GPR_U32(ctx, 31, 0x446C88u);
    ctx->pc = 0x446C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C80u;
            // 0x446c84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447090u;
    if (runtime->hasFunction(0x447090u)) {
        auto targetFn = runtime->lookupFunction(0x447090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C88u; }
        if (ctx->pc != 0x446C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447090_0x447090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C88u; }
        if (ctx->pc != 0x446C88u) { return; }
    }
    ctx->pc = 0x446C88u;
label_446c88:
    // 0x446c88: 0xc111c20  jal         func_447080
label_446c8c:
    if (ctx->pc == 0x446C8Cu) {
        ctx->pc = 0x446C8Cu;
            // 0x446c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446C90u;
        goto label_446c90;
    }
    ctx->pc = 0x446C88u;
    SET_GPR_U32(ctx, 31, 0x446C90u);
    ctx->pc = 0x446C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446C88u;
            // 0x446c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447080u;
    if (runtime->hasFunction(0x447080u)) {
        auto targetFn = runtime->lookupFunction(0x447080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C90u; }
        if (ctx->pc != 0x446C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00447080_0x447080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446C90u; }
        if (ctx->pc != 0x446C90u) { return; }
    }
    ctx->pc = 0x446C90u;
label_446c90:
    // 0x446c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x446c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446c94:
    // 0x446c94: 0x0  nop
    ctx->pc = 0x446c94u;
    // NOP
label_446c98:
    // 0x446c98: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x446c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_446c9c:
    // 0x446c9c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x446c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_446ca0:
    // 0x446ca0: 0x320f809  jalr        $t9
label_446ca4:
    if (ctx->pc == 0x446CA4u) {
        ctx->pc = 0x446CA4u;
            // 0x446ca4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446CA8u;
        goto label_446ca8;
    }
    ctx->pc = 0x446CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446CA8u);
        ctx->pc = 0x446CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446CA0u;
            // 0x446ca4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x446CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446CA8u; }
            if (ctx->pc != 0x446CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x446CA8u;
label_446ca8:
    // 0x446ca8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x446ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_446cac:
    // 0x446cac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x446cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_446cb0:
    // 0x446cb0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x446cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_446cb4:
    // 0x446cb4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x446cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_446cb8:
    // 0x446cb8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x446cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_446cbc:
    // 0x446cbc: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x446cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_446cc0:
    // 0x446cc0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x446cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_446cc4:
    // 0x446cc4: 0xc111b80  jal         func_446E00
label_446cc8:
    if (ctx->pc == 0x446CC8u) {
        ctx->pc = 0x446CC8u;
            // 0x446cc8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446CCCu;
        goto label_446ccc;
    }
    ctx->pc = 0x446CC4u;
    SET_GPR_U32(ctx, 31, 0x446CCCu);
    ctx->pc = 0x446CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446CC4u;
            // 0x446cc8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446E00u;
    if (runtime->hasFunction(0x446E00u)) {
        auto targetFn = runtime->lookupFunction(0x446E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446CCCu; }
        if (ctx->pc != 0x446CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00446E00_0x446e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446CCCu; }
        if (ctx->pc != 0x446CCCu) { return; }
    }
    ctx->pc = 0x446CCCu;
label_446ccc:
    // 0x446ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_446cd0:
    if (ctx->pc == 0x446CD0u) {
        ctx->pc = 0x446CD4u;
        goto label_446cd4;
    }
    ctx->pc = 0x446CCCu;
    {
        const bool branch_taken_0x446ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446ccc) {
            ctx->pc = 0x446CE0u;
            goto label_446ce0;
        }
    }
    ctx->pc = 0x446CD4u;
label_446cd4:
    // 0x446cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446cd8:
    // 0x446cd8: 0xc0e0dcc  jal         func_383730
label_446cdc:
    if (ctx->pc == 0x446CDCu) {
        ctx->pc = 0x446CDCu;
            // 0x446cdc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x446CE0u;
        goto label_446ce0;
    }
    ctx->pc = 0x446CD8u;
    SET_GPR_U32(ctx, 31, 0x446CE0u);
    ctx->pc = 0x446CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446CD8u;
            // 0x446cdc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383730u;
    if (runtime->hasFunction(0x383730u)) {
        auto targetFn = runtime->lookupFunction(0x383730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446CE0u; }
        if (ctx->pc != 0x446CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383730_0x383730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446CE0u; }
        if (ctx->pc != 0x446CE0u) { return; }
    }
    ctx->pc = 0x446CE0u;
label_446ce0:
    // 0x446ce0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x446ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_446ce4:
    // 0x446ce4: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x446ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_446ce8:
    // 0x446ce8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_446cec:
    if (ctx->pc == 0x446CECu) {
        ctx->pc = 0x446CECu;
            // 0x446cec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x446CF0u;
        goto label_446cf0;
    }
    ctx->pc = 0x446CE8u;
    {
        const bool branch_taken_0x446ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446CE8u;
            // 0x446cec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446ce8) {
            ctx->pc = 0x446C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446c98;
        }
    }
    ctx->pc = 0x446CF0u;
label_446cf0:
    // 0x446cf0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x446cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_446cf4:
    // 0x446cf4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x446cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_446cf8:
    // 0x446cf8: 0xc111b58  jal         func_446D60
label_446cfc:
    if (ctx->pc == 0x446CFCu) {
        ctx->pc = 0x446CFCu;
            // 0x446cfc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x446D00u;
        goto label_446d00;
    }
    ctx->pc = 0x446CF8u;
    SET_GPR_U32(ctx, 31, 0x446D00u);
    ctx->pc = 0x446CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446CF8u;
            // 0x446cfc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446D60u;
    if (runtime->hasFunction(0x446D60u)) {
        auto targetFn = runtime->lookupFunction(0x446D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446D00u; }
        if (ctx->pc != 0x446D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00446D60_0x446d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446D00u; }
        if (ctx->pc != 0x446D00u) { return; }
    }
    ctx->pc = 0x446D00u;
label_446d00:
    // 0x446d00: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x446d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_446d04:
    // 0x446d04: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x446d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_446d08:
    // 0x446d08: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x446d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_446d0c:
    // 0x446d0c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x446d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_446d10:
    // 0x446d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_446d14:
    // 0x446d14: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x446d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_446d18:
    // 0x446d18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x446d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_446d1c:
    // 0x446d1c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x446d1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_446d20:
    // 0x446d20: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x446d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_446d24:
    // 0x446d24: 0x5460ffbe  bnel        $v1, $zero, . + 4 + (-0x42 << 2)
label_446d28:
    if (ctx->pc == 0x446D28u) {
        ctx->pc = 0x446D28u;
            // 0x446d28: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x446D2Cu;
        goto label_446d2c;
    }
    ctx->pc = 0x446D24u;
    {
        const bool branch_taken_0x446d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x446d24) {
            ctx->pc = 0x446D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446D24u;
            // 0x446d28: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446c20;
        }
    }
    ctx->pc = 0x446D2Cu;
label_446d2c:
    // 0x446d2c: 0x0  nop
    ctx->pc = 0x446d2cu;
    // NOP
label_446d30:
    // 0x446d30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x446d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_446d34:
    // 0x446d34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x446d34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_446d38:
    // 0x446d38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x446d38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_446d3c:
    // 0x446d3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x446d3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_446d40:
    // 0x446d40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x446d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_446d44:
    // 0x446d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x446d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_446d48:
    // 0x446d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x446d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_446d4c:
    // 0x446d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x446d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_446d50:
    // 0x446d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x446d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_446d54:
    // 0x446d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446d58:
    // 0x446d58: 0x3e00008  jr          $ra
label_446d5c:
    if (ctx->pc == 0x446D5Cu) {
        ctx->pc = 0x446D5Cu;
            // 0x446d5c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x446D60u;
        goto label_fallthrough_0x446d58;
    }
    ctx->pc = 0x446D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446D58u;
            // 0x446d5c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x446d58:
    ctx->pc = 0x446D60u;
}
