#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001574A0
// Address: 0x1574a0 - 0x157670
void sub_001574A0_0x1574a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001574A0_0x1574a0");
#endif

    switch (ctx->pc) {
        case 0x157544u: goto label_157544;
        case 0x1575b8u: goto label_1575b8;
        case 0x15761cu: goto label_15761c;
        case 0x157634u: goto label_157634;
        default: break;
    }

    ctx->pc = 0x1574a0u;

    // 0x1574a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1574a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1574a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1574a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1574a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1574ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1574acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1574b0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1574b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1574b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1574b8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1574b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1574bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1574c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1574c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1574c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1574c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1574c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1574c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1574cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1574ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1574d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1574d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1574d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1574d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1574d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574dc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1574e0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1574e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574e4: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1574E4u;
    {
        const bool branch_taken_0x1574e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574E4u;
            // 0x1574e8: 0xafaa00ac  sw          $t2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574e4) {
            ctx->pc = 0x157634u;
            goto label_157634;
        }
    }
    ctx->pc = 0x1574ECu;
    // 0x1574ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1574ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1574f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1574f4: 0xac525784  sw          $s2, 0x5784($v0)
    ctx->pc = 0x1574f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 18));
    // 0x1574f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1574fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1574fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157500: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x157500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x157504: 0xac485794  sw          $t0, 0x5794($v0)
    ctx->pc = 0x157504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 8));
    // 0x157508: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15750c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157510: 0x31040002  andi        $a0, $t0, 0x2
    ctx->pc = 0x157510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x157514: 0xac655760  sw          $a1, 0x5760($v1)
    ctx->pc = 0x157514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22368), GPR_U32(ctx, 5));
    // 0x157518: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157518u;
    {
        const bool branch_taken_0x157518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157518u;
            // 0x15751c: 0xac455768  sw          $a1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157518) {
            ctx->pc = 0x157530u;
            goto label_157530;
        }
    }
    ctx->pc = 0x157520u;
    // 0x157520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157524: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157528: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157528u;
    {
        const bool branch_taken_0x157528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157528u;
            // 0x15752c: 0xac4357b0  sw          $v1, 0x57B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157528) {
            ctx->pc = 0x157538u;
            goto label_157538;
        }
    }
    ctx->pc = 0x157530u;
label_157530:
    // 0x157530: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157534: 0xac4057b0  sw          $zero, 0x57B0($v0)
    ctx->pc = 0x157534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 0));
label_157538:
    // 0x157538: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15753c: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x15753Cu;
    SET_GPR_U32(ctx, 31, 0x157544u);
    ctx->pc = 0x157540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15753Cu;
            // 0x157540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157544u; }
        if (ctx->pc != 0x157544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157544u; }
        if (ctx->pc != 0x157544u) { return; }
    }
    ctx->pc = 0x157544u;
label_157544:
    // 0x157544: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157548: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x157548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x15754c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15754Cu;
    {
        const bool branch_taken_0x15754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15754Cu;
            // 0x157550: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15754c) {
            ctx->pc = 0x1575A8u;
            goto label_1575a8;
        }
    }
    ctx->pc = 0x157554u;
    // 0x157554: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157558: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15755c: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x15755cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x157560: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157564: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x157564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x157568: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15756c: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x15756cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x157570: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157574: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x157574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x157578: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15757c: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x15757cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x157580: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157584: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x157584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x157588: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15758c: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x15758cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x157590: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157594: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x157594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x157598: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15759c: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x15759cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x1575a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1575a4: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x1575a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_1575a8:
    // 0x1575a8: 0x8e550038  lw          $s5, 0x38($s2)
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1575ac: 0x32140007  andi        $s4, $s0, 0x7
    ctx->pc = 0x1575acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1575b0: 0x8e56003c  lw          $s6, 0x3C($s2)
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1575b4: 0x32130300  andi        $s3, $s0, 0x300
    ctx->pc = 0x1575b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_1575b8:
    // 0x1575b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1575bc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1575BCu;
    {
        const bool branch_taken_0x1575bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1575bc) {
            ctx->pc = 0x1575E0u;
            goto label_1575e0;
        }
    }
    ctx->pc = 0x1575C4u;
    // 0x1575c4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1575c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1575c8: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x1575c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1575cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1575CCu;
    {
        const bool branch_taken_0x1575cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575cc) {
            ctx->pc = 0x157620u;
            goto label_157620;
        }
    }
    ctx->pc = 0x1575D4u;
    // 0x1575d4: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x1575d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x1575d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1575D8u;
    {
        const bool branch_taken_0x1575d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575d8) {
            ctx->pc = 0x157620u;
            goto label_157620;
        }
    }
    ctx->pc = 0x1575E0u;
label_1575e0:
    // 0x1575e0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1575e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1575e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1575e8: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1575e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1575ec: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x1575ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x1575f0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1575f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1575f4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1575f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1575f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1575F8u;
    {
        const bool branch_taken_0x1575f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1575f8) {
            ctx->pc = 0x157620u;
            goto label_157620;
        }
    }
    ctx->pc = 0x157600u;
    // 0x157600: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x157604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157608: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x157608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15760c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157610: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x157610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157614: 0xc055c5c  jal         func_157170
    ctx->pc = 0x157614u;
    SET_GPR_U32(ctx, 31, 0x15761Cu);
    ctx->pc = 0x157618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157614u;
            // 0x157618: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157170u;
    if (runtime->hasFunction(0x157170u)) {
        auto targetFn = runtime->lookupFunction(0x157170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15761Cu; }
        if (ctx->pc != 0x15761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157170_0x157170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15761Cu; }
        if (ctx->pc != 0x15761Cu) { return; }
    }
    ctx->pc = 0x15761Cu;
label_15761c:
    // 0x15761c: 0x0  nop
    ctx->pc = 0x15761cu;
    // NOP
label_157620:
    // 0x157620: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x157620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x157624: 0x16a0ffe4  bnez        $s5, . + 4 + (-0x1C << 2)
    ctx->pc = 0x157624u;
    {
        const bool branch_taken_0x157624 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x157628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157624u;
            // 0x157628: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157624) {
            ctx->pc = 0x1575B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1575b8;
        }
    }
    ctx->pc = 0x15762Cu;
    // 0x15762c: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x15762Cu;
    SET_GPR_U32(ctx, 31, 0x157634u);
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157634u; }
        if (ctx->pc != 0x157634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157634u; }
        if (ctx->pc != 0x157634u) { return; }
    }
    ctx->pc = 0x157634u;
label_157634:
    // 0x157634: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x157634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157638: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157638u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15763c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15763cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x157640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15764c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15764cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15765c: 0x3e00008  jr          $ra
    ctx->pc = 0x15765Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15765Cu;
            // 0x157660: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157664u;
    // 0x157664: 0x0  nop
    ctx->pc = 0x157664u;
    // NOP
    // 0x157668: 0x0  nop
    ctx->pc = 0x157668u;
    // NOP
    // 0x15766c: 0x0  nop
    ctx->pc = 0x15766cu;
    // NOP
}
