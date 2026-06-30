#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412090
// Address: 0x412090 - 0x4121e0
void sub_00412090_0x412090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412090_0x412090");
#endif

    switch (ctx->pc) {
        case 0x412090u: goto label_412090;
        case 0x412094u: goto label_412094;
        case 0x412098u: goto label_412098;
        case 0x41209cu: goto label_41209c;
        case 0x4120a0u: goto label_4120a0;
        case 0x4120a4u: goto label_4120a4;
        case 0x4120a8u: goto label_4120a8;
        case 0x4120acu: goto label_4120ac;
        case 0x4120b0u: goto label_4120b0;
        case 0x4120b4u: goto label_4120b4;
        case 0x4120b8u: goto label_4120b8;
        case 0x4120bcu: goto label_4120bc;
        case 0x4120c0u: goto label_4120c0;
        case 0x4120c4u: goto label_4120c4;
        case 0x4120c8u: goto label_4120c8;
        case 0x4120ccu: goto label_4120cc;
        case 0x4120d0u: goto label_4120d0;
        case 0x4120d4u: goto label_4120d4;
        case 0x4120d8u: goto label_4120d8;
        case 0x4120dcu: goto label_4120dc;
        case 0x4120e0u: goto label_4120e0;
        case 0x4120e4u: goto label_4120e4;
        case 0x4120e8u: goto label_4120e8;
        case 0x4120ecu: goto label_4120ec;
        case 0x4120f0u: goto label_4120f0;
        case 0x4120f4u: goto label_4120f4;
        case 0x4120f8u: goto label_4120f8;
        case 0x4120fcu: goto label_4120fc;
        case 0x412100u: goto label_412100;
        case 0x412104u: goto label_412104;
        case 0x412108u: goto label_412108;
        case 0x41210cu: goto label_41210c;
        case 0x412110u: goto label_412110;
        case 0x412114u: goto label_412114;
        case 0x412118u: goto label_412118;
        case 0x41211cu: goto label_41211c;
        case 0x412120u: goto label_412120;
        case 0x412124u: goto label_412124;
        case 0x412128u: goto label_412128;
        case 0x41212cu: goto label_41212c;
        case 0x412130u: goto label_412130;
        case 0x412134u: goto label_412134;
        case 0x412138u: goto label_412138;
        case 0x41213cu: goto label_41213c;
        case 0x412140u: goto label_412140;
        case 0x412144u: goto label_412144;
        case 0x412148u: goto label_412148;
        case 0x41214cu: goto label_41214c;
        case 0x412150u: goto label_412150;
        case 0x412154u: goto label_412154;
        case 0x412158u: goto label_412158;
        case 0x41215cu: goto label_41215c;
        case 0x412160u: goto label_412160;
        case 0x412164u: goto label_412164;
        case 0x412168u: goto label_412168;
        case 0x41216cu: goto label_41216c;
        case 0x412170u: goto label_412170;
        case 0x412174u: goto label_412174;
        case 0x412178u: goto label_412178;
        case 0x41217cu: goto label_41217c;
        case 0x412180u: goto label_412180;
        case 0x412184u: goto label_412184;
        case 0x412188u: goto label_412188;
        case 0x41218cu: goto label_41218c;
        case 0x412190u: goto label_412190;
        case 0x412194u: goto label_412194;
        case 0x412198u: goto label_412198;
        case 0x41219cu: goto label_41219c;
        case 0x4121a0u: goto label_4121a0;
        case 0x4121a4u: goto label_4121a4;
        case 0x4121a8u: goto label_4121a8;
        case 0x4121acu: goto label_4121ac;
        case 0x4121b0u: goto label_4121b0;
        case 0x4121b4u: goto label_4121b4;
        case 0x4121b8u: goto label_4121b8;
        case 0x4121bcu: goto label_4121bc;
        case 0x4121c0u: goto label_4121c0;
        case 0x4121c4u: goto label_4121c4;
        case 0x4121c8u: goto label_4121c8;
        case 0x4121ccu: goto label_4121cc;
        case 0x4121d0u: goto label_4121d0;
        case 0x4121d4u: goto label_4121d4;
        case 0x4121d8u: goto label_4121d8;
        case 0x4121dcu: goto label_4121dc;
        default: break;
    }

    ctx->pc = 0x412090u;

label_412090:
    // 0x412090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x412090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_412094:
    // 0x412094: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x412094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_412098:
    // 0x412098: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x412098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41209c:
    // 0x41209c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4120a0:
    // 0x4120a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4120a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4120a4:
    // 0x4120a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4120a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4120a8:
    // 0x4120a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4120a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4120ac:
    // 0x4120ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4120acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4120b0:
    // 0x4120b0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4120b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4120b4:
    // 0x4120b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4120b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4120b8:
    // 0x4120b8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x4120b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4120bc:
    // 0x4120bc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x4120bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4120c0:
    // 0x4120c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4120c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4120c4:
    // 0x4120c4: 0xc04f278  jal         func_13C9E0
label_4120c8:
    if (ctx->pc == 0x4120C8u) {
        ctx->pc = 0x4120C8u;
            // 0x4120c8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4120CCu;
        goto label_4120cc;
    }
    ctx->pc = 0x4120C4u;
    SET_GPR_U32(ctx, 31, 0x4120CCu);
    ctx->pc = 0x4120C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4120C4u;
            // 0x4120c8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4120CCu; }
        if (ctx->pc != 0x4120CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4120CCu; }
        if (ctx->pc != 0x4120CCu) { return; }
    }
    ctx->pc = 0x4120CCu;
label_4120cc:
    // 0x4120cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4120ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4120d0:
    // 0x4120d0: 0xc04ce80  jal         func_133A00
label_4120d4:
    if (ctx->pc == 0x4120D4u) {
        ctx->pc = 0x4120D4u;
            // 0x4120d4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4120D8u;
        goto label_4120d8;
    }
    ctx->pc = 0x4120D0u;
    SET_GPR_U32(ctx, 31, 0x4120D8u);
    ctx->pc = 0x4120D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4120D0u;
            // 0x4120d4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4120D8u; }
        if (ctx->pc != 0x4120D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4120D8u; }
        if (ctx->pc != 0x4120D8u) { return; }
    }
    ctx->pc = 0x4120D8u;
label_4120d8:
    // 0x4120d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4120d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4120dc:
    // 0x4120dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4120dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4120e0:
    // 0x4120e0: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4120e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4120e4:
    // 0x4120e4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4120e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4120e8:
    // 0x4120e8: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4120e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4120ec:
    // 0x4120ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4120ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4120f0:
    // 0x4120f0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4120f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4120f4:
    // 0x4120f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4120f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4120f8:
    // 0x4120f8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4120f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4120fc:
    // 0x4120fc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4120fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_412100:
    // 0x412100: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x412100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_412104:
    // 0x412104: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x412104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_412108:
    // 0x412108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41210c:
    // 0x41210c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x41210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_412110:
    // 0x412110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412114:
    // 0x412114: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x412114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_412118:
    // 0x412118: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x412118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_41211c:
    // 0x41211c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x41211cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_412120:
    // 0x412120: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x412120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_412124:
    // 0x412124: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x412124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_412128:
    // 0x412128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x412128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41212c:
    // 0x41212c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x41212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_412130:
    // 0x412130: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x412130u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_412134:
    // 0x412134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412138:
    // 0x412138: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x412138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_41213c:
    // 0x41213c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412140:
    // 0x412140: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x412140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_412144:
    // 0x412144: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x412144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_412148:
    // 0x412148: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x412148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_41214c:
    // 0x41214c: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x41214cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_412150:
    // 0x412150: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x412150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_412154:
    // 0x412154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x412154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_412158:
    // 0x412158: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x412158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_41215c:
    // 0x41215c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x41215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_412160:
    // 0x412160: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x412160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_412164:
    // 0x412164: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x412164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_412168:
    // 0x412168: 0xc04e4a4  jal         func_139290
label_41216c:
    if (ctx->pc == 0x41216Cu) {
        ctx->pc = 0x41216Cu;
            // 0x41216c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412170u;
        goto label_412170;
    }
    ctx->pc = 0x412168u;
    SET_GPR_U32(ctx, 31, 0x412170u);
    ctx->pc = 0x41216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412168u;
            // 0x41216c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412170u; }
        if (ctx->pc != 0x412170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412170u; }
        if (ctx->pc != 0x412170u) { return; }
    }
    ctx->pc = 0x412170u;
label_412170:
    // 0x412170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x412170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412174:
    // 0x412174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x412174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412178:
    // 0x412178: 0xc04cd60  jal         func_133580
label_41217c:
    if (ctx->pc == 0x41217Cu) {
        ctx->pc = 0x41217Cu;
            // 0x41217c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x412180u;
        goto label_412180;
    }
    ctx->pc = 0x412178u;
    SET_GPR_U32(ctx, 31, 0x412180u);
    ctx->pc = 0x41217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412178u;
            // 0x41217c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412180u; }
        if (ctx->pc != 0x412180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412180u; }
        if (ctx->pc != 0x412180u) { return; }
    }
    ctx->pc = 0x412180u;
label_412180:
    // 0x412180: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x412180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_412184:
    // 0x412184: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x412184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_412188:
    // 0x412188: 0x320f809  jalr        $t9
label_41218c:
    if (ctx->pc == 0x41218Cu) {
        ctx->pc = 0x41218Cu;
            // 0x41218c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412190u;
        goto label_412190;
    }
    ctx->pc = 0x412188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x412190u);
        ctx->pc = 0x41218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412188u;
            // 0x41218c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x412190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x412190u; }
            if (ctx->pc != 0x412190u) { return; }
        }
        }
    }
    ctx->pc = 0x412190u;
label_412190:
    // 0x412190: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x412190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_412194:
    // 0x412194: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x412194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_412198:
    // 0x412198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x412198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41219c:
    // 0x41219c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4121a0:
    // 0x4121a0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x4121a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4121a4:
    // 0x4121a4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4121a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4121a8:
    // 0x4121a8: 0xc04cfcc  jal         func_133F30
label_4121ac:
    if (ctx->pc == 0x4121ACu) {
        ctx->pc = 0x4121ACu;
            // 0x4121ac: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4121B0u;
        goto label_4121b0;
    }
    ctx->pc = 0x4121A8u;
    SET_GPR_U32(ctx, 31, 0x4121B0u);
    ctx->pc = 0x4121ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4121A8u;
            // 0x4121ac: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4121B0u; }
        if (ctx->pc != 0x4121B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4121B0u; }
        if (ctx->pc != 0x4121B0u) { return; }
    }
    ctx->pc = 0x4121B0u;
label_4121b0:
    // 0x4121b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4121b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4121b4:
    // 0x4121b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4121b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4121b8:
    // 0x4121b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4121b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4121bc:
    // 0x4121bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4121bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4121c0:
    // 0x4121c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4121c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4121c4:
    // 0x4121c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4121c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4121c8:
    // 0x4121c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4121c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4121cc:
    // 0x4121cc: 0x3e00008  jr          $ra
label_4121d0:
    if (ctx->pc == 0x4121D0u) {
        ctx->pc = 0x4121D0u;
            // 0x4121d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4121D4u;
        goto label_4121d4;
    }
    ctx->pc = 0x4121CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4121D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4121CCu;
            // 0x4121d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4121D4u;
label_4121d4:
    // 0x4121d4: 0x0  nop
    ctx->pc = 0x4121d4u;
    // NOP
label_4121d8:
    // 0x4121d8: 0x0  nop
    ctx->pc = 0x4121d8u;
    // NOP
label_4121dc:
    // 0x4121dc: 0x0  nop
    ctx->pc = 0x4121dcu;
    // NOP
}
