#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAE90
// Address: 0x2bae90 - 0x2bb030
void sub_002BAE90_0x2bae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE90_0x2bae90");
#endif

    switch (ctx->pc) {
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        case 0x2bafa0u: goto label_2bafa0;
        case 0x2bafa4u: goto label_2bafa4;
        case 0x2bafa8u: goto label_2bafa8;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafb4u: goto label_2bafb4;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafbcu: goto label_2bafbc;
        case 0x2bafc0u: goto label_2bafc0;
        case 0x2bafc4u: goto label_2bafc4;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafccu: goto label_2bafcc;
        case 0x2bafd0u: goto label_2bafd0;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafd8u: goto label_2bafd8;
        case 0x2bafdcu: goto label_2bafdc;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2bafe8u: goto label_2bafe8;
        case 0x2bafecu: goto label_2bafec;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff4u: goto label_2baff4;
        case 0x2baff8u: goto label_2baff8;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb000u: goto label_2bb000;
        case 0x2bb004u: goto label_2bb004;
        case 0x2bb008u: goto label_2bb008;
        case 0x2bb00cu: goto label_2bb00c;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        default: break;
    }

    ctx->pc = 0x2bae90u;

label_2bae90:
    // 0x2bae90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bae94:
    // 0x2bae94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bae98:
    // 0x2bae98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bae9c:
    // 0x2bae9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2baea0:
    // 0x2baea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2baea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2baea4:
    // 0x2baea4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2baea8:
    if (ctx->pc == 0x2BAEA8u) {
        ctx->pc = 0x2BAEA8u;
            // 0x2baea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEACu;
        goto label_2baeac;
    }
    ctx->pc = 0x2BAEA4u;
    {
        const bool branch_taken_0x2baea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEA4u;
            // 0x2baea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baea4) {
            ctx->pc = 0x2BAF10u;
            goto label_2baf10;
        }
    }
    ctx->pc = 0x2BAEACu;
label_2baeac:
    // 0x2baeac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2baeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2baeb0:
    // 0x2baeb0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2baeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2baeb4:
    // 0x2baeb4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2baeb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2baeb8:
    // 0x2baeb8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_2baebc:
    if (ctx->pc == 0x2BAEBCu) {
        ctx->pc = 0x2BAEBCu;
            // 0x2baebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAEC0u;
        goto label_2baec0;
    }
    ctx->pc = 0x2BAEB8u;
    {
        const bool branch_taken_0x2baeb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEB8u;
            // 0x2baebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baeb8) {
            ctx->pc = 0x2BAEE0u;
            goto label_2baee0;
        }
    }
    ctx->pc = 0x2BAEC0u;
label_2baec0:
    // 0x2baec0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2baec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2baec4:
    // 0x2baec4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2baec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2baec8:
    // 0x2baec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2baec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2baecc:
    // 0x2baecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2baeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2baed0:
    // 0x2baed0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2baed4:
    // 0x2baed4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2baed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2baed8:
    // 0x2baed8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2baedc:
    if (ctx->pc == 0x2BAEDCu) {
        ctx->pc = 0x2BAEE0u;
        goto label_2baee0;
    }
    ctx->pc = 0x2BAED8u;
    {
        const bool branch_taken_0x2baed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baed8) {
            ctx->pc = 0x2BAEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2baec4;
        }
    }
    ctx->pc = 0x2BAEE0u;
label_2baee0:
    // 0x2baee0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2baee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2baee4:
    // 0x2baee4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2baee8:
    if (ctx->pc == 0x2BAEE8u) {
        ctx->pc = 0x2BAEE8u;
            // 0x2baee8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BAEECu;
        goto label_2baeec;
    }
    ctx->pc = 0x2BAEE4u;
    {
        const bool branch_taken_0x2baee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baee4) {
            ctx->pc = 0x2BAEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEE4u;
            // 0x2baee8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEFCu;
            goto label_2baefc;
        }
    }
    ctx->pc = 0x2BAEECu;
label_2baeec:
    // 0x2baeec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2baeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2baef0:
    // 0x2baef0: 0xc0407c0  jal         func_101F00
label_2baef4:
    if (ctx->pc == 0x2BAEF4u) {
        ctx->pc = 0x2BAEF4u;
            // 0x2baef4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2BAEF8u;
        goto label_2baef8;
    }
    ctx->pc = 0x2BAEF0u;
    SET_GPR_U32(ctx, 31, 0x2BAEF8u);
    ctx->pc = 0x2BAEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEF0u;
            // 0x2baef4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEF8u; }
        if (ctx->pc != 0x2BAEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEF8u; }
        if (ctx->pc != 0x2BAEF8u) { return; }
    }
    ctx->pc = 0x2BAEF8u;
label_2baef8:
    // 0x2baef8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2baef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2baefc:
    // 0x2baefc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2baefcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2baf00:
    // 0x2baf00: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2baf04:
    if (ctx->pc == 0x2BAF04u) {
        ctx->pc = 0x2BAF04u;
            // 0x2baf04: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2BAF08u;
        goto label_2baf08;
    }
    ctx->pc = 0x2BAF00u;
    {
        const bool branch_taken_0x2baf00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF00u;
            // 0x2baf04: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf00) {
            ctx->pc = 0x2BAF10u;
            goto label_2baf10;
        }
    }
    ctx->pc = 0x2BAF08u;
label_2baf08:
    // 0x2baf08: 0xc0400a8  jal         func_1002A0
label_2baf0c:
    if (ctx->pc == 0x2BAF0Cu) {
        ctx->pc = 0x2BAF0Cu;
            // 0x2baf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF10u;
        goto label_2baf10;
    }
    ctx->pc = 0x2BAF08u;
    SET_GPR_U32(ctx, 31, 0x2BAF10u);
    ctx->pc = 0x2BAF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF08u;
            // 0x2baf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF10u; }
        if (ctx->pc != 0x2BAF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF10u; }
        if (ctx->pc != 0x2BAF10u) { return; }
    }
    ctx->pc = 0x2BAF10u;
label_2baf10:
    // 0x2baf10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2baf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baf14:
    // 0x2baf14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2baf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2baf18:
    // 0x2baf18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2baf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2baf1c:
    // 0x2baf1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2baf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2baf20:
    // 0x2baf20: 0x3e00008  jr          $ra
label_2baf24:
    if (ctx->pc == 0x2BAF24u) {
        ctx->pc = 0x2BAF24u;
            // 0x2baf24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BAF28u;
        goto label_2baf28;
    }
    ctx->pc = 0x2BAF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF20u;
            // 0x2baf24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAF28u;
label_2baf28:
    // 0x2baf28: 0x0  nop
    ctx->pc = 0x2baf28u;
    // NOP
label_2baf2c:
    // 0x2baf2c: 0x0  nop
    ctx->pc = 0x2baf2cu;
    // NOP
label_2baf30:
    // 0x2baf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2baf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2baf34:
    // 0x2baf34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2baf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2baf38:
    // 0x2baf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2baf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2baf3c:
    // 0x2baf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2baf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2baf40:
    // 0x2baf40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2baf44:
    // 0x2baf44: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2baf48:
    if (ctx->pc == 0x2BAF48u) {
        ctx->pc = 0x2BAF48u;
            // 0x2baf48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF4Cu;
        goto label_2baf4c;
    }
    ctx->pc = 0x2BAF44u;
    {
        const bool branch_taken_0x2baf44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF44u;
            // 0x2baf48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf44) {
            ctx->pc = 0x2BB00Cu;
            goto label_2bb00c;
        }
    }
    ctx->pc = 0x2BAF4Cu;
label_2baf4c:
    // 0x2baf4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2baf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2baf50:
    // 0x2baf50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2baf54:
    // 0x2baf54: 0x24633690  addiu       $v1, $v1, 0x3690
    ctx->pc = 0x2baf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13968));
label_2baf58:
    // 0x2baf58: 0x244236d0  addiu       $v0, $v0, 0x36D0
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
label_2baf5c:
    // 0x2baf5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2baf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2baf60:
    // 0x2baf60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2baf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2baf64:
    // 0x2baf64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2baf64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2baf68:
    // 0x2baf68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2baf68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2baf6c:
    // 0x2baf6c: 0x320f809  jalr        $t9
label_2baf70:
    if (ctx->pc == 0x2BAF70u) {
        ctx->pc = 0x2BAF74u;
        goto label_2baf74;
    }
    ctx->pc = 0x2BAF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAF74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF74u; }
            if (ctx->pc != 0x2BAF74u) { return; }
        }
        }
    }
    ctx->pc = 0x2BAF74u;
label_2baf74:
    // 0x2baf74: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2baf78:
    if (ctx->pc == 0x2BAF78u) {
        ctx->pc = 0x2BAF78u;
            // 0x2baf78: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2BAF7Cu;
        goto label_2baf7c;
    }
    ctx->pc = 0x2BAF74u;
    {
        const bool branch_taken_0x2baf74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf74) {
            ctx->pc = 0x2BAF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF74u;
            // 0x2baf78: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAFF8u;
            goto label_2baff8;
        }
    }
    ctx->pc = 0x2BAF7Cu;
label_2baf7c:
    // 0x2baf7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2baf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2baf80:
    // 0x2baf80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2baf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2baf84:
    // 0x2baf84: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2baf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2baf88:
    // 0x2baf88: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2baf8c:
    // 0x2baf8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2baf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2baf90:
    // 0x2baf90: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2baf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2baf94:
    // 0x2baf94: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2baf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2baf98:
    // 0x2baf98: 0xc0aecc4  jal         func_2BB310
label_2baf9c:
    if (ctx->pc == 0x2BAF9Cu) {
        ctx->pc = 0x2BAF9Cu;
            // 0x2baf9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAFA0u;
        goto label_2bafa0;
    }
    ctx->pc = 0x2BAF98u;
    SET_GPR_U32(ctx, 31, 0x2BAFA0u);
    ctx->pc = 0x2BAF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF98u;
            // 0x2baf9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFA0u; }
        if (ctx->pc != 0x2BAFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFA0u; }
        if (ctx->pc != 0x2BAFA0u) { return; }
    }
    ctx->pc = 0x2BAFA0u;
label_2bafa0:
    // 0x2bafa0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2bafa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2bafa4:
    // 0x2bafa4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2bafa8:
    // 0x2bafa8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bafac:
    if (ctx->pc == 0x2BAFACu) {
        ctx->pc = 0x2BAFACu;
            // 0x2bafac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2BAFB0u;
        goto label_2bafb0;
    }
    ctx->pc = 0x2BAFA8u;
    {
        const bool branch_taken_0x2bafa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bafa8) {
            ctx->pc = 0x2BAFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFA8u;
            // 0x2bafac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAFC4u;
            goto label_2bafc4;
        }
    }
    ctx->pc = 0x2BAFB0u;
label_2bafb0:
    // 0x2bafb0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bafb4:
    // 0x2bafb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bafb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bafb8:
    // 0x2bafb8: 0x320f809  jalr        $t9
label_2bafbc:
    if (ctx->pc == 0x2BAFBCu) {
        ctx->pc = 0x2BAFBCu;
            // 0x2bafbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAFC0u;
        goto label_2bafc0;
    }
    ctx->pc = 0x2BAFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAFC0u);
        ctx->pc = 0x2BAFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFB8u;
            // 0x2bafbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAFC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFC0u; }
            if (ctx->pc != 0x2BAFC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2BAFC0u;
label_2bafc0:
    // 0x2bafc0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2bafc4:
    // 0x2bafc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bafc8:
    // 0x2bafc8: 0xc0aec9c  jal         func_2BB270
label_2bafcc:
    if (ctx->pc == 0x2BAFCCu) {
        ctx->pc = 0x2BAFCCu;
            // 0x2bafcc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2BAFD0u;
        goto label_2bafd0;
    }
    ctx->pc = 0x2BAFC8u;
    SET_GPR_U32(ctx, 31, 0x2BAFD0u);
    ctx->pc = 0x2BAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFC8u;
            // 0x2bafcc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFD0u; }
        if (ctx->pc != 0x2BAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFD0u; }
        if (ctx->pc != 0x2BAFD0u) { return; }
    }
    ctx->pc = 0x2BAFD0u;
label_2bafd0:
    // 0x2bafd0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2bafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2bafd4:
    // 0x2bafd4: 0xc0aec88  jal         func_2BB220
label_2bafd8:
    if (ctx->pc == 0x2BAFD8u) {
        ctx->pc = 0x2BAFD8u;
            // 0x2bafd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BAFDCu;
        goto label_2bafdc;
    }
    ctx->pc = 0x2BAFD4u;
    SET_GPR_U32(ctx, 31, 0x2BAFDCu);
    ctx->pc = 0x2BAFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFD4u;
            // 0x2bafd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFDCu; }
        if (ctx->pc != 0x2BAFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFDCu; }
        if (ctx->pc != 0x2BAFDCu) { return; }
    }
    ctx->pc = 0x2BAFDCu;
label_2bafdc:
    // 0x2bafdc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2bafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2bafe0:
    // 0x2bafe0: 0xc0aec0c  jal         func_2BB030
label_2bafe4:
    if (ctx->pc == 0x2BAFE4u) {
        ctx->pc = 0x2BAFE4u;
            // 0x2bafe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFE8u;
        goto label_2bafe8;
    }
    ctx->pc = 0x2BAFE0u;
    SET_GPR_U32(ctx, 31, 0x2BAFE8u);
    ctx->pc = 0x2BAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFE0u;
            // 0x2bafe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFE8u; }
        if (ctx->pc != 0x2BAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFE8u; }
        if (ctx->pc != 0x2BAFE8u) { return; }
    }
    ctx->pc = 0x2BAFE8u;
label_2bafe8:
    // 0x2bafe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bafe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bafec:
    // 0x2bafec: 0xc0aeaa8  jal         func_2BAAA0
label_2baff0:
    if (ctx->pc == 0x2BAFF0u) {
        ctx->pc = 0x2BAFF0u;
            // 0x2baff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFF4u;
        goto label_2baff4;
    }
    ctx->pc = 0x2BAFECu;
    SET_GPR_U32(ctx, 31, 0x2BAFF4u);
    ctx->pc = 0x2BAFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFECu;
            // 0x2baff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF4u; }
        if (ctx->pc != 0x2BAFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF4u; }
        if (ctx->pc != 0x2BAFF4u) { return; }
    }
    ctx->pc = 0x2BAFF4u;
label_2baff4:
    // 0x2baff4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2baff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2baff8:
    // 0x2baff8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2baff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2baffc:
    // 0x2baffc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bb000:
    if (ctx->pc == 0x2BB000u) {
        ctx->pc = 0x2BB000u;
            // 0x2bb000: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB004u;
        goto label_2bb004;
    }
    ctx->pc = 0x2BAFFCu;
    {
        const bool branch_taken_0x2baffc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2baffc) {
            ctx->pc = 0x2BB000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFFCu;
            // 0x2bb000: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB010u;
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BB004u;
label_2bb004:
    // 0x2bb004: 0xc0400a8  jal         func_1002A0
label_2bb008:
    if (ctx->pc == 0x2BB008u) {
        ctx->pc = 0x2BB008u;
            // 0x2bb008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB00Cu;
        goto label_2bb00c;
    }
    ctx->pc = 0x2BB004u;
    SET_GPR_U32(ctx, 31, 0x2BB00Cu);
    ctx->pc = 0x2BB008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB004u;
            // 0x2bb008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB00Cu; }
        if (ctx->pc != 0x2BB00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB00Cu; }
        if (ctx->pc != 0x2BB00Cu) { return; }
    }
    ctx->pc = 0x2BB00Cu;
label_2bb00c:
    // 0x2bb00c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb010:
    // 0x2bb010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb014:
    // 0x2bb014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb018:
    // 0x2bb018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb01c:
    // 0x2bb01c: 0x3e00008  jr          $ra
label_2bb020:
    if (ctx->pc == 0x2BB020u) {
        ctx->pc = 0x2BB020u;
            // 0x2bb020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BB024u;
        goto label_2bb024;
    }
    ctx->pc = 0x2BB01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB01Cu;
            // 0x2bb020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB024u;
label_2bb024:
    // 0x2bb024: 0x0  nop
    ctx->pc = 0x2bb024u;
    // NOP
label_2bb028:
    // 0x2bb028: 0x0  nop
    ctx->pc = 0x2bb028u;
    // NOP
label_2bb02c:
    // 0x2bb02c: 0x0  nop
    ctx->pc = 0x2bb02cu;
    // NOP
}
