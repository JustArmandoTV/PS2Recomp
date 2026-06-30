#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BEB40
// Address: 0x2beb40 - 0x2beca0
void sub_002BEB40_0x2beb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEB40_0x2beb40");
#endif

    switch (ctx->pc) {
        case 0x2beb40u: goto label_2beb40;
        case 0x2beb44u: goto label_2beb44;
        case 0x2beb48u: goto label_2beb48;
        case 0x2beb4cu: goto label_2beb4c;
        case 0x2beb50u: goto label_2beb50;
        case 0x2beb54u: goto label_2beb54;
        case 0x2beb58u: goto label_2beb58;
        case 0x2beb5cu: goto label_2beb5c;
        case 0x2beb60u: goto label_2beb60;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb68u: goto label_2beb68;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2beb70u: goto label_2beb70;
        case 0x2beb74u: goto label_2beb74;
        case 0x2beb78u: goto label_2beb78;
        case 0x2beb7cu: goto label_2beb7c;
        case 0x2beb80u: goto label_2beb80;
        case 0x2beb84u: goto label_2beb84;
        case 0x2beb88u: goto label_2beb88;
        case 0x2beb8cu: goto label_2beb8c;
        case 0x2beb90u: goto label_2beb90;
        case 0x2beb94u: goto label_2beb94;
        case 0x2beb98u: goto label_2beb98;
        case 0x2beb9cu: goto label_2beb9c;
        case 0x2beba0u: goto label_2beba0;
        case 0x2beba4u: goto label_2beba4;
        case 0x2beba8u: goto label_2beba8;
        case 0x2bebacu: goto label_2bebac;
        case 0x2bebb0u: goto label_2bebb0;
        case 0x2bebb4u: goto label_2bebb4;
        case 0x2bebb8u: goto label_2bebb8;
        case 0x2bebbcu: goto label_2bebbc;
        case 0x2bebc0u: goto label_2bebc0;
        case 0x2bebc4u: goto label_2bebc4;
        case 0x2bebc8u: goto label_2bebc8;
        case 0x2bebccu: goto label_2bebcc;
        case 0x2bebd0u: goto label_2bebd0;
        case 0x2bebd4u: goto label_2bebd4;
        case 0x2bebd8u: goto label_2bebd8;
        case 0x2bebdcu: goto label_2bebdc;
        case 0x2bebe0u: goto label_2bebe0;
        case 0x2bebe4u: goto label_2bebe4;
        case 0x2bebe8u: goto label_2bebe8;
        case 0x2bebecu: goto label_2bebec;
        case 0x2bebf0u: goto label_2bebf0;
        case 0x2bebf4u: goto label_2bebf4;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bebfcu: goto label_2bebfc;
        case 0x2bec00u: goto label_2bec00;
        case 0x2bec04u: goto label_2bec04;
        case 0x2bec08u: goto label_2bec08;
        case 0x2bec0cu: goto label_2bec0c;
        case 0x2bec10u: goto label_2bec10;
        case 0x2bec14u: goto label_2bec14;
        case 0x2bec18u: goto label_2bec18;
        case 0x2bec1cu: goto label_2bec1c;
        case 0x2bec20u: goto label_2bec20;
        case 0x2bec24u: goto label_2bec24;
        case 0x2bec28u: goto label_2bec28;
        case 0x2bec2cu: goto label_2bec2c;
        case 0x2bec30u: goto label_2bec30;
        case 0x2bec34u: goto label_2bec34;
        case 0x2bec38u: goto label_2bec38;
        case 0x2bec3cu: goto label_2bec3c;
        case 0x2bec40u: goto label_2bec40;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec48u: goto label_2bec48;
        case 0x2bec4cu: goto label_2bec4c;
        case 0x2bec50u: goto label_2bec50;
        case 0x2bec54u: goto label_2bec54;
        case 0x2bec58u: goto label_2bec58;
        case 0x2bec5cu: goto label_2bec5c;
        case 0x2bec60u: goto label_2bec60;
        case 0x2bec64u: goto label_2bec64;
        case 0x2bec68u: goto label_2bec68;
        case 0x2bec6cu: goto label_2bec6c;
        case 0x2bec70u: goto label_2bec70;
        case 0x2bec74u: goto label_2bec74;
        case 0x2bec78u: goto label_2bec78;
        case 0x2bec7cu: goto label_2bec7c;
        case 0x2bec80u: goto label_2bec80;
        case 0x2bec84u: goto label_2bec84;
        case 0x2bec88u: goto label_2bec88;
        case 0x2bec8cu: goto label_2bec8c;
        case 0x2bec90u: goto label_2bec90;
        case 0x2bec94u: goto label_2bec94;
        case 0x2bec98u: goto label_2bec98;
        case 0x2bec9cu: goto label_2bec9c;
        default: break;
    }

    ctx->pc = 0x2beb40u;

label_2beb40:
    // 0x2beb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2beb44:
    // 0x2beb44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2beb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2beb48:
    // 0x2beb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2beb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2beb4c:
    // 0x2beb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2beb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2beb50:
    // 0x2beb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2beb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2beb54:
    // 0x2beb54: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2beb58:
    if (ctx->pc == 0x2BEB58u) {
        ctx->pc = 0x2BEB58u;
            // 0x2beb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB5Cu;
        goto label_2beb5c;
    }
    ctx->pc = 0x2BEB54u;
    {
        const bool branch_taken_0x2beb54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB54u;
            // 0x2beb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb54) {
            ctx->pc = 0x2BEC88u;
            goto label_2bec88;
        }
    }
    ctx->pc = 0x2BEB5Cu;
label_2beb5c:
    // 0x2beb5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2beb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2beb60:
    // 0x2beb60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2beb64:
    // 0x2beb64: 0x24631bd0  addiu       $v1, $v1, 0x1BD0
    ctx->pc = 0x2beb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
label_2beb68:
    // 0x2beb68: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2beb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2beb6c:
    // 0x2beb6c: 0x24421c08  addiu       $v0, $v0, 0x1C08
    ctx->pc = 0x2beb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7176));
label_2beb70:
    // 0x2beb70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2beb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2beb74:
    // 0x2beb74: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2beb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2beb78:
    // 0x2beb78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2beb7c:
    // 0x2beb7c: 0xc0407c0  jal         func_101F00
label_2beb80:
    if (ctx->pc == 0x2BEB80u) {
        ctx->pc = 0x2BEB80u;
            // 0x2beb80: 0x24a5eab0  addiu       $a1, $a1, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961840));
        ctx->pc = 0x2BEB84u;
        goto label_2beb84;
    }
    ctx->pc = 0x2BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB84u);
    ctx->pc = 0x2BEB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB7Cu;
            // 0x2beb80: 0x24a5eab0  addiu       $a1, $a1, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB84u; }
        if (ctx->pc != 0x2BEB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB84u; }
        if (ctx->pc != 0x2BEB84u) { return; }
    }
    ctx->pc = 0x2BEB84u;
label_2beb84:
    // 0x2beb84: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2beb88:
    // 0x2beb88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2beb8c:
    if (ctx->pc == 0x2BEB8Cu) {
        ctx->pc = 0x2BEB8Cu;
            // 0x2beb8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BEB90u;
        goto label_2beb90;
    }
    ctx->pc = 0x2BEB88u;
    {
        const bool branch_taken_0x2beb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beb88) {
            ctx->pc = 0x2BEB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB88u;
            // 0x2beb8c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEB9Cu;
            goto label_2beb9c;
        }
    }
    ctx->pc = 0x2BEB90u;
label_2beb90:
    // 0x2beb90: 0xc07507c  jal         func_1D41F0
label_2beb94:
    if (ctx->pc == 0x2BEB94u) {
        ctx->pc = 0x2BEB94u;
            // 0x2beb94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BEB98u;
        goto label_2beb98;
    }
    ctx->pc = 0x2BEB90u;
    SET_GPR_U32(ctx, 31, 0x2BEB98u);
    ctx->pc = 0x2BEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB90u;
            // 0x2beb94: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB98u; }
        if (ctx->pc != 0x2BEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB98u; }
        if (ctx->pc != 0x2BEB98u) { return; }
    }
    ctx->pc = 0x2BEB98u;
label_2beb98:
    // 0x2beb98: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2beb9c:
    // 0x2beb9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2beba0:
    if (ctx->pc == 0x2BEBA0u) {
        ctx->pc = 0x2BEBA0u;
            // 0x2beba0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BEBA4u;
        goto label_2beba4;
    }
    ctx->pc = 0x2BEB9Cu;
    {
        const bool branch_taken_0x2beb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beb9c) {
            ctx->pc = 0x2BEBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB9Cu;
            // 0x2beba0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBCCu;
            goto label_2bebcc;
        }
    }
    ctx->pc = 0x2BEBA4u;
label_2beba4:
    // 0x2beba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2beba8:
    if (ctx->pc == 0x2BEBA8u) {
        ctx->pc = 0x2BEBACu;
        goto label_2bebac;
    }
    ctx->pc = 0x2BEBA4u;
    {
        const bool branch_taken_0x2beba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beba4) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BEBACu;
label_2bebac:
    // 0x2bebac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bebb0:
    if (ctx->pc == 0x2BEBB0u) {
        ctx->pc = 0x2BEBB4u;
        goto label_2bebb4;
    }
    ctx->pc = 0x2BEBACu;
    {
        const bool branch_taken_0x2bebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebac) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BEBB4u;
label_2bebb4:
    // 0x2bebb4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bebb8:
    // 0x2bebb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bebbc:
    if (ctx->pc == 0x2BEBBCu) {
        ctx->pc = 0x2BEBC0u;
        goto label_2bebc0;
    }
    ctx->pc = 0x2BEBB8u;
    {
        const bool branch_taken_0x2bebb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebb8) {
            ctx->pc = 0x2BEBC8u;
            goto label_2bebc8;
        }
    }
    ctx->pc = 0x2BEBC0u;
label_2bebc0:
    // 0x2bebc0: 0xc0400a8  jal         func_1002A0
label_2bebc4:
    if (ctx->pc == 0x2BEBC4u) {
        ctx->pc = 0x2BEBC8u;
        goto label_2bebc8;
    }
    ctx->pc = 0x2BEBC0u;
    SET_GPR_U32(ctx, 31, 0x2BEBC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBC8u; }
        if (ctx->pc != 0x2BEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBC8u; }
        if (ctx->pc != 0x2BEBC8u) { return; }
    }
    ctx->pc = 0x2BEBC8u;
label_2bebc8:
    // 0x2bebc8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bebcc:
    // 0x2bebcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bebd0:
    if (ctx->pc == 0x2BEBD0u) {
        ctx->pc = 0x2BEBD0u;
            // 0x2bebd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BEBD4u;
        goto label_2bebd4;
    }
    ctx->pc = 0x2BEBCCu;
    {
        const bool branch_taken_0x2bebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebcc) {
            ctx->pc = 0x2BEBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEBCCu;
            // 0x2bebd0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBFCu;
            goto label_2bebfc;
        }
    }
    ctx->pc = 0x2BEBD4u;
label_2bebd4:
    // 0x2bebd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bebd8:
    if (ctx->pc == 0x2BEBD8u) {
        ctx->pc = 0x2BEBDCu;
        goto label_2bebdc;
    }
    ctx->pc = 0x2BEBD4u;
    {
        const bool branch_taken_0x2bebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebd4) {
            ctx->pc = 0x2BEBF8u;
            goto label_2bebf8;
        }
    }
    ctx->pc = 0x2BEBDCu;
label_2bebdc:
    // 0x2bebdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bebe0:
    if (ctx->pc == 0x2BEBE0u) {
        ctx->pc = 0x2BEBE4u;
        goto label_2bebe4;
    }
    ctx->pc = 0x2BEBDCu;
    {
        const bool branch_taken_0x2bebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebdc) {
            ctx->pc = 0x2BEBF8u;
            goto label_2bebf8;
        }
    }
    ctx->pc = 0x2BEBE4u;
label_2bebe4:
    // 0x2bebe4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bebe8:
    // 0x2bebe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bebec:
    if (ctx->pc == 0x2BEBECu) {
        ctx->pc = 0x2BEBF0u;
        goto label_2bebf0;
    }
    ctx->pc = 0x2BEBE8u;
    {
        const bool branch_taken_0x2bebe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebe8) {
            ctx->pc = 0x2BEBF8u;
            goto label_2bebf8;
        }
    }
    ctx->pc = 0x2BEBF0u;
label_2bebf0:
    // 0x2bebf0: 0xc0400a8  jal         func_1002A0
label_2bebf4:
    if (ctx->pc == 0x2BEBF4u) {
        ctx->pc = 0x2BEBF8u;
        goto label_2bebf8;
    }
    ctx->pc = 0x2BEBF0u;
    SET_GPR_U32(ctx, 31, 0x2BEBF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBF8u; }
        if (ctx->pc != 0x2BEBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBF8u; }
        if (ctx->pc != 0x2BEBF8u) { return; }
    }
    ctx->pc = 0x2BEBF8u;
label_2bebf8:
    // 0x2bebf8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bebfc:
    // 0x2bebfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bec00:
    if (ctx->pc == 0x2BEC00u) {
        ctx->pc = 0x2BEC04u;
        goto label_2bec04;
    }
    ctx->pc = 0x2BEBFCu;
    {
        const bool branch_taken_0x2bebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebfc) {
            ctx->pc = 0x2BEC18u;
            goto label_2bec18;
        }
    }
    ctx->pc = 0x2BEC04u;
label_2bec04:
    // 0x2bec04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bec08:
    // 0x2bec08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bec0c:
    // 0x2bec0c: 0x24631bc0  addiu       $v1, $v1, 0x1BC0
    ctx->pc = 0x2bec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7104));
label_2bec10:
    // 0x2bec10: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bec10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bec14:
    // 0x2bec14: 0xac400d28  sw          $zero, 0xD28($v0)
    ctx->pc = 0x2bec14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3368), GPR_U32(ctx, 0));
label_2bec18:
    // 0x2bec18: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bec1c:
    if (ctx->pc == 0x2BEC1Cu) {
        ctx->pc = 0x2BEC1Cu;
            // 0x2bec1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BEC20u;
        goto label_2bec20;
    }
    ctx->pc = 0x2BEC18u;
    {
        const bool branch_taken_0x2bec18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec18) {
            ctx->pc = 0x2BEC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC18u;
            // 0x2bec1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC74u;
            goto label_2bec74;
        }
    }
    ctx->pc = 0x2BEC20u;
label_2bec20:
    // 0x2bec20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bec24:
    // 0x2bec24: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bec28:
    // 0x2bec28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bec28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bec2c:
    // 0x2bec2c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bec30:
    // 0x2bec30: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bec34:
    if (ctx->pc == 0x2BEC34u) {
        ctx->pc = 0x2BEC34u;
            // 0x2bec34: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BEC38u;
        goto label_2bec38;
    }
    ctx->pc = 0x2BEC30u;
    {
        const bool branch_taken_0x2bec30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec30) {
            ctx->pc = 0x2BEC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC30u;
            // 0x2bec34: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC4Cu;
            goto label_2bec4c;
        }
    }
    ctx->pc = 0x2BEC38u;
label_2bec38:
    // 0x2bec38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bec3c:
    // 0x2bec3c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bec3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bec40:
    // 0x2bec40: 0x320f809  jalr        $t9
label_2bec44:
    if (ctx->pc == 0x2BEC44u) {
        ctx->pc = 0x2BEC44u;
            // 0x2bec44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEC48u;
        goto label_2bec48;
    }
    ctx->pc = 0x2BEC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEC48u);
        ctx->pc = 0x2BEC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC40u;
            // 0x2bec44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BEC48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC48u; }
            if (ctx->pc != 0x2BEC48u) { return; }
        }
        }
    }
    ctx->pc = 0x2BEC48u;
label_2bec48:
    // 0x2bec48: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bec4c:
    // 0x2bec4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bec50:
    if (ctx->pc == 0x2BEC50u) {
        ctx->pc = 0x2BEC50u;
            // 0x2bec50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC54u;
        goto label_2bec54;
    }
    ctx->pc = 0x2BEC4Cu;
    {
        const bool branch_taken_0x2bec4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec4c) {
            ctx->pc = 0x2BEC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC4Cu;
            // 0x2bec50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC68u;
            goto label_2bec68;
        }
    }
    ctx->pc = 0x2BEC54u;
label_2bec54:
    // 0x2bec54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bec54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bec58:
    // 0x2bec58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bec58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bec5c:
    // 0x2bec5c: 0x320f809  jalr        $t9
label_2bec60:
    if (ctx->pc == 0x2BEC60u) {
        ctx->pc = 0x2BEC60u;
            // 0x2bec60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEC64u;
        goto label_2bec64;
    }
    ctx->pc = 0x2BEC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEC64u);
        ctx->pc = 0x2BEC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC5Cu;
            // 0x2bec60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BEC64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC64u; }
            if (ctx->pc != 0x2BEC64u) { return; }
        }
        }
    }
    ctx->pc = 0x2BEC64u;
label_2bec64:
    // 0x2bec64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bec68:
    // 0x2bec68: 0xc075bf8  jal         func_1D6FE0
label_2bec6c:
    if (ctx->pc == 0x2BEC6Cu) {
        ctx->pc = 0x2BEC6Cu;
            // 0x2bec6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC70u;
        goto label_2bec70;
    }
    ctx->pc = 0x2BEC68u;
    SET_GPR_U32(ctx, 31, 0x2BEC70u);
    ctx->pc = 0x2BEC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC68u;
            // 0x2bec6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC70u; }
        if (ctx->pc != 0x2BEC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC70u; }
        if (ctx->pc != 0x2BEC70u) { return; }
    }
    ctx->pc = 0x2BEC70u;
label_2bec70:
    // 0x2bec70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bec74:
    // 0x2bec74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bec74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bec78:
    // 0x2bec78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bec7c:
    if (ctx->pc == 0x2BEC7Cu) {
        ctx->pc = 0x2BEC7Cu;
            // 0x2bec7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC80u;
        goto label_2bec80;
    }
    ctx->pc = 0x2BEC78u;
    {
        const bool branch_taken_0x2bec78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bec78) {
            ctx->pc = 0x2BEC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC78u;
            // 0x2bec7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEC8Cu;
            goto label_2bec8c;
        }
    }
    ctx->pc = 0x2BEC80u;
label_2bec80:
    // 0x2bec80: 0xc0400a8  jal         func_1002A0
label_2bec84:
    if (ctx->pc == 0x2BEC84u) {
        ctx->pc = 0x2BEC84u;
            // 0x2bec84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC88u;
        goto label_2bec88;
    }
    ctx->pc = 0x2BEC80u;
    SET_GPR_U32(ctx, 31, 0x2BEC88u);
    ctx->pc = 0x2BEC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC80u;
            // 0x2bec84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC88u; }
        if (ctx->pc != 0x2BEC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC88u; }
        if (ctx->pc != 0x2BEC88u) { return; }
    }
    ctx->pc = 0x2BEC88u;
label_2bec88:
    // 0x2bec88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bec8c:
    // 0x2bec8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bec90:
    // 0x2bec90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bec90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bec94:
    // 0x2bec94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bec94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bec98:
    // 0x2bec98: 0x3e00008  jr          $ra
label_2bec9c:
    if (ctx->pc == 0x2BEC9Cu) {
        ctx->pc = 0x2BEC9Cu;
            // 0x2bec9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BECA0u;
        goto label_fallthrough_0x2bec98;
    }
    ctx->pc = 0x2BEC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC98u;
            // 0x2bec9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bec98:
    ctx->pc = 0x2BECA0u;
}
