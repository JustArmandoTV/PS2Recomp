#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004984F0
// Address: 0x4984f0 - 0x498d40
void sub_004984F0_0x4984f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004984F0_0x4984f0");
#endif

    switch (ctx->pc) {
        case 0x498528u: goto label_498528;
        case 0x4986d4u: goto label_4986d4;
        case 0x4986ecu: goto label_4986ec;
        case 0x498708u: goto label_498708;
        case 0x49871cu: goto label_49871c;
        case 0x498734u: goto label_498734;
        case 0x49876cu: goto label_49876c;
        case 0x49878cu: goto label_49878c;
        case 0x4987b8u: goto label_4987b8;
        case 0x4987f8u: goto label_4987f8;
        case 0x49880cu: goto label_49880c;
        case 0x498820u: goto label_498820;
        case 0x498848u: goto label_498848;
        case 0x498854u: goto label_498854;
        case 0x4988b4u: goto label_4988b4;
        case 0x4988d8u: goto label_4988d8;
        case 0x4988f0u: goto label_4988f0;
        case 0x498928u: goto label_498928;
        case 0x498990u: goto label_498990;
        case 0x4989a8u: goto label_4989a8;
        case 0x4989c0u: goto label_4989c0;
        case 0x4989d4u: goto label_4989d4;
        case 0x4989f4u: goto label_4989f4;
        case 0x498a04u: goto label_498a04;
        case 0x498a20u: goto label_498a20;
        case 0x498a34u: goto label_498a34;
        case 0x498a4cu: goto label_498a4c;
        case 0x498a84u: goto label_498a84;
        case 0x498aa4u: goto label_498aa4;
        case 0x498ad0u: goto label_498ad0;
        case 0x498b08u: goto label_498b08;
        case 0x498b20u: goto label_498b20;
        case 0x498b38u: goto label_498b38;
        case 0x498b4cu: goto label_498b4c;
        case 0x498b6cu: goto label_498b6c;
        case 0x498b7cu: goto label_498b7c;
        case 0x498b8cu: goto label_498b8c;
        case 0x498b9cu: goto label_498b9c;
        case 0x498bacu: goto label_498bac;
        case 0x498bbcu: goto label_498bbc;
        case 0x498bccu: goto label_498bcc;
        case 0x498bdcu: goto label_498bdc;
        case 0x498becu: goto label_498bec;
        case 0x498bfcu: goto label_498bfc;
        case 0x498c0cu: goto label_498c0c;
        case 0x498c28u: goto label_498c28;
        case 0x498c3cu: goto label_498c3c;
        case 0x498c54u: goto label_498c54;
        case 0x498c8cu: goto label_498c8c;
        case 0x498cacu: goto label_498cac;
        case 0x498cd8u: goto label_498cd8;
        case 0x498d10u: goto label_498d10;
        default: break;
    }

    ctx->pc = 0x4984f0u;

    // 0x4984f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4984f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4984f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4984f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4984f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4984f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4984fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4984fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x498500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x498500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x498504: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x498504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x498508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49850c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x498510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x498514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x498518: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x498518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49851c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498520: 0xc04a508  jal         func_129420
    ctx->pc = 0x498520u;
    SET_GPR_U32(ctx, 31, 0x498528u);
    ctx->pc = 0x498524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498520u;
            // 0x498524: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498528u; }
        if (ctx->pc != 0x498528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498528u; }
        if (ctx->pc != 0x498528u) { return; }
    }
    ctx->pc = 0x498528u;
label_498528:
    // 0x498528: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x498528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49852c: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x49852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x498530: 0x10430172  beq         $v0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x498530u;
    {
        const bool branch_taken_0x498530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x498534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498530u;
            // 0x498534: 0x26b40001  addiu       $s4, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498530) {
            ctx->pc = 0x498AFCu;
            goto label_498afc;
        }
    }
    ctx->pc = 0x498538u;
    // 0x498538: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x498538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x49853c: 0x50430112  beql        $v0, $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x49853Cu;
    {
        const bool branch_taken_0x49853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49853c) {
            ctx->pc = 0x498540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49853Cu;
            // 0x498540: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498988u;
            goto label_498988;
        }
    }
    ctx->pc = 0x498544u;
    // 0x498544: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x498544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x498548: 0x504300b3  beql        $v0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x498548u;
    {
        const bool branch_taken_0x498548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498548) {
            ctx->pc = 0x49854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498548u;
            // 0x49854c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498818u;
            goto label_498818;
        }
    }
    ctx->pc = 0x498550u;
    // 0x498550: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x498550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x498554: 0x504300a5  beql        $v0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x498554u;
    {
        const bool branch_taken_0x498554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498554) {
            ctx->pc = 0x498558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498554u;
            // 0x498558: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4987ECu;
            goto label_4987ec;
        }
    }
    ctx->pc = 0x49855Cu;
    // 0x49855c: 0x2403009f  addiu       $v1, $zero, 0x9F
    ctx->pc = 0x49855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x498560: 0x504300a0  beql        $v0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x498560u;
    {
        const bool branch_taken_0x498560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498560) {
            ctx->pc = 0x498564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498560u;
            // 0x498564: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4987E4u;
            goto label_4987e4;
        }
    }
    ctx->pc = 0x498568u;
    // 0x498568: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x498568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x49856c: 0x50430057  beql        $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x49856Cu;
    {
        const bool branch_taken_0x49856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49856c) {
            ctx->pc = 0x498570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49856Cu;
            // 0x498570: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4986CCu;
            goto label_4986cc;
        }
    }
    ctx->pc = 0x498574u;
    // 0x498574: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x498574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x498578: 0x504301e6  beql        $v0, $v1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x498578u;
    {
        const bool branch_taken_0x498578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498578) {
            ctx->pc = 0x49857Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498578u;
            // 0x49857c: 0x26940007  addiu       $s4, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x498580u;
    // 0x498580: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x498580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x498584: 0x5043004f  beql        $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x498584u;
    {
        const bool branch_taken_0x498584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498584) {
            ctx->pc = 0x498588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498584u;
            // 0x498588: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4986C4u;
            goto label_4986c4;
        }
    }
    ctx->pc = 0x49858Cu;
    // 0x49858c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x49858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x498590: 0x1043004b  beq         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x498590u;
    {
        const bool branch_taken_0x498590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498590) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498598u;
    // 0x498598: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x498598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x49859c: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x49859Cu;
    {
        const bool branch_taken_0x49859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49859c) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985A4u;
    // 0x4985a4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x4985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x4985a8: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x4985A8u;
    {
        const bool branch_taken_0x4985a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985a8) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985B0u;
    // 0x4985b0: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x4985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x4985b4: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x4985B4u;
    {
        const bool branch_taken_0x4985b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985b4) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985BCu;
    // 0x4985bc: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x4985bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x4985c0: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x4985C0u;
    {
        const bool branch_taken_0x4985c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985c0) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985C8u;
    // 0x4985c8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x4985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4985cc: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x4985CCu;
    {
        const bool branch_taken_0x4985cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985cc) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985D4u;
    // 0x4985d4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4985d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x4985d8: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x4985D8u;
    {
        const bool branch_taken_0x4985d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985d8) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985E0u;
    // 0x4985e0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x4985e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x4985e4: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x4985E4u;
    {
        const bool branch_taken_0x4985e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985e4) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985ECu;
    // 0x4985ec: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x4985ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x4985f0: 0x10430033  beq         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x4985F0u;
    {
        const bool branch_taken_0x4985f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985f0) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4985F8u;
    // 0x4985f8: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x4985f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x4985fc: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x4985FCu;
    {
        const bool branch_taken_0x4985fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4985fc) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498604u;
    // 0x498604: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x498604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x498608: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x498608u;
    {
        const bool branch_taken_0x498608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498608) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498610u;
    // 0x498610: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x498610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x498614: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x498614u;
    {
        const bool branch_taken_0x498614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498614) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x49861Cu;
    // 0x49861c: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x49861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x498620: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x498620u;
    {
        const bool branch_taken_0x498620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498620) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498628u;
    // 0x498628: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x498628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x49862c: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x49862Cu;
    {
        const bool branch_taken_0x49862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49862c) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498634u;
    // 0x498634: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x498634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x498638: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x498638u;
    {
        const bool branch_taken_0x498638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498638) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498640u;
    // 0x498640: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x498640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x498644: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x498644u;
    {
        const bool branch_taken_0x498644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498644) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x49864Cu;
    // 0x49864c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x49864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x498650: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x498650u;
    {
        const bool branch_taken_0x498650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498650) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498658u;
    // 0x498658: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x498658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x49865c: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x49865Cu;
    {
        const bool branch_taken_0x49865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49865c) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498664u;
    // 0x498664: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x498664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x498668: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x498668u;
    {
        const bool branch_taken_0x498668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498668) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498670u;
    // 0x498670: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x498670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x498674: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x498674u;
    {
        const bool branch_taken_0x498674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498674) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x49867Cu;
    // 0x49867c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x49867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x498680: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x498680u;
    {
        const bool branch_taken_0x498680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498680) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498688u;
    // 0x498688: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x498688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49868c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x49868Cu;
    {
        const bool branch_taken_0x49868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49868c) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x498694u;
    // 0x498694: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x498694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x498698: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x498698u;
    {
        const bool branch_taken_0x498698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x498698) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4986A0u;
    // 0x4986a0: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x4986a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x4986a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4986A4u;
    {
        const bool branch_taken_0x4986a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4986a4) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4986ACu;
    // 0x4986ac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4986acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4986b0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4986B0u;
    {
        const bool branch_taken_0x4986b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4986b0) {
            ctx->pc = 0x4986C0u;
            goto label_4986c0;
        }
    }
    ctx->pc = 0x4986B8u;
    // 0x4986b8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x4986B8u;
    {
        const bool branch_taken_0x4986b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4986BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4986B8u;
            // 0x4986bc: 0x2951023  subu        $v0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986b8) {
            ctx->pc = 0x498D18u;
            goto label_498d18;
        }
    }
    ctx->pc = 0x4986C0u;
label_4986c0:
    // 0x4986c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4986c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4986c4:
    // 0x4986c4: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x4986C4u;
    {
        const bool branch_taken_0x4986c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4986C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4986C4u;
            // 0x4986c8: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986c4) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x4986CCu;
label_4986cc:
    // 0x4986cc: 0xc040160  jal         func_100580
    ctx->pc = 0x4986CCu;
    SET_GPR_U32(ctx, 31, 0x4986D4u);
    ctx->pc = 0x4986D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4986CCu;
            // 0x4986d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4986D4u; }
        if (ctx->pc != 0x4986D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4986D4u; }
        if (ctx->pc != 0x4986D4u) { return; }
    }
    ctx->pc = 0x4986D4u;
label_4986d4:
    // 0x4986d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4986d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986d8: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x4986d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4986dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4986dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4986e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4986e4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4986E4u;
    SET_GPR_U32(ctx, 31, 0x4986ECu);
    ctx->pc = 0x4986E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4986E4u;
            // 0x4986e8: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4986ECu; }
        if (ctx->pc != 0x4986ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4986ECu; }
        if (ctx->pc != 0x4986ECu) { return; }
    }
    ctx->pc = 0x4986ECu;
label_4986ec:
    // 0x4986ec: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4986ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4986f0: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x4986F0u;
    {
        const bool branch_taken_0x4986f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4986F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4986F0u;
            // 0x4986f4: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986f0) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x4986F8u;
    // 0x4986f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4986f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4986fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4986fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498700: 0xc040110  jal         func_100440
    ctx->pc = 0x498700u;
    SET_GPR_U32(ctx, 31, 0x498708u);
    ctx->pc = 0x498704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498700u;
            // 0x498704: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498708u; }
        if (ctx->pc != 0x498708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498708u; }
        if (ctx->pc != 0x498708u) { return; }
    }
    ctx->pc = 0x498708u;
label_498708:
    // 0x498708: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x498708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x49870c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49870cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498710: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x498710u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x498714: 0xc040110  jal         func_100440
    ctx->pc = 0x498714u;
    SET_GPR_U32(ctx, 31, 0x49871Cu);
    ctx->pc = 0x498718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498714u;
            // 0x498718: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49871Cu; }
        if (ctx->pc != 0x49871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49871Cu; }
        if (ctx->pc != 0x49871Cu) { return; }
    }
    ctx->pc = 0x49871Cu;
label_49871c:
    // 0x49871c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x49871cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x498720: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498724: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x498724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x498728: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x498728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x49872c: 0xc04a508  jal         func_129420
    ctx->pc = 0x49872Cu;
    SET_GPR_U32(ctx, 31, 0x498734u);
    ctx->pc = 0x498730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49872Cu;
            // 0x498730: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498734u; }
        if (ctx->pc != 0x498734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498734u; }
        if (ctx->pc != 0x498734u) { return; }
    }
    ctx->pc = 0x498734u;
label_498734:
    // 0x498734: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x498734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x498738: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498738u;
    {
        const bool branch_taken_0x498738 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498738u;
            // 0x49873c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498738) {
            ctx->pc = 0x49874Cu;
            goto label_49874c;
        }
    }
    ctx->pc = 0x498740u;
    // 0x498740: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x498740u;
    {
        const bool branch_taken_0x498740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498740) {
            ctx->pc = 0x49874Cu;
            goto label_49874c;
        }
    }
    ctx->pc = 0x498748u;
    // 0x498748: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x498748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_49874c:
    // 0x49874c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49874Cu;
    {
        const bool branch_taken_0x49874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49874c) {
            ctx->pc = 0x498750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49874Cu;
            // 0x498750: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498764u;
            goto label_498764;
        }
    }
    ctx->pc = 0x498754u;
    // 0x498754: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x498754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498758: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x498758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49875c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49875Cu;
    {
        const bool branch_taken_0x49875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49875Cu;
            // 0x498760: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49875c) {
            ctx->pc = 0x498768u;
            goto label_498768;
        }
    }
    ctx->pc = 0x498764u;
label_498764:
    // 0x498764: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x498764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_498768:
    // 0x498768: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x498768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49876c:
    // 0x49876c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x49876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x498770: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x498770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x498774: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x498774u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x498778: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x498778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49877c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x498780: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x498780u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498784: 0xc040110  jal         func_100440
    ctx->pc = 0x498784u;
    SET_GPR_U32(ctx, 31, 0x49878Cu);
    ctx->pc = 0x498788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498784u;
            // 0x498788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49878Cu; }
        if (ctx->pc != 0x49878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49878Cu; }
        if (ctx->pc != 0x49878Cu) { return; }
    }
    ctx->pc = 0x49878Cu;
label_49878c:
    // 0x49878c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x49878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x498790: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498794: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x498794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x498798: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x498798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x49879c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x49879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4987a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4987a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4987a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4987a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4987a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4987a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4987ac: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x4987acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4987b0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4987B0u;
    SET_GPR_U32(ctx, 31, 0x4987B8u);
    ctx->pc = 0x4987B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4987B0u;
            // 0x4987b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4987B8u; }
        if (ctx->pc != 0x4987B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4987B8u; }
        if (ctx->pc != 0x4987B8u) { return; }
    }
    ctx->pc = 0x4987B8u;
label_4987b8:
    // 0x4987b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4987b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4987bc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x4987bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4987c0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x4987c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4987c4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4987c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4987c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4987c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4987cc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4987ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4987d0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4987d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4987d4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4987D4u;
    {
        const bool branch_taken_0x4987d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4987D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4987D4u;
            // 0x4987d8: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987d4) {
            ctx->pc = 0x49876Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49876c;
        }
    }
    ctx->pc = 0x4987DCu;
    // 0x4987dc: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x4987DCu;
    {
        const bool branch_taken_0x4987dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4987dc) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x4987E4u;
label_4987e4:
    // 0x4987e4: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x4987E4u;
    {
        const bool branch_taken_0x4987e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4987E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4987E4u;
            // 0x4987e8: 0x26940007  addiu       $s4, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4987e4) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x4987ECu;
label_4987ec:
    // 0x4987ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4987ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4987f0: 0xc040110  jal         func_100440
    ctx->pc = 0x4987F0u;
    SET_GPR_U32(ctx, 31, 0x4987F8u);
    ctx->pc = 0x4987F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4987F0u;
            // 0x4987f4: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4987F8u; }
        if (ctx->pc != 0x4987F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4987F8u; }
        if (ctx->pc != 0x4987F8u) { return; }
    }
    ctx->pc = 0x4987F8u;
label_4987f8:
    // 0x4987f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4987f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4987fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4987fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498800: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x498800u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x498804: 0xc04a508  jal         func_129420
    ctx->pc = 0x498804u;
    SET_GPR_U32(ctx, 31, 0x49880Cu);
    ctx->pc = 0x498808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498804u;
            // 0x498808: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49880Cu; }
        if (ctx->pc != 0x49880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49880Cu; }
        if (ctx->pc != 0x49880Cu) { return; }
    }
    ctx->pc = 0x49880Cu;
label_49880c:
    // 0x49880c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x49880cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x498810: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x498810u;
    {
        const bool branch_taken_0x498810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498810u;
            // 0x498814: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498810) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x498818u;
label_498818:
    // 0x498818: 0xc040160  jal         func_100580
    ctx->pc = 0x498818u;
    SET_GPR_U32(ctx, 31, 0x498820u);
    ctx->pc = 0x49881Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498818u;
            // 0x49881c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498820u; }
        if (ctx->pc != 0x498820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498820u; }
        if (ctx->pc != 0x498820u) { return; }
    }
    ctx->pc = 0x498820u;
label_498820:
    // 0x498820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x498820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498824: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x498824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x498828: 0x96830001  lhu         $v1, 0x1($s4)
    ctx->pc = 0x498828u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x49882c: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x49882cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x498830: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x498830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x498834: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x498834u;
    {
        const bool branch_taken_0x498834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498834u;
            // 0x498838: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498834) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x49883Cu;
    // 0x49883c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x49883cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x498840: 0xc040110  jal         func_100440
    ctx->pc = 0x498840u;
    SET_GPR_U32(ctx, 31, 0x498848u);
    ctx->pc = 0x498844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498840u;
            // 0x498844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498848u; }
        if (ctx->pc != 0x498848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498848u; }
        if (ctx->pc != 0x498848u) { return; }
    }
    ctx->pc = 0x498848u;
label_498848:
    // 0x498848: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x498848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x49884c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49884cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498850: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x498850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_498854:
    // 0x498854: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x498854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498858: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x498858u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49885c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x498860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x498860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x498864: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x498864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x498868: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x498868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49886c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x49886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x498870: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x498870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498874: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x498874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x498878: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x498878u;
    {
        const bool branch_taken_0x498878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498878u;
            // 0x49887c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498878) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498880u;
    // 0x498880: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x498880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x498884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x498884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x498888: 0x246309f0  addiu       $v1, $v1, 0x9F0
    ctx->pc = 0x498888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2544));
    // 0x49888c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x498890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x498890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498894: 0x400008  jr          $v0
    ctx->pc = 0x498894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4988A0u: goto label_4988a0;
            case 0x4988E0u: goto label_4988e0;
            case 0x4988F8u: goto label_4988f8;
            case 0x498908u: goto label_498908;
            case 0x498918u: goto label_498918;
            case 0x498930u: goto label_498930;
            case 0x498948u: goto label_498948;
            case 0x498958u: goto label_498958;
            case 0x498968u: goto label_498968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x49889Cu;
    // 0x49889c: 0x0  nop
    ctx->pc = 0x49889cu;
    // NOP
label_4988a0:
    // 0x4988a0: 0x96920001  lhu         $s2, 0x1($s4)
    ctx->pc = 0x4988a0u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x4988a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4988a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4988a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4988a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988ac: 0xc040110  jal         func_100440
    ctx->pc = 0x4988ACu;
    SET_GPR_U32(ctx, 31, 0x4988B4u);
    ctx->pc = 0x4988B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4988ACu;
            // 0x4988b0: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988B4u; }
        if (ctx->pc != 0x4988B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988B4u; }
        if (ctx->pc != 0x4988B4u) { return; }
    }
    ctx->pc = 0x4988B4u;
label_4988b4:
    // 0x4988b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4988b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4988b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4988b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4988bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4988bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4988c0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4988c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x4988c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4988c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4988c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4988c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4988cc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4988ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4988d0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4988D0u;
    SET_GPR_U32(ctx, 31, 0x4988D8u);
    ctx->pc = 0x4988D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4988D0u;
            // 0x4988d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988D8u; }
        if (ctx->pc != 0x4988D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988D8u; }
        if (ctx->pc != 0x4988D8u) { return; }
    }
    ctx->pc = 0x4988D8u;
label_4988d8:
    // 0x4988d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4988D8u;
    {
        const bool branch_taken_0x4988d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4988DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4988D8u;
            // 0x4988dc: 0x292a021  addu        $s4, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988d8) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x4988E0u;
label_4988e0:
    // 0x4988e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4988e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4988e4: 0x26850003  addiu       $a1, $s4, 0x3
    ctx->pc = 0x4988e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x4988e8: 0xc04a508  jal         func_129420
    ctx->pc = 0x4988E8u;
    SET_GPR_U32(ctx, 31, 0x4988F0u);
    ctx->pc = 0x4988ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4988E8u;
            // 0x4988ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988F0u; }
        if (ctx->pc != 0x4988F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4988F0u; }
        if (ctx->pc != 0x4988F0u) { return; }
    }
    ctx->pc = 0x4988F0u;
label_4988f0:
    // 0x4988f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4988F0u;
    {
        const bool branch_taken_0x4988f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4988F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4988F0u;
            // 0x4988f4: 0x26940007  addiu       $s4, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4988f0) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x4988F8u;
label_4988f8:
    // 0x4988f8: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x4988f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4988fc: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x4988fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x498900: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x498900u;
    {
        const bool branch_taken_0x498900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498900u;
            // 0x498904: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498900) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498908u;
label_498908:
    // 0x498908: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x498908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49890c: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x49890cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x498910: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x498910u;
    {
        const bool branch_taken_0x498910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498910u;
            // 0x498914: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498910) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498918u;
label_498918:
    // 0x498918: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x498918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x49891c: 0x26850003  addiu       $a1, $s4, 0x3
    ctx->pc = 0x49891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x498920: 0xc04a508  jal         func_129420
    ctx->pc = 0x498920u;
    SET_GPR_U32(ctx, 31, 0x498928u);
    ctx->pc = 0x498924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498920u;
            // 0x498924: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498928u; }
        if (ctx->pc != 0x498928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498928u; }
        if (ctx->pc != 0x498928u) { return; }
    }
    ctx->pc = 0x498928u;
label_498928:
    // 0x498928: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x498928u;
    {
        const bool branch_taken_0x498928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498928u;
            // 0x49892c: 0x2694000b  addiu       $s4, $s4, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498928) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498930u;
label_498930:
    // 0x498930: 0x9a820003  lwr         $v0, 0x3($s4)
    ctx->pc = 0x498930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x498934: 0x8a820006  lwl         $v0, 0x6($s4)
    ctx->pc = 0x498934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 6); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x498938: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x498938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x49893c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x49893Cu;
    {
        const bool branch_taken_0x49893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49893Cu;
            // 0x498940: 0x26940007  addiu       $s4, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49893c) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498944u;
    // 0x498944: 0x0  nop
    ctx->pc = 0x498944u;
    // NOP
label_498948:
    // 0x498948: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x498948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49894c: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x49894cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x498950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x498950u;
    {
        const bool branch_taken_0x498950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498950u;
            // 0x498954: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498950) {
            ctx->pc = 0x498968u;
            goto label_498968;
        }
    }
    ctx->pc = 0x498958u;
label_498958:
    // 0x498958: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x498958u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x49895c: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x49895cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x498960: 0x26940003  addiu       $s4, $s4, 0x3
    ctx->pc = 0x498960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x498964: 0x0  nop
    ctx->pc = 0x498964u;
    // NOP
label_498968:
    // 0x498968: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x498968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49896c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x49896cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498970: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x498970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x498974: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x498974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x498978: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x498978u;
    {
        const bool branch_taken_0x498978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498978) {
            ctx->pc = 0x49897Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498978u;
            // 0x49897c: 0x3262ffff  andi        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x498854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498854;
        }
    }
    ctx->pc = 0x498980u;
    // 0x498980: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x498980u;
    {
        const bool branch_taken_0x498980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x498980) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x498988u;
label_498988:
    // 0x498988: 0xc040160  jal         func_100580
    ctx->pc = 0x498988u;
    SET_GPR_U32(ctx, 31, 0x498990u);
    ctx->pc = 0x49898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498988u;
            // 0x49898c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498990u; }
        if (ctx->pc != 0x498990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498990u; }
        if (ctx->pc != 0x498990u) { return; }
    }
    ctx->pc = 0x498990u;
label_498990:
    // 0x498990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x498990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498994: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x498994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x498998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x498998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49899c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4989a0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4989A0u;
    SET_GPR_U32(ctx, 31, 0x4989A8u);
    ctx->pc = 0x4989A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4989A0u;
            // 0x4989a4: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989A8u; }
        if (ctx->pc != 0x4989A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989A8u; }
        if (ctx->pc != 0x4989A8u) { return; }
    }
    ctx->pc = 0x4989A8u;
label_4989a8:
    // 0x4989a8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4989a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4989ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4989ACu;
    {
        const bool branch_taken_0x4989ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4989B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4989ACu;
            // 0x4989b0: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4989ac) {
            ctx->pc = 0x4989E0u;
            goto label_4989e0;
        }
    }
    ctx->pc = 0x4989B4u;
    // 0x4989b4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4989b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4989b8: 0xc040110  jal         func_100440
    ctx->pc = 0x4989B8u;
    SET_GPR_U32(ctx, 31, 0x4989C0u);
    ctx->pc = 0x4989BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4989B8u;
            // 0x4989bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989C0u; }
        if (ctx->pc != 0x4989C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989C0u; }
        if (ctx->pc != 0x4989C0u) { return; }
    }
    ctx->pc = 0x4989C0u;
label_4989c0:
    // 0x4989c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4989c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4989c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4989c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4989c8: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x4989c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4989cc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4989CCu;
    SET_GPR_U32(ctx, 31, 0x4989D4u);
    ctx->pc = 0x4989D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4989CCu;
            // 0x4989d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989D4u; }
        if (ctx->pc != 0x4989D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989D4u; }
        if (ctx->pc != 0x4989D4u) { return; }
    }
    ctx->pc = 0x4989D4u;
label_4989d4:
    // 0x4989d4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4989d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4989d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4989D8u;
    {
        const bool branch_taken_0x4989d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4989DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4989D8u;
            // 0x4989dc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4989d8) {
            ctx->pc = 0x4989E4u;
            goto label_4989e4;
        }
    }
    ctx->pc = 0x4989E0u;
label_4989e0:
    // 0x4989e0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4989e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4989e4:
    // 0x4989e4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x4989e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4989e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4989e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4989ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x4989ECu;
    SET_GPR_U32(ctx, 31, 0x4989F4u);
    ctx->pc = 0x4989F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4989ECu;
            // 0x4989f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989F4u; }
        if (ctx->pc != 0x4989F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4989F4u; }
        if (ctx->pc != 0x4989F4u) { return; }
    }
    ctx->pc = 0x4989F4u;
label_4989f4:
    // 0x4989f4: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x4989f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x4989f8: 0x26850002  addiu       $a1, $s4, 0x2
    ctx->pc = 0x4989f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4989fc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4989FCu;
    SET_GPR_U32(ctx, 31, 0x498A04u);
    ctx->pc = 0x498A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4989FCu;
            // 0x498a00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A04u; }
        if (ctx->pc != 0x498A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A04u; }
        if (ctx->pc != 0x498A04u) { return; }
    }
    ctx->pc = 0x498A04u;
label_498a04:
    // 0x498a04: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498a08: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x498A08u;
    {
        const bool branch_taken_0x498a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498A08u;
            // 0x498a0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a08) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x498A10u;
    // 0x498a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x498a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x498a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498a18: 0xc040110  jal         func_100440
    ctx->pc = 0x498A18u;
    SET_GPR_U32(ctx, 31, 0x498A20u);
    ctx->pc = 0x498A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498A18u;
            // 0x498a1c: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A20u; }
        if (ctx->pc != 0x498A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A20u; }
        if (ctx->pc != 0x498A20u) { return; }
    }
    ctx->pc = 0x498A20u;
label_498a20:
    // 0x498a20: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x498a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x498a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x498a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498a28: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498a2c: 0xc040110  jal         func_100440
    ctx->pc = 0x498A2Cu;
    SET_GPR_U32(ctx, 31, 0x498A34u);
    ctx->pc = 0x498A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498A2Cu;
            // 0x498a30: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A34u; }
        if (ctx->pc != 0x498A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A34u; }
        if (ctx->pc != 0x498A34u) { return; }
    }
    ctx->pc = 0x498A34u;
label_498a34:
    // 0x498a34: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x498a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x498a38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498a3c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498a40: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x498a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x498a44: 0xc04a508  jal         func_129420
    ctx->pc = 0x498A44u;
    SET_GPR_U32(ctx, 31, 0x498A4Cu);
    ctx->pc = 0x498A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498A44u;
            // 0x498a48: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A4Cu; }
        if (ctx->pc != 0x498A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498A4Cu; }
        if (ctx->pc != 0x498A4Cu) { return; }
    }
    ctx->pc = 0x498A4Cu;
label_498a4c:
    // 0x498a4c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x498a4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498a50: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498A50u;
    {
        const bool branch_taken_0x498a50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x498A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498A50u;
            // 0x498a54: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a50) {
            ctx->pc = 0x498A64u;
            goto label_498a64;
        }
    }
    ctx->pc = 0x498A58u;
    // 0x498a58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x498A58u;
    {
        const bool branch_taken_0x498a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498a58) {
            ctx->pc = 0x498A64u;
            goto label_498a64;
        }
    }
    ctx->pc = 0x498A60u;
    // 0x498a60: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x498a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_498a64:
    // 0x498a64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x498A64u;
    {
        const bool branch_taken_0x498a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498a64) {
            ctx->pc = 0x498A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498A64u;
            // 0x498a68: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498A7Cu;
            goto label_498a7c;
        }
    }
    ctx->pc = 0x498A6Cu;
    // 0x498a6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x498a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498a70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x498a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x498a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498A74u;
    {
        const bool branch_taken_0x498a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498A74u;
            // 0x498a78: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a74) {
            ctx->pc = 0x498A80u;
            goto label_498a80;
        }
    }
    ctx->pc = 0x498A7Cu;
label_498a7c:
    // 0x498a7c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x498a7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_498a80:
    // 0x498a80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x498a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498a84:
    // 0x498a84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x498a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x498a88: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x498a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x498a8c: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x498a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x498a90: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x498a90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x498a94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x498a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x498a98: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x498a98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498a9c: 0xc040110  jal         func_100440
    ctx->pc = 0x498A9Cu;
    SET_GPR_U32(ctx, 31, 0x498AA4u);
    ctx->pc = 0x498AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498A9Cu;
            // 0x498aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498AA4u; }
        if (ctx->pc != 0x498AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498AA4u; }
        if (ctx->pc != 0x498AA4u) { return; }
    }
    ctx->pc = 0x498AA4u;
label_498aa4:
    // 0x498aa4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x498aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x498aa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498aac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x498aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x498ab0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x498ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x498ab4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x498ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x498ab8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498abc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x498abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x498ac0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x498ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498ac4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x498ac4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498ac8: 0xc04a508  jal         func_129420
    ctx->pc = 0x498AC8u;
    SET_GPR_U32(ctx, 31, 0x498AD0u);
    ctx->pc = 0x498ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498AC8u;
            // 0x498acc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498AD0u; }
        if (ctx->pc != 0x498AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498AD0u; }
        if (ctx->pc != 0x498AD0u) { return; }
    }
    ctx->pc = 0x498AD0u;
label_498ad0:
    // 0x498ad0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x498ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x498ad4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x498ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x498ad8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x498ad8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498adc: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498adcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498ae0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x498ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x498ae4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x498ae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498ae8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x498ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x498aec: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x498AECu;
    {
        const bool branch_taken_0x498aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498AECu;
            // 0x498af0: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498aec) {
            ctx->pc = 0x498A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498a84;
        }
    }
    ctx->pc = 0x498AF4u;
    // 0x498af4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x498AF4u;
    {
        const bool branch_taken_0x498af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x498af4) {
            ctx->pc = 0x498D14u;
            goto label_498d14;
        }
    }
    ctx->pc = 0x498AFCu;
label_498afc:
    // 0x498afc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x498afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x498b00: 0xc040160  jal         func_100580
    ctx->pc = 0x498B00u;
    SET_GPR_U32(ctx, 31, 0x498B08u);
    ctx->pc = 0x498B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B00u;
            // 0x498b04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B08u; }
        if (ctx->pc != 0x498B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B08u; }
        if (ctx->pc != 0x498B08u) { return; }
    }
    ctx->pc = 0x498B08u;
label_498b08:
    // 0x498b08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x498b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b0c: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x498b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x498b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x498b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x498b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x498b18: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B18u;
    SET_GPR_U32(ctx, 31, 0x498B20u);
    ctx->pc = 0x498B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B18u;
            // 0x498b1c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B20u; }
        if (ctx->pc != 0x498B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B20u; }
        if (ctx->pc != 0x498B20u) { return; }
    }
    ctx->pc = 0x498B20u;
label_498b20:
    // 0x498b20: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x498b20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498b24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x498B24u;
    {
        const bool branch_taken_0x498b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498B24u;
            // 0x498b28: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b24) {
            ctx->pc = 0x498B58u;
            goto label_498b58;
        }
    }
    ctx->pc = 0x498B2Cu;
    // 0x498b2c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x498b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498b30: 0xc040110  jal         func_100440
    ctx->pc = 0x498B30u;
    SET_GPR_U32(ctx, 31, 0x498B38u);
    ctx->pc = 0x498B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B30u;
            // 0x498b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B38u; }
        if (ctx->pc != 0x498B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B38u; }
        if (ctx->pc != 0x498B38u) { return; }
    }
    ctx->pc = 0x498B38u;
label_498b38:
    // 0x498b38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x498b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x498b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x498b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b40: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x498b40u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498b44: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B44u;
    SET_GPR_U32(ctx, 31, 0x498B4Cu);
    ctx->pc = 0x498B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B44u;
            // 0x498b48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B4Cu; }
        if (ctx->pc != 0x498B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B4Cu; }
        if (ctx->pc != 0x498B4Cu) { return; }
    }
    ctx->pc = 0x498B4Cu;
label_498b4c:
    // 0x498b4c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x498b4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498b50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498B50u;
    {
        const bool branch_taken_0x498b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498B50u;
            // 0x498b54: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b50) {
            ctx->pc = 0x498B5Cu;
            goto label_498b5c;
        }
    }
    ctx->pc = 0x498B58u;
label_498b58:
    // 0x498b58: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x498b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_498b5c:
    // 0x498b5c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x498b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x498b60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b64: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B64u;
    SET_GPR_U32(ctx, 31, 0x498B6Cu);
    ctx->pc = 0x498B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B64u;
            // 0x498b68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B6Cu; }
        if (ctx->pc != 0x498B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B6Cu; }
        if (ctx->pc != 0x498B6Cu) { return; }
    }
    ctx->pc = 0x498B6Cu;
label_498b6c:
    // 0x498b6c: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x498b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x498b70: 0x26850002  addiu       $a1, $s4, 0x2
    ctx->pc = 0x498b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x498b74: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B74u;
    SET_GPR_U32(ctx, 31, 0x498B7Cu);
    ctx->pc = 0x498B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B74u;
            // 0x498b78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B7Cu; }
        if (ctx->pc != 0x498B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B7Cu; }
        if (ctx->pc != 0x498B7Cu) { return; }
    }
    ctx->pc = 0x498B7Cu;
label_498b7c:
    // 0x498b7c: 0x2624000b  addiu       $a0, $s1, 0xB
    ctx->pc = 0x498b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x498b80: 0x26850003  addiu       $a1, $s4, 0x3
    ctx->pc = 0x498b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x498b84: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B84u;
    SET_GPR_U32(ctx, 31, 0x498B8Cu);
    ctx->pc = 0x498B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B84u;
            // 0x498b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B8Cu; }
        if (ctx->pc != 0x498B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B8Cu; }
        if (ctx->pc != 0x498B8Cu) { return; }
    }
    ctx->pc = 0x498B8Cu;
label_498b8c:
    // 0x498b8c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x498b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x498b90: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x498b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x498b94: 0xc04a508  jal         func_129420
    ctx->pc = 0x498B94u;
    SET_GPR_U32(ctx, 31, 0x498B9Cu);
    ctx->pc = 0x498B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498B94u;
            // 0x498b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B9Cu; }
        if (ctx->pc != 0x498B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498B9Cu; }
        if (ctx->pc != 0x498B9Cu) { return; }
    }
    ctx->pc = 0x498B9Cu;
label_498b9c:
    // 0x498b9c: 0x2624000d  addiu       $a0, $s1, 0xD
    ctx->pc = 0x498b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x498ba0: 0x26850005  addiu       $a1, $s4, 0x5
    ctx->pc = 0x498ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
    // 0x498ba4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BA4u;
    SET_GPR_U32(ctx, 31, 0x498BACu);
    ctx->pc = 0x498BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BA4u;
            // 0x498ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BACu; }
        if (ctx->pc != 0x498BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BACu; }
        if (ctx->pc != 0x498BACu) { return; }
    }
    ctx->pc = 0x498BACu;
label_498bac:
    // 0x498bac: 0x2624000e  addiu       $a0, $s1, 0xE
    ctx->pc = 0x498bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x498bb0: 0x26850006  addiu       $a1, $s4, 0x6
    ctx->pc = 0x498bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x498bb4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BB4u;
    SET_GPR_U32(ctx, 31, 0x498BBCu);
    ctx->pc = 0x498BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BB4u;
            // 0x498bb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BBCu; }
        if (ctx->pc != 0x498BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BBCu; }
        if (ctx->pc != 0x498BBCu) { return; }
    }
    ctx->pc = 0x498BBCu;
label_498bbc:
    // 0x498bbc: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x498bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x498bc0: 0x26850007  addiu       $a1, $s4, 0x7
    ctx->pc = 0x498bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
    // 0x498bc4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BC4u;
    SET_GPR_U32(ctx, 31, 0x498BCCu);
    ctx->pc = 0x498BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BC4u;
            // 0x498bc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BCCu; }
        if (ctx->pc != 0x498BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BCCu; }
        if (ctx->pc != 0x498BCCu) { return; }
    }
    ctx->pc = 0x498BCCu;
label_498bcc:
    // 0x498bcc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x498bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x498bd0: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x498bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x498bd4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BD4u;
    SET_GPR_U32(ctx, 31, 0x498BDCu);
    ctx->pc = 0x498BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BD4u;
            // 0x498bd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BDCu; }
        if (ctx->pc != 0x498BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BDCu; }
        if (ctx->pc != 0x498BDCu) { return; }
    }
    ctx->pc = 0x498BDCu;
label_498bdc:
    // 0x498bdc: 0x26240011  addiu       $a0, $s1, 0x11
    ctx->pc = 0x498bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17));
    // 0x498be0: 0x26850009  addiu       $a1, $s4, 0x9
    ctx->pc = 0x498be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
    // 0x498be4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BE4u;
    SET_GPR_U32(ctx, 31, 0x498BECu);
    ctx->pc = 0x498BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BE4u;
            // 0x498be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BECu; }
        if (ctx->pc != 0x498BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BECu; }
        if (ctx->pc != 0x498BECu) { return; }
    }
    ctx->pc = 0x498BECu;
label_498bec:
    // 0x498bec: 0x26240012  addiu       $a0, $s1, 0x12
    ctx->pc = 0x498becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
    // 0x498bf0: 0x2685000a  addiu       $a1, $s4, 0xA
    ctx->pc = 0x498bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
    // 0x498bf4: 0xc04a508  jal         func_129420
    ctx->pc = 0x498BF4u;
    SET_GPR_U32(ctx, 31, 0x498BFCu);
    ctx->pc = 0x498BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498BF4u;
            // 0x498bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BFCu; }
        if (ctx->pc != 0x498BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498BFCu; }
        if (ctx->pc != 0x498BFCu) { return; }
    }
    ctx->pc = 0x498BFCu;
label_498bfc:
    // 0x498bfc: 0x26240013  addiu       $a0, $s1, 0x13
    ctx->pc = 0x498bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19));
    // 0x498c00: 0x2685000b  addiu       $a1, $s4, 0xB
    ctx->pc = 0x498c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11));
    // 0x498c04: 0xc04a508  jal         func_129420
    ctx->pc = 0x498C04u;
    SET_GPR_U32(ctx, 31, 0x498C0Cu);
    ctx->pc = 0x498C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498C04u;
            // 0x498c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C0Cu; }
        if (ctx->pc != 0x498C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C0Cu; }
        if (ctx->pc != 0x498C0Cu) { return; }
    }
    ctx->pc = 0x498C0Cu;
label_498c0c:
    // 0x498c0c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498c0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498c10: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x498C10u;
    {
        const bool branch_taken_0x498c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498C10u;
            // 0x498c14: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c10) {
            ctx->pc = 0x498D00u;
            goto label_498d00;
        }
    }
    ctx->pc = 0x498C18u;
    // 0x498c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x498c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x498c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498c20: 0xc040110  jal         func_100440
    ctx->pc = 0x498C20u;
    SET_GPR_U32(ctx, 31, 0x498C28u);
    ctx->pc = 0x498C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498C20u;
            // 0x498c24: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C28u; }
        if (ctx->pc != 0x498C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C28u; }
        if (ctx->pc != 0x498C28u) { return; }
    }
    ctx->pc = 0x498C28u;
label_498c28:
    // 0x498c28: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x498c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x498c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x498c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498c30: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498c30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498c34: 0xc040110  jal         func_100440
    ctx->pc = 0x498C34u;
    SET_GPR_U32(ctx, 31, 0x498C3Cu);
    ctx->pc = 0x498C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498C34u;
            // 0x498c38: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C3Cu; }
        if (ctx->pc != 0x498C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C3Cu; }
        if (ctx->pc != 0x498C3Cu) { return; }
    }
    ctx->pc = 0x498C3Cu;
label_498c3c:
    // 0x498c3c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x498c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x498c40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498c44: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498c44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498c48: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x498c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x498c4c: 0xc04a508  jal         func_129420
    ctx->pc = 0x498C4Cu;
    SET_GPR_U32(ctx, 31, 0x498C54u);
    ctx->pc = 0x498C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498C4Cu;
            // 0x498c50: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C54u; }
        if (ctx->pc != 0x498C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498C54u; }
        if (ctx->pc != 0x498C54u) { return; }
    }
    ctx->pc = 0x498C54u;
label_498c54:
    // 0x498c54: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x498c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498c58: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498C58u;
    {
        const bool branch_taken_0x498c58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x498C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498C58u;
            // 0x498c5c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c58) {
            ctx->pc = 0x498C6Cu;
            goto label_498c6c;
        }
    }
    ctx->pc = 0x498C60u;
    // 0x498c60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x498C60u;
    {
        const bool branch_taken_0x498c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498c60) {
            ctx->pc = 0x498C6Cu;
            goto label_498c6c;
        }
    }
    ctx->pc = 0x498C68u;
    // 0x498c68: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x498c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_498c6c:
    // 0x498c6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x498C6Cu;
    {
        const bool branch_taken_0x498c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498c6c) {
            ctx->pc = 0x498C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x498C6Cu;
            // 0x498c70: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498C84u;
            goto label_498c84;
        }
    }
    ctx->pc = 0x498C74u;
    // 0x498c74: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x498c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x498c78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x498c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x498c7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498C7Cu;
    {
        const bool branch_taken_0x498c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498C7Cu;
            // 0x498c80: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c7c) {
            ctx->pc = 0x498C88u;
            goto label_498c88;
        }
    }
    ctx->pc = 0x498C84u;
label_498c84:
    // 0x498c84: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x498c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_498c88:
    // 0x498c88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x498c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498c8c:
    // 0x498c8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x498c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x498c90: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x498c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x498c94: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x498c94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x498c98: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x498c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x498c9c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x498c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x498ca0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x498ca0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498ca4: 0xc040110  jal         func_100440
    ctx->pc = 0x498CA4u;
    SET_GPR_U32(ctx, 31, 0x498CACu);
    ctx->pc = 0x498CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498CA4u;
            // 0x498ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498CACu; }
        if (ctx->pc != 0x498CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498CACu; }
        if (ctx->pc != 0x498CACu) { return; }
    }
    ctx->pc = 0x498CACu;
label_498cac:
    // 0x498cac: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x498cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x498cb0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498cb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x498cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x498cb8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x498cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x498cbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x498cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x498cc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498cc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x498cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x498cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x498cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498ccc: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x498cccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498cd0: 0xc04a508  jal         func_129420
    ctx->pc = 0x498CD0u;
    SET_GPR_U32(ctx, 31, 0x498CD8u);
    ctx->pc = 0x498CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498CD0u;
            // 0x498cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498CD8u; }
        if (ctx->pc != 0x498CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498CD8u; }
        if (ctx->pc != 0x498CD8u) { return; }
    }
    ctx->pc = 0x498CD8u;
label_498cd8:
    // 0x498cd8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x498cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x498cdc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x498cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x498ce0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x498ce0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498ce4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x498ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x498ce8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x498ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x498cec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x498cecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498cf0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x498cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x498cf4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x498CF4u;
    {
        const bool branch_taken_0x498cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498CF4u;
            // 0x498cf8: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498cf4) {
            ctx->pc = 0x498C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498c8c;
        }
    }
    ctx->pc = 0x498CFCu;
    // 0x498cfc: 0x0  nop
    ctx->pc = 0x498cfcu;
    // NOP
label_498d00:
    // 0x498d00: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x498d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x498d04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498d08: 0xc04a508  jal         func_129420
    ctx->pc = 0x498D08u;
    SET_GPR_U32(ctx, 31, 0x498D10u);
    ctx->pc = 0x498D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498D08u;
            // 0x498d0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498D10u; }
        if (ctx->pc != 0x498D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498D10u; }
        if (ctx->pc != 0x498D10u) { return; }
    }
    ctx->pc = 0x498D10u;
label_498d10:
    // 0x498d10: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x498d10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_498d14:
    // 0x498d14: 0x2951023  subu        $v0, $s4, $s5
    ctx->pc = 0x498d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_498d18:
    // 0x498d18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x498d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x498d1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x498d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498d20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x498d20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x498d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x498d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x498d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x498d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498d34: 0x3e00008  jr          $ra
    ctx->pc = 0x498D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498D34u;
            // 0x498d38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x498D3Cu;
    // 0x498d3c: 0x0  nop
    ctx->pc = 0x498d3cu;
    // NOP
}
