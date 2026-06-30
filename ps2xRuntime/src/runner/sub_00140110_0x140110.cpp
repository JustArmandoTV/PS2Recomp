#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140110
// Address: 0x140110 - 0x1402f0
void sub_00140110_0x140110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140110_0x140110");
#endif

    switch (ctx->pc) {
        case 0x1401b8u: goto label_1401b8;
        case 0x14022cu: goto label_14022c;
        case 0x14028cu: goto label_14028c;
        case 0x1402acu: goto label_1402ac;
        case 0x1402c4u: goto label_1402c4;
        default: break;
    }

    ctx->pc = 0x140110u;

    // 0x140110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x140110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x140114: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x140114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x140118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x140118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14011c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x140120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x140124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x140128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14012c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x140130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140138: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x140138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14013c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140140: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x140140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140144: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x140144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x140148: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x140148u;
    {
        const bool branch_taken_0x140148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14014Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140148u;
            // 0x14014c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140148) {
            ctx->pc = 0x1402C4u;
            goto label_1402c4;
        }
    }
    ctx->pc = 0x140150u;
    // 0x140150: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140154: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140158: 0xac535784  sw          $s3, 0x5784($v0)
    ctx->pc = 0x140158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 19));
    // 0x14015c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140160: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140164: 0xac725788  sw          $s2, 0x5788($v1)
    ctx->pc = 0x140164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 18));
    // 0x140168: 0xac51578c  sw          $s1, 0x578C($v0)
    ctx->pc = 0x140168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 17));
    // 0x14016c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140174: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x140174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x140178: 0xac485794  sw          $t0, 0x5794($v0)
    ctx->pc = 0x140178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 8));
    // 0x14017c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140180: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140184: 0x31040002  andi        $a0, $t0, 0x2
    ctx->pc = 0x140184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x140188: 0xac655760  sw          $a1, 0x5760($v1)
    ctx->pc = 0x140188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22368), GPR_U32(ctx, 5));
    // 0x14018c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14018Cu;
    {
        const bool branch_taken_0x14018c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14018Cu;
            // 0x140190: 0xac455768  sw          $a1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14018c) {
            ctx->pc = 0x1401A4u;
            goto label_1401a4;
        }
    }
    ctx->pc = 0x140194u;
    // 0x140194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140198: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14019c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14019Cu;
    {
        const bool branch_taken_0x14019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14019Cu;
            // 0x1401a0: 0xac4357b0  sw          $v1, 0x57B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14019c) {
            ctx->pc = 0x1401ACu;
            goto label_1401ac;
        }
    }
    ctx->pc = 0x1401A4u;
label_1401a4:
    // 0x1401a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401a8: 0xac4057b0  sw          $zero, 0x57B0($v0)
    ctx->pc = 0x1401a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 0));
label_1401ac:
    // 0x1401ac: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1401acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1401b0: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x1401B0u;
    SET_GPR_U32(ctx, 31, 0x1401B8u);
    ctx->pc = 0x1401B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1401B0u;
            // 0x1401b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1401B8u; }
        if (ctx->pc != 0x1401B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1401B8u; }
        if (ctx->pc != 0x1401B8u) { return; }
    }
    ctx->pc = 0x1401B8u;
label_1401b8:
    // 0x1401b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401bc: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x1401bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x1401c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1401C0u;
    {
        const bool branch_taken_0x1401c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401C0u;
            // 0x1401c4: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401c0) {
            ctx->pc = 0x14021Cu;
            goto label_14021c;
        }
    }
    ctx->pc = 0x1401C8u;
    // 0x1401c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1401cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401d0: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x1401d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x1401d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401d8: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x1401d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x1401dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401e0: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x1401e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x1401e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401e8: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x1401e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x1401ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401f0: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x1401f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x1401f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1401f8: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x1401f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x1401fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1401fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140200: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x140200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x140204: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140208: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x140208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x14020c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140210: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x140210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x140214: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140218: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x140218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_14021c:
    // 0x14021c: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x140220: 0x32140007  andi        $s4, $s0, 0x7
    ctx->pc = 0x140220u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x140224: 0x8e76003c  lw          $s6, 0x3C($s3)
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x140228: 0x32170300  andi        $s7, $s0, 0x300
    ctx->pc = 0x140228u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_14022c:
    // 0x14022c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x140230: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140230u;
    {
        const bool branch_taken_0x140230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x140230) {
            ctx->pc = 0x140258u;
            goto label_140258;
        }
    }
    ctx->pc = 0x140238u;
    // 0x140238: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x140238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14023c: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x14023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x140240: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x140240u;
    {
        const bool branch_taken_0x140240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140240) {
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x140248u;
    // 0x140248: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x140248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x14024c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14024Cu;
    {
        const bool branch_taken_0x14024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14024c) {
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x140254u;
    // 0x140254: 0x0  nop
    ctx->pc = 0x140254u;
    // NOP
label_140258:
    // 0x140258: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x140258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x14025c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140260: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x140264: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x140264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x140268: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14026c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x140270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140270u;
    {
        const bool branch_taken_0x140270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140270) {
            ctx->pc = 0x140298u;
            goto label_140298;
        }
    }
    ctx->pc = 0x140278u;
    // 0x140278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14027c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14027cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140280: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140284: 0xc04fec4  jal         func_13FB10
    ctx->pc = 0x140284u;
    SET_GPR_U32(ctx, 31, 0x14028Cu);
    ctx->pc = 0x140288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140284u;
            // 0x140288: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FB10u;
    if (runtime->hasFunction(0x13FB10u)) {
        auto targetFn = runtime->lookupFunction(0x13FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14028Cu; }
        if (ctx->pc != 0x14028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FB10_0x13fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14028Cu; }
        if (ctx->pc != 0x14028Cu) { return; }
    }
    ctx->pc = 0x14028Cu;
label_14028c:
    // 0x14028c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14028Cu;
    {
        const bool branch_taken_0x14028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14028c) {
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x140294u;
    // 0x140294: 0x0  nop
    ctx->pc = 0x140294u;
    // NOP
label_140298:
    // 0x140298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14029c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1402a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402a4: 0xc04ff6c  jal         func_13FDB0
    ctx->pc = 0x1402A4u;
    SET_GPR_U32(ctx, 31, 0x1402ACu);
    ctx->pc = 0x1402A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402A4u;
            // 0x1402a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FDB0u;
    if (runtime->hasFunction(0x13FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x13FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402ACu; }
        if (ctx->pc != 0x1402ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FDB0_0x13fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402ACu; }
        if (ctx->pc != 0x1402ACu) { return; }
    }
    ctx->pc = 0x1402ACu;
label_1402ac:
    // 0x1402ac: 0x0  nop
    ctx->pc = 0x1402acu;
    // NOP
label_1402b0:
    // 0x1402b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1402b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1402b4: 0x16a0ffdd  bnez        $s5, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1402B4u;
    {
        const bool branch_taken_0x1402b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1402B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402B4u;
            // 0x1402b8: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402b4) {
            ctx->pc = 0x14022Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14022c;
        }
    }
    ctx->pc = 0x1402BCu;
    // 0x1402bc: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x1402BCu;
    SET_GPR_U32(ctx, 31, 0x1402C4u);
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402C4u; }
        if (ctx->pc != 0x1402C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402C4u; }
        if (ctx->pc != 0x1402C4u) { return; }
    }
    ctx->pc = 0x1402C4u;
label_1402c4:
    // 0x1402c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1402c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1402c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1402cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1402ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1402d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1402d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1402d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1402d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1402d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1402d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1402dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1402e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1402e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1402e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1402e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1402e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1402E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1402ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402E8u;
            // 0x1402ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1402F0u;
}
