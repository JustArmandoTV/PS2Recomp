#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00471C40
// Address: 0x471c40 - 0x472080
void sub_00471C40_0x471c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471C40_0x471c40");
#endif

    switch (ctx->pc) {
        case 0x471d18u: goto label_471d18;
        case 0x471d3cu: goto label_471d3c;
        case 0x471d5cu: goto label_471d5c;
        case 0x471d64u: goto label_471d64;
        case 0x471d7cu: goto label_471d7c;
        case 0x471da0u: goto label_471da0;
        case 0x471dbcu: goto label_471dbc;
        case 0x471dc4u: goto label_471dc4;
        case 0x471e00u: goto label_471e00;
        case 0x471e78u: goto label_471e78;
        case 0x471ed8u: goto label_471ed8;
        case 0x471f08u: goto label_471f08;
        case 0x471f20u: goto label_471f20;
        case 0x471f38u: goto label_471f38;
        case 0x471f90u: goto label_471f90;
        case 0x471fa8u: goto label_471fa8;
        case 0x471fb8u: goto label_471fb8;
        case 0x472020u: goto label_472020;
        case 0x472038u: goto label_472038;
        default: break;
    }

    ctx->pc = 0x471c40u;

    // 0x471c40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x471c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x471c44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x471c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x471c48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x471c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x471c4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x471c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x471c50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x471c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x471c54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x471c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x471c58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x471c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x471c5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x471c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471c60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x471c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x471c64: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x471c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x471c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x471c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x471c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x471c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x471c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x471c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x471c74: 0x8c77a348  lw          $s7, -0x5CB8($v1)
    ctx->pc = 0x471c74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x471c78: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x471c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x471c7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x471c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x471c80: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x471c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x471c84: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x471c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x471c88: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x471c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x471c8c: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x471c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x471c90: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x471c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x471c94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x471c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x471c98: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x471c98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471c9c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x471c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x471ca0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x471ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x471ca4: 0x24920070  addiu       $s2, $a0, 0x70
    ctx->pc = 0x471ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x471ca8: 0x8c760ed0  lw          $s6, 0xED0($v1)
    ctx->pc = 0x471ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3792)));
    // 0x471cac: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x471cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x471cb0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x471cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x471cb4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x471cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x471cb8: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x471cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x471cbc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x471cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x471cc0: 0x24841490  addiu       $a0, $a0, 0x1490
    ctx->pc = 0x471cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
    // 0x471cc4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x471cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x471cc8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x471CC8u;
    {
        const bool branch_taken_0x471cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x471CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471CC8u;
            // 0x471ccc: 0x8c90002c  lw          $s0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471cc8) {
            ctx->pc = 0x471CE8u;
            goto label_471ce8;
        }
    }
    ctx->pc = 0x471CD0u;
    // 0x471cd0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x471cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x471cd4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x471CD4u;
    {
        const bool branch_taken_0x471cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x471cd4) {
            ctx->pc = 0x471CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471CD4u;
            // 0x471cd8: 0x96430002  lhu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471CECu;
            goto label_471cec;
        }
    }
    ctx->pc = 0x471CDCu;
    // 0x471cdc: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x471cdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x471ce0: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x471ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x471ce4: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x471ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_471ce8:
    // 0x471ce8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x471ce8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_471cec:
    // 0x471cec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x471cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x471cf0: 0x546000d8  bnel        $v1, $zero, . + 4 + (0xD8 << 2)
    ctx->pc = 0x471CF0u;
    {
        const bool branch_taken_0x471cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x471cf0) {
            ctx->pc = 0x471CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471CF0u;
            // 0x471cf4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472054u;
            goto label_472054;
        }
    }
    ctx->pc = 0x471CF8u;
    // 0x471cf8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x471cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x471cfc: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x471CFCu;
    {
        const bool branch_taken_0x471cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471cfc) {
            ctx->pc = 0x471D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471CFCu;
            // 0x471d00: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471D20u;
            goto label_471d20;
        }
    }
    ctx->pc = 0x471D04u;
    // 0x471d04: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x471D04u;
    {
        const bool branch_taken_0x471d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471d04) {
            ctx->pc = 0x471D1Cu;
            goto label_471d1c;
        }
    }
    ctx->pc = 0x471D0Cu;
    // 0x471d0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x471d10: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x471D10u;
    SET_GPR_U32(ctx, 31, 0x471D18u);
    ctx->pc = 0x471D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471D10u;
            // 0x471d14: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D18u; }
        if (ctx->pc != 0x471D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D18u; }
        if (ctx->pc != 0x471D18u) { return; }
    }
    ctx->pc = 0x471D18u;
label_471d18:
    // 0x471d18: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x471d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_471d1c:
    // 0x471d1c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x471d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_471d20:
    // 0x471d20: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x471D20u;
    {
        const bool branch_taken_0x471d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471d20) {
            ctx->pc = 0x471D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471D20u;
            // 0x471d24: 0x96420002  lhu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471D44u;
            goto label_471d44;
        }
    }
    ctx->pc = 0x471D28u;
    // 0x471d28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x471D28u;
    {
        const bool branch_taken_0x471d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x471d28) {
            ctx->pc = 0x471D40u;
            goto label_471d40;
        }
    }
    ctx->pc = 0x471D30u;
    // 0x471d30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x471d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x471d34: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x471D34u;
    SET_GPR_U32(ctx, 31, 0x471D3Cu);
    ctx->pc = 0x471D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471D34u;
            // 0x471d38: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D3Cu; }
        if (ctx->pc != 0x471D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D3Cu; }
        if (ctx->pc != 0x471D3Cu) { return; }
    }
    ctx->pc = 0x471D3Cu;
label_471d3c:
    // 0x471d3c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x471d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_471d40:
    // 0x471d40: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x471d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_471d44:
    // 0x471d44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x471d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x471d48: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x471D48u;
    {
        const bool branch_taken_0x471d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471d48) {
            ctx->pc = 0x471D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471D48u;
            // 0x471d4c: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471F30u;
            goto label_471f30;
        }
    }
    ctx->pc = 0x471D50u;
    // 0x471d50: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x471d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x471d54: 0xc11bb74  jal         func_46EDD0
    ctx->pc = 0x471D54u;
    SET_GPR_U32(ctx, 31, 0x471D5Cu);
    ctx->pc = 0x471D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471D54u;
            // 0x471d58: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D5Cu; }
        if (ctx->pc != 0x471D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D5Cu; }
        if (ctx->pc != 0x471D5Cu) { return; }
    }
    ctx->pc = 0x471D5Cu;
label_471d5c:
    // 0x471d5c: 0xc11bb70  jal         func_46EDC0
    ctx->pc = 0x471D5Cu;
    SET_GPR_U32(ctx, 31, 0x471D64u);
    ctx->pc = 0x471D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471D5Cu;
            // 0x471d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D64u; }
        if (ctx->pc != 0x471D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471D64u; }
        if (ctx->pc != 0x471D64u) { return; }
    }
    ctx->pc = 0x471D64u;
label_471d64:
    // 0x471d64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x471d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471d68: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x471d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471d6c: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x471d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x471d70: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x471D70u;
    {
        const bool branch_taken_0x471d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471d70) {
            ctx->pc = 0x471D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471D70u;
            // 0x471d74: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471D80u;
            goto label_471d80;
        }
    }
    ctx->pc = 0x471D78u;
    // 0x471d78: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x471d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_471d7c:
    // 0x471d7c: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x471d7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_471d80:
    // 0x471d80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x471d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x471d84: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x471d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x471d88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x471d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471d8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x471d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x471d90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x471d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x471d94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x471d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x471d98: 0xc11bb6c  jal         func_46EDB0
    ctx->pc = 0x471D98u;
    SET_GPR_U32(ctx, 31, 0x471DA0u);
    ctx->pc = 0x471D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471D98u;
            // 0x471d9c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DA0u; }
        if (ctx->pc != 0x471DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DA0u; }
        if (ctx->pc != 0x471DA0u) { return; }
    }
    ctx->pc = 0x471DA0u;
label_471da0:
    // 0x471da0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x471da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471da4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x471da4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x471da8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x471da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x471dac: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x471DACu;
    {
        const bool branch_taken_0x471dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x471dac) {
            ctx->pc = 0x471DD8u;
            goto label_471dd8;
        }
    }
    ctx->pc = 0x471DB4u;
    // 0x471db4: 0xc0775b0  jal         func_1DD6C0
    ctx->pc = 0x471DB4u;
    SET_GPR_U32(ctx, 31, 0x471DBCu);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DBCu; }
        if (ctx->pc != 0x471DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DBCu; }
        if (ctx->pc != 0x471DBCu) { return; }
    }
    ctx->pc = 0x471DBCu;
label_471dbc:
    // 0x471dbc: 0xc11bb68  jal         func_46EDA0
    ctx->pc = 0x471DBCu;
    SET_GPR_U32(ctx, 31, 0x471DC4u);
    ctx->pc = 0x471DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471DBCu;
            // 0x471dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DC4u; }
        if (ctx->pc != 0x471DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471DC4u; }
        if (ctx->pc != 0x471DC4u) { return; }
    }
    ctx->pc = 0x471DC4u;
label_471dc4:
    // 0x471dc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x471dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x471dc8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x471DC8u;
    {
        const bool branch_taken_0x471dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x471dc8) {
            ctx->pc = 0x471DD8u;
            goto label_471dd8;
        }
    }
    ctx->pc = 0x471DD0u;
    // 0x471dd0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x471dd0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x471dd4: 0x0  nop
    ctx->pc = 0x471dd4u;
    // NOP
label_471dd8:
    // 0x471dd8: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x471DD8u;
    {
        const bool branch_taken_0x471dd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x471dd8) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471DE0u;
    // 0x471de0: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x471de0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471de4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x471de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x471de8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x471DE8u;
    {
        const bool branch_taken_0x471de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x471de8) {
            ctx->pc = 0x471E40u;
            goto label_471e40;
        }
    }
    ctx->pc = 0x471DF0u;
    // 0x471df0: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x471df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x471df4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x471df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471df8: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x471df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
    // 0x471dfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x471dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_471e00:
    // 0x471e00: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x471e00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x471e04: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x471e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x471e08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x471E08u;
    {
        const bool branch_taken_0x471e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471e08) {
            ctx->pc = 0x471E28u;
            goto label_471e28;
        }
    }
    ctx->pc = 0x471E10u;
    // 0x471e10: 0x12260005  beq         $s1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x471E10u;
    {
        const bool branch_taken_0x471e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x471e10) {
            ctx->pc = 0x471E28u;
            goto label_471e28;
        }
    }
    ctx->pc = 0x471E18u;
    // 0x471e18: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x471e18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x471e1c: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x471E1Cu;
    {
        const bool branch_taken_0x471e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x471e1c) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E24u;
    // 0x471e24: 0x0  nop
    ctx->pc = 0x471e24u;
    // NOP
label_471e28:
    // 0x471e28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x471e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x471e2c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x471e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x471e30: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x471e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x471e34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x471E34u;
    {
        const bool branch_taken_0x471e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x471E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471E34u;
            // 0x471e38: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471e34) {
            ctx->pc = 0x471E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471e00;
        }
    }
    ctx->pc = 0x471E3Cu;
    // 0x471e3c: 0x0  nop
    ctx->pc = 0x471e3cu;
    // NOP
label_471e40:
    // 0x471e40: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x471e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x471e44: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x471E44u;
    {
        const bool branch_taken_0x471e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x471e44) {
            ctx->pc = 0x471E70u;
            goto label_471e70;
        }
    }
    ctx->pc = 0x471E4Cu;
    // 0x471e4c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x471e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x471e50: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x471E50u;
    {
        const bool branch_taken_0x471e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x471e50) {
            ctx->pc = 0x471E70u;
            goto label_471e70;
        }
    }
    ctx->pc = 0x471E58u;
    // 0x471e58: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x471e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x471e5c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x471E5Cu;
    {
        const bool branch_taken_0x471e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x471e5c) {
            ctx->pc = 0x471E70u;
            goto label_471e70;
        }
    }
    ctx->pc = 0x471E64u;
    // 0x471e64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x471E64u;
    {
        const bool branch_taken_0x471e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e64) {
            ctx->pc = 0x471E88u;
            goto label_471e88;
        }
    }
    ctx->pc = 0x471E6Cu;
    // 0x471e6c: 0x0  nop
    ctx->pc = 0x471e6cu;
    // NOP
label_471e70:
    // 0x471e70: 0xc0c8f80  jal         func_323E00
    ctx->pc = 0x471E70u;
    SET_GPR_U32(ctx, 31, 0x471E78u);
    ctx->pc = 0x471E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471E70u;
            // 0x471e74: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471E78u; }
        if (ctx->pc != 0x471E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471E78u; }
        if (ctx->pc != 0x471E78u) { return; }
    }
    ctx->pc = 0x471E78u;
label_471e78:
    // 0x471e78: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x471e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x471e7c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x471E7Cu;
    {
        const bool branch_taken_0x471e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x471e7c) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E84u;
    // 0x471e84: 0x0  nop
    ctx->pc = 0x471e84u;
    // NOP
label_471e88:
    // 0x471e88: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x471e88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471e8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x471e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x471e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x471e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x471e94: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x471e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x471e98: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x471e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x471e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x471e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x471ea0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x471EA0u;
    {
        const bool branch_taken_0x471ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471ea0) {
            ctx->pc = 0x471ED0u;
            goto label_471ed0;
        }
    }
    ctx->pc = 0x471EA8u;
label_471ea8:
    // 0x471ea8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x471ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471eac: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x471eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
    // 0x471eb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x471EB0u;
    {
        const bool branch_taken_0x471eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x471eb0) {
            ctx->pc = 0x471EC8u;
            goto label_471ec8;
        }
    }
    ctx->pc = 0x471EB8u;
    // 0x471eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x471eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x471ebc: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x471EBCu;
    {
        const bool branch_taken_0x471ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471EBCu;
            // 0x471ec0: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ebc) {
            ctx->pc = 0x471D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471d7c;
        }
    }
    ctx->pc = 0x471EC4u;
    // 0x471ec4: 0x0  nop
    ctx->pc = 0x471ec4u;
    // NOP
label_471ec8:
    // 0x471ec8: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x471EC8u;
    {
        const bool branch_taken_0x471ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471EC8u;
            // 0x471ecc: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ec8) {
            ctx->pc = 0x471D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_471d7c;
        }
    }
    ctx->pc = 0x471ED0u;
label_471ed0:
    // 0x471ed0: 0xc078cdc  jal         func_1E3370
    ctx->pc = 0x471ED0u;
    SET_GPR_U32(ctx, 31, 0x471ED8u);
    ctx->pc = 0x471ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471ED0u;
            // 0x471ed4: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471ED8u; }
        if (ctx->pc != 0x471ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471ED8u; }
        if (ctx->pc != 0x471ED8u) { return; }
    }
    ctx->pc = 0x471ED8u;
label_471ed8:
    // 0x471ed8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x471ed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471edc: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x471edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x471ee0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x471ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x471ee4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x471ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x471ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x471eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x471eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ef0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x471ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x471ef4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x471ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x471ef8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x471ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x471efc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x471efcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471f00: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x471F00u;
    SET_GPR_U32(ctx, 31, 0x471F08u);
    ctx->pc = 0x471F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471F00u;
            // 0x471f04: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F08u; }
        if (ctx->pc != 0x471F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F08u; }
        if (ctx->pc != 0x471F08u) { return; }
    }
    ctx->pc = 0x471F08u;
label_471f08:
    // 0x471f08: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x471f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x471f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x471f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471f10: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x471f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x471f14: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x471f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x471f18: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x471F18u;
    SET_GPR_U32(ctx, 31, 0x471F20u);
    ctx->pc = 0x471F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471F18u;
            // 0x471f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F20u; }
        if (ctx->pc != 0x471F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F20u; }
        if (ctx->pc != 0x471F20u) { return; }
    }
    ctx->pc = 0x471F20u;
label_471f20:
    // 0x471f20: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x471f20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x471f24: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x471f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x471f28: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x471F28u;
    {
        const bool branch_taken_0x471f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471F28u;
            // 0x471f2c: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471f28) {
            ctx->pc = 0x472038u;
            goto label_472038;
        }
    }
    ctx->pc = 0x471F30u;
label_471f30:
    // 0x471f30: 0xc078cdc  jal         func_1E3370
    ctx->pc = 0x471F30u;
    SET_GPR_U32(ctx, 31, 0x471F38u);
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F38u; }
        if (ctx->pc != 0x471F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F38u; }
        if (ctx->pc != 0x471F38u) { return; }
    }
    ctx->pc = 0x471F38u;
label_471f38:
    // 0x471f38: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x471f38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471f3c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x471f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x471f40: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x471f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x471f44: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x471f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x471f48: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x471f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x471f4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x471f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x471f50: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x471f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x471f54: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x471f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471f58: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x471F58u;
    {
        const bool branch_taken_0x471f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x471f58) {
            ctx->pc = 0x471F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471F58u;
            // 0x471f5c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x471F7Cu;
            goto label_471f7c;
        }
    }
    ctx->pc = 0x471F60u;
    // 0x471f60: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x471f60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471f64: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x471f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x471f68: 0x64030012  daddiu      $v1, $zero, 0x12
    ctx->pc = 0x471f68u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
    // 0x471f6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x471f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x471f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x471f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x471f74: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x471f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x471f78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x471f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_471f7c:
    // 0x471f7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x471f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x471f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x471f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x471f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471f88: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x471F88u;
    SET_GPR_U32(ctx, 31, 0x471F90u);
    ctx->pc = 0x471F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471F88u;
            // 0x471f8c: 0x3046001f  andi        $a2, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F90u; }
        if (ctx->pc != 0x471F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471F90u; }
        if (ctx->pc != 0x471F90u) { return; }
    }
    ctx->pc = 0x471F90u;
label_471f90:
    // 0x471f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x471f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471f94: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x471f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x471f98: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x471f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x471f9c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x471f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x471fa0: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x471FA0u;
    SET_GPR_U32(ctx, 31, 0x471FA8u);
    ctx->pc = 0x471FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471FA0u;
            // 0x471fa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471FA8u; }
        if (ctx->pc != 0x471FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471FA8u; }
        if (ctx->pc != 0x471FA8u) { return; }
    }
    ctx->pc = 0x471FA8u;
label_471fa8:
    // 0x471fa8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x471fa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471fac: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x471facu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x471fb0: 0xc078d40  jal         func_1E3500
    ctx->pc = 0x471FB0u;
    SET_GPR_U32(ctx, 31, 0x471FB8u);
    ctx->pc = 0x471FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471FB0u;
            // 0x471fb4: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3500u;
    if (runtime->hasFunction(0x1E3500u)) {
        auto targetFn = runtime->lookupFunction(0x1E3500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471FB8u; }
        if (ctx->pc != 0x471FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3500_0x1e3500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x471FB8u; }
        if (ctx->pc != 0x471FB8u) { return; }
    }
    ctx->pc = 0x471FB8u;
label_471fb8:
    // 0x471fb8: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x471fb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x471fbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x471fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x471fc0: 0x3084ff7f  andi        $a0, $a0, 0xFF7F
    ctx->pc = 0x471fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65407);
    // 0x471fc4: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x471fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x471fc8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x471fc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x471fcc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x471fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x471fd0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x471FD0u;
    {
        const bool branch_taken_0x471fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x471FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471FD0u;
            // 0x471fd4: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x471fd0) {
            ctx->pc = 0x471FFCu;
            goto label_471ffc;
        }
    }
    ctx->pc = 0x471FD8u;
    // 0x471fd8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x471fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x471fdc: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x471FDCu;
    {
        const bool branch_taken_0x471fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x471fdc) {
            ctx->pc = 0x471FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471FDCu;
            // 0x471fe0: 0x96430002  lhu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472000u;
            goto label_472000;
        }
    }
    ctx->pc = 0x471FE4u;
    // 0x471fe4: 0x2a03002f  slti        $v1, $s0, 0x2F
    ctx->pc = 0x471fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x471fe8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x471FE8u;
    {
        const bool branch_taken_0x471fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x471fe8) {
            ctx->pc = 0x471FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x471FE8u;
            // 0x471fec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x472010u;
            goto label_472010;
        }
    }
    ctx->pc = 0x471FF0u;
    // 0x471ff0: 0x2a010032  slti        $at, $s0, 0x32
    ctx->pc = 0x471ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x471ff4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x471FF4u;
    {
        const bool branch_taken_0x471ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x471ff4) {
            ctx->pc = 0x47200Cu;
            goto label_47200c;
        }
    }
    ctx->pc = 0x471FFCu;
label_471ffc:
    // 0x471ffc: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x471ffcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_472000:
    // 0x472000: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x472000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x472004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x472004u;
    {
        const bool branch_taken_0x472004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472004u;
            // 0x472008: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472004) {
            ctx->pc = 0x472038u;
            goto label_472038;
        }
    }
    ctx->pc = 0x47200Cu;
label_47200c:
    // 0x47200c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x47200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_472010:
    // 0x472010: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x472010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x472014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x472014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472018: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x472018u;
    SET_GPR_U32(ctx, 31, 0x472020u);
    ctx->pc = 0x47201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472018u;
            // 0x47201c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472020u; }
        if (ctx->pc != 0x472020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472020u; }
        if (ctx->pc != 0x472020u) { return; }
    }
    ctx->pc = 0x472020u;
label_472020:
    // 0x472020: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x472020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x472024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x472024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472028: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x472028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x47202c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x47202cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x472030: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x472030u;
    SET_GPR_U32(ctx, 31, 0x472038u);
    ctx->pc = 0x472034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472030u;
            // 0x472034: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472038u; }
        if (ctx->pc != 0x472038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472038u; }
        if (ctx->pc != 0x472038u) { return; }
    }
    ctx->pc = 0x472038u;
label_472038:
    // 0x472038: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x472038u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x47203c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x47203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x472040: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x472040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x472044: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x472044u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x472048: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x472048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x47204c: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x47204cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x472050: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x472050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_472054:
    // 0x472054: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x472054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x472058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x472058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47205c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47205cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x472060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x472060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x472064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x472068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x472068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47206c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x472070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472074: 0x3e00008  jr          $ra
    ctx->pc = 0x472074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472074u;
            // 0x472078: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47207Cu;
    // 0x47207c: 0x0  nop
    ctx->pc = 0x47207cu;
    // NOP
}
